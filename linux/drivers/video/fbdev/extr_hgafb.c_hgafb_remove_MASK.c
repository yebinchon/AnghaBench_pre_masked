
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 struct fb_info* FUNC_4 (struct platform_device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_4(VAR_3);

 FUNC_2();
 FUNC_1();

 if (VAR_4) {
  FUNC_6(VAR_4);
  FUNC_0(VAR_4);
 }

 FUNC_3(VAR_0);

 if (VAR_2)
  FUNC_5(0x3b0, 12);

 if (VAR_1)
  FUNC_5(0x3bf, 1);

 return 0;
}
