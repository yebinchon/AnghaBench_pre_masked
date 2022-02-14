
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_info {struct fb_info** fb; } ;
struct platform_device {int dummy; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct sm501fb_info*) ;
 struct sm501fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct sm501fb_info*,int ) ;
 int FUNC_4 (struct sm501fb_info*) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct sm501fb_info *VAR_3 = FUNC_2(VAR_2);
 struct fb_info *VAR_4 = VAR_3->fb[0];
 struct fb_info *VAR_5 = VAR_3->fb[1];

 FUNC_3(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_1);

 if (VAR_4)
  FUNC_5(VAR_4);
 if (VAR_5)
  FUNC_5(VAR_5);

 FUNC_4(VAR_3);
 FUNC_1(VAR_3);

 FUNC_0(VAR_5);
 FUNC_0(VAR_4);

 return 0;
}
