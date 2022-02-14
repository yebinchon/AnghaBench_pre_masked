
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int blue; int green; int red; scalar_t__ grayscale; } ;
struct TYPE_3__ {scalar_t__ visual; } ;
struct fb_info {TYPE_2__ var; int * pseudo_palette; TYPE_1__ fix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct fb_info*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      struct fb_info *VAR_7)
{
 if (VAR_7->var.grayscale) {

  VAR_3 = VAR_4 = VAR_5 = (VAR_3 * 77 + VAR_4 * 151 + VAR_5 * 28) >> 8;
 }


 if (VAR_7->fix.visual == VAR_1) {
  u32 *VAR_8 = VAR_7->pseudo_palette;
  u32 VAR_9;

  if (VAR_2 >= 16)
   return -VAR_0;

  VAR_9 = FUNC_0(VAR_3, &VAR_7->var.red);
  VAR_9 |= FUNC_0(VAR_4, &VAR_7->var.green);
  VAR_9 |= FUNC_0(VAR_5, &VAR_7->var.blue);

  VAR_8[VAR_2] = VAR_9;
 } else {
  if (VAR_2 >= 256)
   return -VAR_0;

  FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return 0;
}
