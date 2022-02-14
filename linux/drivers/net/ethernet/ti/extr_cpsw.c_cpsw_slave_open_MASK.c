
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int interface; } ;
struct cpsw_slave {int slave_num; struct phy_device* phy; TYPE_2__* data; scalar_t__ mac_control; int mac_sl; } ;
struct cpsw_priv {int dev; TYPE_3__* ndev; struct cpsw_common* cpsw; } ;
struct TYPE_5__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int version; int dev; int ale; TYPE_1__ data; int rx_packet_max; } ;
struct TYPE_7__ {int broadcast; } ;
struct TYPE_6__ {int phy_if; struct phy_device* ifphy; int phy_id; scalar_t__ phy_node; } ;


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




 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_10 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct cpsw_priv*,struct cpsw_slave*,int) ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct cpsw_slave*,struct cpsw_priv*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*,int ,int ,...) ;
 struct phy_device* FUNC_11 (TYPE_3__*,scalar_t__,int *,int ,int ) ;
 int FUNC_12 (struct phy_device*) ;
 struct phy_device* FUNC_13 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_14 (struct phy_device*,int ,int ) ;
 int FUNC_15 (struct phy_device*) ;
 int FUNC_16 (struct cpsw_slave*,int,int ) ;

__attribute__((used)) static void FUNC_17(struct cpsw_slave *VAR_14, struct cpsw_priv *VAR_15)
{
 u32 VAR_16;
 struct phy_device *VAR_17;
 struct cpsw_common *VAR_18 = VAR_15->cpsw;

 FUNC_9(VAR_14->mac_sl, 100);
 FUNC_7(VAR_14->mac_sl);


 FUNC_8(VAR_14->mac_sl, VAR_9,
     VAR_11);

 switch (VAR_18->version) {
 case 131:
  FUNC_16(VAR_14, VAR_12, VAR_2);



  FUNC_16(VAR_14,
       (VAR_6 << VAR_7) |
       VAR_5, VAR_1);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_16(VAR_14, VAR_12, VAR_4);



  FUNC_16(VAR_14,
       (VAR_6 << VAR_7) |
       VAR_5, VAR_3);
  break;
 }


 FUNC_8(VAR_14->mac_sl, VAR_8,
     VAR_18->rx_packet_max);
 FUNC_6(VAR_14, VAR_15);

 VAR_14->mac_control = 0;

 VAR_16 = FUNC_4(VAR_14->slave_num);

 if (VAR_18->data.dual_emac)
  FUNC_2(VAR_15, VAR_14, VAR_16);
 else
  FUNC_3(VAR_18->ale, VAR_15->ndev->broadcast,
       1 << VAR_16, 0, 0, VAR_0);

 if (VAR_14->data->phy_node) {
  VAR_17 = FUNC_11(VAR_15->ndev, VAR_14->data->phy_node,
     &VAR_13, 0, VAR_14->data->phy_if);
  if (!VAR_17) {
   FUNC_10(VAR_15->dev, "phy \"%pOF\" not found on slave %d\n",
    VAR_14->data->phy_node,
    VAR_14->slave_num);
   return;
  }
 } else {
  VAR_17 = FUNC_13(VAR_15->ndev, VAR_14->data->phy_id,
     &VAR_13, VAR_14->data->phy_if);
  if (FUNC_0(VAR_17)) {
   FUNC_10(VAR_15->dev,
    "phy \"%s\" not found on slave %d, err %ld\n",
    VAR_14->data->phy_id, VAR_14->slave_num,
    FUNC_1(VAR_17));
   return;
  }
 }

 VAR_14->phy = VAR_17;

 FUNC_12(VAR_14->phy);

 FUNC_15(VAR_14->phy);


 if (!FUNC_0(VAR_14->data->ifphy))
  FUNC_14(VAR_14->data->ifphy, VAR_10,
     VAR_14->data->phy_if);
 else
  FUNC_5(VAR_18->dev, VAR_14->phy->interface,
        VAR_14->slave_num);
}
