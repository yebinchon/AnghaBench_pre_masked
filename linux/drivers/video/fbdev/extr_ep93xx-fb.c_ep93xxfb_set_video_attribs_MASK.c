
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {TYPE_1__* mach_info; } ;
struct TYPE_2__ {unsigned int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ep93xx_fbi*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_2)
{
 struct ep93xx_fbi *VAR_3 = VAR_2->par;
 unsigned int VAR_4;

 VAR_4 = VAR_1;
 VAR_4 |= VAR_3->mach_info->flags;
 FUNC_0(VAR_3, VAR_4, VAR_0);
}
