
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_phy {int dev; } ;
struct keystone_usbphy {int phy_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct keystone_usbphy* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_2)
{
 struct keystone_usbphy *VAR_3 = FUNC_0(VAR_2->dev);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->phy_ctrl, VAR_1);
 FUNC_2(VAR_3->phy_ctrl, VAR_1,
    VAR_4 | VAR_0);
 return 0;
}
