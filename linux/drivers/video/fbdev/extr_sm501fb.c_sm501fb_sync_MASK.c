
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_par {struct sm501fb_info* info; } ;
struct sm501fb_info {scalar_t__ regs; } ;
struct fb_info {int dev; struct sm501fb_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_2)
{
 int VAR_3 = 1000000;
 struct sm501fb_par *VAR_4 = VAR_2->par;
 struct sm501fb_info *VAR_5 = VAR_4->info;


 while ((VAR_3 > 0) &&
        (FUNC_1(VAR_5->regs + VAR_1) &
  VAR_0) != 0)
  VAR_3--;

 if (VAR_3 <= 0) {
  FUNC_0(VAR_2->dev, "Timeout waiting for 2d engine sync\n");
  return 1;
 }
 return 0;
}
