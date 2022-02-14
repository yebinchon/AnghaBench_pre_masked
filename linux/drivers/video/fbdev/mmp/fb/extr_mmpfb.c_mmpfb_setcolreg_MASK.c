
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmpfb_info {int * pseudo_palette; } ;
struct TYPE_4__ {scalar_t__ visual; } ;
struct TYPE_3__ {int blue; int green; int red; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct mmpfb_info* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned int VAR_5,
  unsigned int VAR_6, struct fb_info *VAR_7)
{
 struct mmpfb_info *VAR_8 = VAR_7->par;
 u32 VAR_9;

 if (VAR_7->fix.visual == VAR_1 && VAR_2 < 16) {
  VAR_9 = FUNC_0(VAR_3, &VAR_7->var.red);
  VAR_9 |= FUNC_0(VAR_4, &VAR_7->var.green);
  VAR_9 |= FUNC_0(VAR_5 , &VAR_7->var.blue);
  VAR_8->pseudo_palette[VAR_2] = VAR_9;
 }

 if (VAR_7->fix.visual == VAR_0 && VAR_2 < 256) {
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5);

 }

 return 0;
}
