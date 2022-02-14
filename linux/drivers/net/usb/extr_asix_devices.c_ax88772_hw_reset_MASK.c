
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int phy_id; } ;
struct usbnet {TYPE_2__* net; TYPE_1__ mii; int data; } ;
struct asix_data {int * mac_addr; } ;
struct TYPE_5__ {int dev_addr; } ;


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
 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (struct usbnet*,int) ;
 int FUNC_2 (struct usbnet*,int) ;
 int FUNC_3 (struct usbnet*,int,int) ;
 int FUNC_4 (struct usbnet*,int ,int,int ,int ,int *,int) ;
 int FUNC_5 (struct usbnet*,int,int,int) ;
 int FUNC_6 (struct usbnet*,int ,int) ;
 int FUNC_7 (struct usbnet*,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,char*,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct usbnet *VAR_18, int VAR_19)
{
 struct asix_data *VAR_20 = (struct asix_data *)&VAR_18->data;
 int VAR_21, VAR_22;
 u16 VAR_23;

 VAR_21 = FUNC_5(VAR_18, VAR_10 | VAR_9 |
         VAR_8, 5, VAR_19);
 if (VAR_21 < 0)
  goto out;

 VAR_22 = ((VAR_18->mii.phy_id & 0x1f) == 0x10 ? 1 : 0);

 VAR_21 = FUNC_4(VAR_18, VAR_4, VAR_22,
        0, 0, ((void*)0), VAR_19);
 if (VAR_21 < 0) {
  FUNC_10(VAR_18->net, "Select PHY #1 failed: %d\n", VAR_21);
  goto out;
 }

 if (VAR_22) {
  VAR_21 = FUNC_3(VAR_18, VAR_12, VAR_19);
  if (VAR_21 < 0)
   goto out;

  FUNC_11(10000, 11000);

  VAR_21 = FUNC_3(VAR_18, VAR_11, VAR_19);
  if (VAR_21 < 0)
   goto out;

  FUNC_9(60);

  VAR_21 = FUNC_3(VAR_18, VAR_13 | VAR_14,
        VAR_19);
  if (VAR_21 < 0)
   goto out;
 } else {
  VAR_21 = FUNC_3(VAR_18, VAR_12 | VAR_14,
        VAR_19);
  if (VAR_21 < 0)
   goto out;
 }

 FUNC_9(150);

 if (VAR_19 && (!FUNC_0(VAR_18->net, VAR_18->mii.phy_id,
        VAR_17))){
  VAR_21 = -VAR_15;
  goto out;
 }

 VAR_21 = FUNC_7(VAR_18, VAR_7, VAR_19);
 if (VAR_21 < 0)
  goto out;

 VAR_21 = FUNC_6(VAR_18, VAR_3, VAR_19);
 if (VAR_21 < 0)
  goto out;

 VAR_21 = FUNC_4(VAR_18, VAR_5,
        VAR_0 | VAR_1,
        VAR_2, 0, ((void*)0), VAR_19);
 if (VAR_21 < 0) {
  FUNC_10(VAR_18->net, "Write IPG,IPG1,IPG2 failed: %d\n", VAR_21);
  goto out;
 }


 FUNC_8(VAR_20->mac_addr, VAR_18->net->dev_addr);
 VAR_21 = FUNC_4(VAR_18, VAR_6, 0, 0,
        VAR_16, VAR_20->mac_addr, VAR_19);
 if (VAR_21 < 0)
  goto out;


 VAR_21 = FUNC_7(VAR_18, VAR_7, VAR_19);
 if (VAR_21 < 0)
  goto out;

 VAR_23 = FUNC_2(VAR_18, VAR_19);
 FUNC_10(VAR_18->net, "RX_CTL is 0x%04x after all initializations\n",
     VAR_23);

 VAR_23 = FUNC_1(VAR_18, VAR_19);
 FUNC_10(VAR_18->net,
     "Medium Status is 0x%04x after all initializations\n",
     VAR_23);

 return 0;

out:
 return VAR_21;
}
