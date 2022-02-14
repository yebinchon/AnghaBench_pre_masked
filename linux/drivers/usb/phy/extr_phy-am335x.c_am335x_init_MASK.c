
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dev; } ;
struct am335x_phy {int dr_mode; int id; int phy_ctrl; } ;


 struct am335x_phy* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct usb_phy *VAR_0)
{
 struct am335x_phy *VAR_1 = FUNC_0(VAR_0->dev);

 FUNC_1(VAR_1->phy_ctrl, VAR_1->id, VAR_1->dr_mode, 1);
 return 0;
}
