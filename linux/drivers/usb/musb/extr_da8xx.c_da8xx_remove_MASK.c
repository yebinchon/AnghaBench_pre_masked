
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da8xx_glue {int usb_phy; int musb; } ;


 int FUNC_0 (int ) ;
 struct da8xx_glue* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct da8xx_glue *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->musb);
 FUNC_2(VAR_1->usb_phy);

 return 0;
}
