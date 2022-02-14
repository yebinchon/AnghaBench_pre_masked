
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {struct phy* phy; } ;
struct platform_device {int dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*) ;
 struct phy* FUNC_3 (int *,char*) ;
 struct usbhs_priv* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_0(VAR_0)) {
  struct phy *VAR_4 = FUNC_3(&VAR_2->dev, "usb");

  if (FUNC_1(VAR_4))
   return FUNC_2(VAR_4);

  VAR_3->phy = VAR_4;
  return 0;
 }

 return -VAR_1;
}
