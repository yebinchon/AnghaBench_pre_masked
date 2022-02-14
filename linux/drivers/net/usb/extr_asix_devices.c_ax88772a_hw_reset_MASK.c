
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int phy_id; } ;
struct usbnet {TYPE_2__* net; TYPE_1__ mii; int data; } ;
struct asix_data {int * mac_addr; } ;
struct TYPE_6__ {int dev_addr; } ;


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
 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int) ;
 int FUNC_2 (struct usbnet*,int ,int ,int ,int,int*,int) ;
 int FUNC_3 (struct usbnet*,int) ;
 int FUNC_4 (struct usbnet*,int) ;
 int FUNC_5 (struct usbnet*,int,int) ;
 int FUNC_6 (struct usbnet*,int ,int,int,int ,int *,int) ;
 int FUNC_7 (struct usbnet*,int ,int,int) ;
 int FUNC_8 (struct usbnet*,int ,int) ;
 int FUNC_9 (struct usbnet*,int ,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*,char*,int,...) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct usbnet *VAR_26, int VAR_27)
{
 struct asix_data *VAR_28 = (struct asix_data *)&VAR_26->data;
 int VAR_29, VAR_30;
 u16 VAR_31, VAR_32, VAR_33, VAR_34;
 u8 VAR_35 = 0;

 VAR_29 = FUNC_7(VAR_26, VAR_18, 5, VAR_27);
 if (VAR_29 < 0)
  goto out;

 VAR_30 = ((VAR_26->mii.phy_id & 0x1f) == 0x10 ? 1 : 0);

 VAR_29 = FUNC_6(VAR_26, VAR_14, VAR_30 |
        VAR_19, 0, 0, ((void*)0), VAR_27);
 if (VAR_29 < 0) {
  FUNC_12(VAR_26->net, "Select PHY #1 failed: %d\n", VAR_29);
  goto out;
 }
 FUNC_13(10000, 11000);

 VAR_29 = FUNC_5(VAR_26, VAR_22 | VAR_23, VAR_27);
 if (VAR_29 < 0)
  goto out;

 FUNC_13(10000, 11000);

 VAR_29 = FUNC_5(VAR_26, VAR_23, VAR_27);
 if (VAR_29 < 0)
  goto out;

 FUNC_11(160);

 VAR_29 = FUNC_5(VAR_26, VAR_21, VAR_27);
 if (VAR_29 < 0)
  goto out;

 VAR_29 = FUNC_5(VAR_26, VAR_23, VAR_27);
 if (VAR_29 < 0)
  goto out;

 FUNC_11(200);

 if (VAR_27 && (!FUNC_0(VAR_26->net, VAR_26->mii.phy_id,
        VAR_25))) {
  VAR_29 = -1;
  goto out;
 }

 VAR_29 = FUNC_2(VAR_26, VAR_13, 0,
       0, 1, &VAR_35, VAR_27);
 if (VAR_29 < 0)
  goto out;

 if ((VAR_35 & VAR_12) == VAR_11) {
  VAR_29 = FUNC_6(VAR_26, VAR_20, 0x8000, 0x8001,
         0, ((void*)0), VAR_27);
  if (VAR_29 < 0) {
   FUNC_12(VAR_26->net, "Write BQ setting failed: %d\n",
       VAR_29);
   goto out;
  }
 } else if ((VAR_35 & VAR_12) == VAR_10) {

  VAR_32 = FUNC_0(VAR_26->net, VAR_26->mii.phy_id,
          VAR_0);
  VAR_33 = FUNC_0(VAR_26->net, VAR_26->mii.phy_id,
          VAR_2);
  VAR_34 = FUNC_0(VAR_26->net, VAR_26->mii.phy_id,
          VAR_4);

  FUNC_12(VAR_26->net,
      "772a_hw_reset: MR20=0x%x MR21=0x%x MR22=0x%x\n",
      VAR_32, VAR_33, VAR_34);


  if (VAR_32 != VAR_1)
   FUNC_1(VAR_26->net, VAR_26->mii.phy_id,
          VAR_0,
          VAR_1);
  if (VAR_33 != VAR_3)
   FUNC_1(VAR_26->net, VAR_26->mii.phy_id,
          VAR_2,
          VAR_3);
  if (VAR_34 != VAR_5)
   FUNC_1(VAR_26->net, VAR_26->mii.phy_id,
          VAR_4,
          VAR_5);
 }

 VAR_29 = FUNC_6(VAR_26, VAR_15,
    VAR_6 | VAR_7,
    VAR_8, 0, ((void*)0), VAR_27);
 if (VAR_29 < 0) {
  FUNC_12(VAR_26->net, "Write IPG,IPG1,IPG2 failed: %d\n", VAR_29);
  goto out;
 }


 FUNC_10(VAR_28->mac_addr, VAR_26->net->dev_addr, VAR_24);
 VAR_29 = FUNC_6(VAR_26, VAR_16, 0, 0, VAR_24,
       VAR_28->mac_addr, VAR_27);
 if (VAR_29 < 0)
  goto out;


 VAR_29 = FUNC_9(VAR_26, VAR_17, VAR_27);
 if (VAR_29 < 0)
  goto out;

 VAR_29 = FUNC_8(VAR_26, VAR_9, VAR_27);
 if (VAR_29 < 0)
  return VAR_29;


 VAR_29 = FUNC_9(VAR_26, VAR_17, VAR_27);
 if (VAR_29 < 0)
  goto out;

 VAR_31 = FUNC_4(VAR_26, VAR_27);
 FUNC_12(VAR_26->net, "RX_CTL is 0x%04x after all initializations\n",
     VAR_31);

 VAR_31 = FUNC_3(VAR_26, VAR_27);
 FUNC_12(VAR_26->net,
     "Medium Status is 0x%04x after all initializations\n",
     VAR_31);

 return 0;

out:
 return VAR_29;
}
