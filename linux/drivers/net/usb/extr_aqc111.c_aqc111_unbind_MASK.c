
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct usbnet {struct aqc111_data* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct aqc111_data {int phy_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,scalar_t__*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int ,int *) ;
 int FUNC_2 (struct aqc111_data*) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_7, struct usb_interface *VAR_8)
{
 struct aqc111_data *VAR_9 = VAR_7->driver_priv;
 u16 VAR_10;


 VAR_10 = VAR_6;
 FUNC_0(VAR_7, VAR_0, VAR_5,
    2, &VAR_10);
 VAR_10 = 0;
 FUNC_0(VAR_7, VAR_0, VAR_5,
    2, &VAR_10);


 VAR_9->phy_cfg &= ~VAR_1;
 VAR_9->phy_cfg |= VAR_2;
 VAR_9->phy_cfg &= ~VAR_4;
 FUNC_1(VAR_7, VAR_3, 0, 0,
    &VAR_9->phy_cfg);

 FUNC_2(VAR_9);
}
