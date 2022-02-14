
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cdns3 {int usb3_phy; int usb2_phy; int role_sw; } ;


 int FUNC_0 (struct cdns3*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct cdns3* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct cdns3 *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);
 FUNC_6(&VAR_0->dev);
 FUNC_0(VAR_1);
 FUNC_7(VAR_1->role_sw);
 FUNC_2(VAR_1->usb2_phy);
 FUNC_2(VAR_1->usb3_phy);
 FUNC_1(VAR_1->usb2_phy);
 FUNC_1(VAR_1->usb3_phy);
 return 0;
}
