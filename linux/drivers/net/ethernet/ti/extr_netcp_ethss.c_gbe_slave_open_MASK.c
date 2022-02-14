
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbe_slave {int port_num; scalar_t__ link_interface; scalar_t__ slave_num; int phy; int phy_node; void* phy_port_t; int node; } ;
struct gbe_priv {int dev; int ale; int rx_packet_max; } ;
struct gbe_intf {TYPE_1__* ndev; struct gbe_slave* slave; struct gbe_priv* gbe_dev; } ;
typedef scalar_t__ phy_interface_t ;
struct TYPE_2__ {int broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gbe_slave*,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct gbe_priv*) ;
 scalar_t__ FUNC_2 (struct gbe_priv*) ;
 scalar_t__ FUNC_3 (struct gbe_priv*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 void FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct gbe_priv*,struct gbe_slave*,int ) ;
 int FUNC_10 (struct gbe_slave*) ;
 int FUNC_11 (struct gbe_slave*,struct gbe_intf*) ;
 int FUNC_12 (struct gbe_priv*,struct gbe_slave*) ;
 int FUNC_13 (struct gbe_priv*,struct gbe_slave*,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,int ,void (*) (struct net_device*),int ,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_19 (int ,int ) ;
 void FUNC_20 (struct net_device*) ;

__attribute__((used)) static int FUNC_21(struct gbe_intf *VAR_16)
{
 struct gbe_priv *VAR_17 = VAR_16->gbe_dev;
 struct gbe_slave *VAR_18 = VAR_16->slave;
 phy_interface_t VAR_19;
 bool VAR_20 = 0;

 void (*VAR_21)(struct net_device *) = FUNC_8;

 if (!FUNC_1(VAR_17))
  FUNC_12(VAR_17, VAR_18);
 FUNC_10(VAR_18);
 if (!FUNC_1(VAR_17))
  FUNC_13(VAR_17, VAR_18, 0);
 FUNC_9(VAR_17, VAR_18, VAR_17->rx_packet_max);
 FUNC_11(VAR_18, VAR_16);



 if (FUNC_2(VAR_17))
  FUNC_19(VAR_5,
         FUNC_0(VAR_18, VAR_14, VAR_15));


 FUNC_5(VAR_17->ale, VAR_18->port_num,
        VAR_1, VAR_2);
 FUNC_4(VAR_17->ale, VAR_16->ndev->broadcast,
      1 << VAR_18->port_num, 0, 0, VAR_0);

 if (VAR_18->link_interface == VAR_12) {
  VAR_20 = 1;
  VAR_19 = VAR_8;
  VAR_18->phy_port_t = VAR_10;
 } else if (VAR_18->link_interface == VAR_11) {
  VAR_20 = 1;
  VAR_19 = FUNC_14(VAR_18->node);



  if (VAR_19 < 0)
   VAR_19 = VAR_7;

  if (!FUNC_16(VAR_19)) {
   FUNC_7(VAR_17->dev,
    "Unsupported phy mode %d\n", VAR_19);
   return -VAR_3;
  }
  VAR_18->phy_port_t = VAR_10;
 } else if (VAR_18->link_interface == VAR_13) {
  VAR_20 = 1;
  VAR_19 = VAR_6;
  VAR_18->phy_port_t = VAR_9;
 }

 if (VAR_20) {
  if (FUNC_3(VAR_17))
   VAR_21 = FUNC_20;

  VAR_18->phy = FUNC_15(VAR_16->ndev,
         VAR_18->phy_node,
         VAR_21, 0,
         VAR_19);
  if (!VAR_18->phy) {
   FUNC_7(VAR_17->dev, "phy not found on slave %d\n",
    VAR_18->slave_num);
   return -VAR_4;
  }
  FUNC_6(VAR_17->dev, "phy found: id is: 0x%s\n",
   FUNC_18(VAR_18->phy));
  FUNC_17(VAR_18->phy);
 }
 return 0;
}
