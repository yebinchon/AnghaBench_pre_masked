
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; struct aqc111_data* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct aqc111_data {int advertised_speed; int autoneg; int rxctl; int phy_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int *) ;
 int FUNC_1 (struct usbnet*,int ,int ) ;
 int FUNC_2 (struct usbnet*,int ,int ,int,int *) ;
 int FUNC_3 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_4 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_5 (int ) ;
 struct usbnet* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_12)
{
 struct usbnet *VAR_13 = FUNC_6(VAR_12);
 struct aqc111_data *VAR_14 = VAR_13->driver_priv;
 u16 VAR_15;
 u8 VAR_16;

 FUNC_5(VAR_13->net);


 VAR_14->phy_cfg |= VAR_2;
 VAR_14->phy_cfg &= ~VAR_1;
 VAR_14->phy_cfg &= ~VAR_3;

 VAR_16 = 0xFF;
 FUNC_4(VAR_13, VAR_0, VAR_5,
         1, 1, &VAR_16);

 VAR_15 = VAR_14->rxctl;
 VAR_15 &= ~VAR_10;
 FUNC_2(VAR_13, VAR_0, VAR_9, 2, &VAR_15);

 VAR_15 |= VAR_10;
 FUNC_2(VAR_13, VAR_0, VAR_9, 2, &VAR_15);

 FUNC_1(VAR_13, VAR_14->autoneg,
        VAR_14->advertised_speed);

 FUNC_0(VAR_13, VAR_0, VAR_8,
          2, &VAR_15);
 VAR_15 |= VAR_7;
 FUNC_2(VAR_13, VAR_0, VAR_8,
    2, &VAR_15);
 VAR_16 = VAR_11;
 FUNC_4(VAR_13, VAR_0, VAR_6,
         1, 1, &VAR_16);
 VAR_16 = 0x0;
 FUNC_3(VAR_13, VAR_0, VAR_4, 1, 1, &VAR_16);

 return FUNC_7(VAR_12);
}
