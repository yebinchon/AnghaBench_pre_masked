
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; struct aqc111_data* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct aqc111_wol_cfg {scalar_t__ flags; int hw_addr; } ;
struct aqc111_data {int phy_cfg; scalar_t__ wol_flags; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int dev_addr; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int ,int *) ;
 int FUNC_3 (struct usbnet*,int ,int ,int ,int ,struct aqc111_wol_cfg*) ;
 int FUNC_4 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct aqc111_wol_cfg*,int ,int) ;
 struct usbnet* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_interface*,int ) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_28, pm_message_t VAR_29)
{
 struct usbnet *VAR_30 = FUNC_7(VAR_28);
 struct aqc111_data *VAR_31 = VAR_30->driver_priv;
 u16 VAR_32 = 0x00;
 u16 VAR_33;
 u8 VAR_34;

 FUNC_8(VAR_28, VAR_29);

 FUNC_0(VAR_30, VAR_0, VAR_20, 2, &VAR_33);
 VAR_32 = VAR_33;

 VAR_33 &= ~VAR_25;
 FUNC_1(VAR_30, VAR_0, VAR_20, 2, &VAR_33);

 FUNC_0(VAR_30, VAR_0, VAR_13,
          2, &VAR_33);
 VAR_33 |= VAR_14;
 FUNC_1(VAR_30, VAR_0, VAR_13,
    2, &VAR_33);

 VAR_34 = VAR_9;
 FUNC_4(VAR_30, VAR_0, VAR_8,
         1, 1, &VAR_34);

 VAR_32 &= ~(VAR_25 | VAR_24 |
     VAR_23 | VAR_22);
 FUNC_1(VAR_30, VAR_0, VAR_20,
    2, &VAR_32);

 VAR_34 = 0x00;
 FUNC_4(VAR_30, VAR_0, VAR_10,
         1, 1, &VAR_34);

 if (VAR_31->wol_flags) {
  struct aqc111_wol_cfg VAR_35;

  FUNC_6(&VAR_35, 0, sizeof(struct aqc111_wol_cfg));

  VAR_31->phy_cfg |= VAR_3;
  FUNC_5(VAR_35.hw_addr, VAR_30->net->dev_addr);
  VAR_35.flags = VAR_31->wol_flags;

  VAR_32 |= (VAR_21 | VAR_25);
  FUNC_1(VAR_30, VAR_0, VAR_20,
     2, &VAR_32);
  VAR_34 = 0x00;
  FUNC_4(VAR_30, VAR_0, VAR_7,
          1, 1, &VAR_34);
  VAR_34 = VAR_6;
  FUNC_4(VAR_30, VAR_0, VAR_5,
          1, 1, &VAR_34);
  VAR_34 = VAR_26;
  FUNC_4(VAR_30, VAR_0, VAR_10,
          1, 1, &VAR_34);
  VAR_34 = 0x07;
  FUNC_4(VAR_30, VAR_0, VAR_15,
          1, 1, &VAR_34);
  VAR_34 = 0x00;
  FUNC_4(VAR_30, VAR_0,
          VAR_19, 1, 1, &VAR_34);
  FUNC_4(VAR_30, VAR_0,
          VAR_18, 1, 1, &VAR_34);
  VAR_34 = 0xFF;
  FUNC_4(VAR_30, VAR_0, VAR_17,
          1, 1, &VAR_34);
  FUNC_4(VAR_30, VAR_0, VAR_16,
          1, 1, &VAR_34);

  FUNC_0(VAR_30, VAR_0,
           VAR_12, 2, &VAR_33);
  VAR_33 |= VAR_11;
  FUNC_1(VAR_30, VAR_0,
     VAR_12, 2, &VAR_33);

  FUNC_3(VAR_30, VAR_4, 0, 0,
     VAR_27, &VAR_35);
  FUNC_2(VAR_30, VAR_2, 0, 0,
       &VAR_31->phy_cfg);
 } else {
  VAR_31->phy_cfg |= VAR_1;
  FUNC_2(VAR_30, VAR_2, 0, 0,
       &VAR_31->phy_cfg);


  FUNC_0(VAR_30, VAR_0,
           VAR_12, 2, &VAR_33);
  VAR_33 &= ~VAR_11;
  FUNC_1(VAR_30, VAR_0,
     VAR_12, 2, &VAR_33);
 }

 return 0;
}
