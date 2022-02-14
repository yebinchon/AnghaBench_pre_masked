
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {struct phy* phy; } ;
struct platform_device {int dev; } ;
struct phy {int dummy; } ;


 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 struct phy* FUNC_2 (int *,char*) ;
 struct usbhs_priv* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct usbhs_priv *VAR_1 = FUNC_3(VAR_0);
 struct phy *VAR_2 = FUNC_2(&VAR_0->dev, "usb");

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->phy = VAR_2;
 return 0;
}
