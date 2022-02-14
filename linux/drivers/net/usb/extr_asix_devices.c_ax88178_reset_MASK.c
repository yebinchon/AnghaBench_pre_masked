
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int phy_id; } ;
struct usbnet {TYPE_1__* net; TYPE_2__ mii; int data; } ;
struct asix_data {int phymode; int ledmode; int * mac_addr; } ;
typedef scalar_t__ __le16 ;
struct TYPE_4__ {int dev_addr; } ;


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
 scalar_t__ FUNC_0 (struct usbnet*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (struct usbnet*,int) ;
 int FUNC_3 (struct usbnet*,int ,int,int ,int,scalar_t__*,int ) ;
 int FUNC_4 (struct usbnet*,int,int ) ;
 int FUNC_5 (struct usbnet*,int ,int ,int ,int ,int *,int ) ;
 int FUNC_6 (struct usbnet*,int,int,int ) ;
 int FUNC_7 (struct usbnet*,int ,int ) ;
 int FUNC_8 (struct usbnet*,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct usbnet*) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*,char*,...) ;
 int FUNC_16 (struct usbnet*) ;

__attribute__((used)) static int FUNC_17(struct usbnet *VAR_24)
{
 struct asix_data *VAR_25 = (struct asix_data *)&VAR_24->data;
 int VAR_26;
 __le16 VAR_27;
 u8 VAR_28;
 int VAR_29 = 0;
 u32 VAR_30;

 FUNC_3(VAR_24, VAR_6, 0, 0, 1, &VAR_28, 0);
 FUNC_15(VAR_24->net, "GPIO Status: 0x%04x\n", VAR_28);

 FUNC_5(VAR_24, VAR_9, 0, 0, 0, ((void*)0), 0);
 FUNC_3(VAR_24, VAR_5, 0x0017, 0, 2, &VAR_27, 0);
 FUNC_5(VAR_24, VAR_8, 0, 0, 0, ((void*)0), 0);

 FUNC_15(VAR_24->net, "EEPROM index 0x17 is 0x%04x\n", VAR_27);

 if (VAR_27 == FUNC_9(0xffff)) {
  VAR_25->phymode = VAR_22;
  VAR_25->ledmode = 0;
  VAR_29 = 1;
 } else {
  VAR_25->phymode = FUNC_10(VAR_27) & 0x7F;
  VAR_25->ledmode = FUNC_10(VAR_27) >> 8;
  VAR_29 = (FUNC_10(VAR_27) & 0x80) ? 0 : 1;
 }
 FUNC_15(VAR_24->net, "GPIO0: %d, PhyMode: %d\n", VAR_29, VAR_25->phymode);


 FUNC_6(VAR_24, VAR_14 | VAR_13 |
   VAR_12, 40, 0);
 if ((FUNC_10(VAR_27) >> 8) != 1) {
  FUNC_6(VAR_24, 0x003c, 30, 0);
  FUNC_6(VAR_24, 0x001c, 300, 0);
  FUNC_6(VAR_24, 0x003c, 30, 0);
 } else {
  FUNC_15(VAR_24->net, "gpio phymode == 1 path\n");
  FUNC_6(VAR_24, VAR_12, 30, 0);
  FUNC_6(VAR_24, VAR_12 | VAR_13, 30, 0);
 }


 VAR_30 = FUNC_0(VAR_24);
 FUNC_15(VAR_24->net, "PHYID=0x%08x\n", VAR_30);


 FUNC_5(VAR_24, VAR_7, 0, 0, 0, ((void*)0), 0);

 FUNC_4(VAR_24, 0, 0);
 FUNC_14(150);

 FUNC_4(VAR_24, VAR_16 | VAR_15, 0);
 FUNC_14(150);

 FUNC_8(VAR_24, 0, 0);

 if (VAR_25->phymode == VAR_22) {
  FUNC_11(VAR_24);
  FUNC_14(60);
 } else if (VAR_25->phymode == VAR_23)
  FUNC_16(VAR_24);

 FUNC_2(VAR_24, VAR_18 | VAR_17);
 FUNC_1(VAR_24->net, VAR_24->mii.phy_id, VAR_20,
   VAR_1 | VAR_2 | VAR_3);
 FUNC_1(VAR_24->net, VAR_24->mii.phy_id, VAR_21,
   VAR_0);

 FUNC_7(VAR_24, VAR_4, 0);
 FUNC_13(&VAR_24->mii);


 FUNC_12(VAR_25->mac_addr, VAR_24->net->dev_addr, VAR_19);
 VAR_26 = FUNC_5(VAR_24, VAR_10, 0, 0, VAR_19,
       VAR_25->mac_addr, 0);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_8(VAR_24, VAR_11, 0);
 if (VAR_26 < 0)
  return VAR_26;

 return 0;
}
