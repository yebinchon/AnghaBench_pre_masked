
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct net_device {int features; TYPE_2__ dev; int * ethtool_ops; int * netdev_ops; int dev_addr; } ;
struct cpsw_priv {int emac_port; int mac_addr; int msg_enable; TYPE_2__* dev; struct net_device* ndev; struct cpsw_common* cpsw; } ;
struct cpsw_platform_data {TYPE_1__* slave_data; } ;
struct cpsw_common {int dev; TYPE_4__* slaves; struct cpsw_platform_data data; } ;
struct TYPE_8__ {TYPE_3__* data; struct net_device* ndev; } ;
struct TYPE_7__ {int slave_node; } ;
struct TYPE_5__ {int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct net_device* FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct cpsw_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct cpsw_priv *VAR_9)
{
 struct cpsw_common *VAR_10 = VAR_9->cpsw;
 struct cpsw_platform_data *VAR_11 = &VAR_10->data;
 struct net_device *VAR_12;
 struct cpsw_priv *VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_3(VAR_10->dev, sizeof(struct cpsw_priv),
           VAR_1, VAR_1);
 if (!VAR_12) {
  FUNC_1(VAR_10->dev, "cpsw: error allocating net_device\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_7(VAR_12);
 VAR_13->cpsw = VAR_10;
 VAR_13->ndev = VAR_12;
 VAR_13->dev = &VAR_12->dev;
 VAR_13->msg_enable = FUNC_8(VAR_8, VAR_0);

 if (FUNC_5(VAR_11->slave_data[1].mac_addr)) {
  FUNC_6(VAR_13->mac_addr, VAR_11->slave_data[1].mac_addr,
   VAR_3);
  FUNC_2(VAR_10->dev, "cpsw: Detected MACID = %pM\n",
    VAR_13->mac_addr);
 } else {
  FUNC_4(VAR_13->mac_addr);
  FUNC_2(VAR_10->dev, "cpsw: Random MACID = %pM\n",
    VAR_13->mac_addr);
 }
 FUNC_6(VAR_12->dev_addr, VAR_13->mac_addr, VAR_3);

 VAR_13->emac_port = 1;
 VAR_10->slaves[1].ndev = VAR_12;
 VAR_12->features |= VAR_4 | VAR_5;

 VAR_12->netdev_ops = &VAR_7;
 VAR_12->ethtool_ops = &VAR_6;


 FUNC_0(VAR_12, VAR_10->dev);
 VAR_12->dev.of_node = VAR_10->slaves[1].data->slave_node;
 VAR_14 = FUNC_9(VAR_12);
 if (VAR_14)
  FUNC_1(VAR_10->dev, "cpsw: error registering net device\n");

 return VAR_14;
}
