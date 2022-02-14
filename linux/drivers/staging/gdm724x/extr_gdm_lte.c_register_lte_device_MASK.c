
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct phy_dev {struct net_device** dev; } ;
struct nic {int dest_mac_addr; int src_mac_addr; scalar_t__ nic_id; struct phy_dev* phy_dev; struct net_device* netdev; } ;
struct net_device {int dev_addr; int mtu; int flags; int * netdev_ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int,char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,scalar_t__*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (struct nic*,int ,int) ;
 struct nic* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,char*,scalar_t__) ;
 int FUNC_9 (struct phy_dev*) ;
 int FUNC_10 (scalar_t__*) ;
 int VAR_7 ;

int FUNC_11(struct phy_dev *VAR_8,
   struct device *VAR_9, u8 *VAR_10)
{
 struct nic *VAR_11;
 struct net_device *VAR_12;
 char VAR_13[16];
 int VAR_14 = 0;
 u8 VAR_15;

 FUNC_10(VAR_10);

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {

  FUNC_8(VAR_13, "lte%%dpdn%d", VAR_15);


  VAR_12 = FUNC_2(sizeof(struct nic), VAR_13,
       VAR_4, VAR_5);
  if (!VAR_12) {
   VAR_14 = -VAR_1;
   goto err;
  }
  VAR_12->netdev_ops = &VAR_6;
  VAR_12->flags &= ~VAR_2;
  VAR_12->mtu = VAR_0;

  VAR_11 = FUNC_5(VAR_12);
  FUNC_4(VAR_11, 0, sizeof(struct nic));
  VAR_11->netdev = VAR_12;
  VAR_11->phy_dev = VAR_8;
  VAR_11->nic_id = VAR_15;

  FUNC_3(VAR_12->dev_addr,
     VAR_11->src_mac_addr,
     VAR_11->dest_mac_addr,
     VAR_10,
     VAR_15);

  FUNC_0(VAR_12, VAR_9);
  FUNC_1(VAR_12, &VAR_7);

  VAR_14 = FUNC_7(VAR_12);
  if (VAR_14)
   goto err;

  FUNC_6(VAR_12);

  VAR_8->dev[VAR_15] = VAR_12;
 }

 return 0;

err:
 FUNC_9(VAR_8);

 return VAR_14;
}
