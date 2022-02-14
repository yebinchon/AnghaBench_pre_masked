
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct dm816x_usb_phy {int usbphy_ctrl; int syscon; int dev; int usb_ctrl; int refclk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 struct dm816x_usb_phy* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_6)
{
 struct dm816x_usb_phy *VAR_7 = FUNC_3(VAR_6);
 unsigned int VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_7->refclk) != 24000000)
  FUNC_2(VAR_7->dev, "nonstandard phy refclk\n");


 VAR_9 = FUNC_5(VAR_7->syscon, VAR_7->usb_ctrl,
       VAR_3 |
       VAR_5 |
       VAR_4,
       0);
 FUNC_4(VAR_7->syscon, VAR_7->usb_ctrl, &VAR_8);
 if ((VAR_8 & 3) != 0)
  FUNC_1(VAR_7->dev,
    "Working dm816x USB_CTRL! (0x%08x)\n",
    VAR_8);






 FUNC_4(VAR_7->syscon, VAR_7->usbphy_ctrl, &VAR_8);
 VAR_8 |= VAR_1 |
  VAR_2 |
  VAR_0;
 FUNC_6(VAR_7->syscon, VAR_7->usbphy_ctrl, VAR_8);

 return 0;
}
