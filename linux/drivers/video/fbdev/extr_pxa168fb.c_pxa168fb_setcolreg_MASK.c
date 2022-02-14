
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pxa168fb_info {int* pseudo_palette; scalar_t__ reg_base; } ;
struct TYPE_4__ {scalar_t__ visual; } ;
struct TYPE_3__ {int blue; int green; int red; scalar_t__ grayscale; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct pxa168fb_info* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6,
   unsigned int VAR_7, unsigned int VAR_8, struct fb_info *VAR_9)
{
 struct pxa168fb_info *VAR_10 = VAR_9->par;
 u32 VAR_11;

 if (VAR_9->var.grayscale)
  VAR_5 = VAR_6 = VAR_7 = (19595 * VAR_5 + 38470 * VAR_6 +
     7471 * VAR_7) >> 16;

 if (VAR_9->fix.visual == VAR_1 && VAR_4 < 16) {
  VAR_11 = FUNC_0(VAR_5, &VAR_9->var.red);
  VAR_11 |= FUNC_0(VAR_6, &VAR_9->var.green);
  VAR_11 |= FUNC_0(VAR_7 , &VAR_9->var.blue);
  VAR_10->pseudo_palette[VAR_4] = VAR_11;
 }

 if (VAR_9->fix.visual == VAR_0 && VAR_4 < 256) {
  VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7);
  FUNC_2(VAR_11, VAR_10->reg_base + VAR_3);
  FUNC_2(0x8300 | VAR_4, VAR_10->reg_base + VAR_2);
 }

 return 0;
}
