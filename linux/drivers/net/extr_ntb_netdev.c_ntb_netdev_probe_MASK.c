
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ntb_netdev {int qp; struct pci_dev* pdev; struct net_device* ndev; } ;
struct ntb_dev {struct pci_dev* pdev; } ;
struct net_device {int name; scalar_t__ mtu; int max_mtu; scalar_t__ min_mtu; int * ethtool_ops; int * netdev_ops; int addr_len; int perm_addr; int dev_addr; int watchdog_timeo; int features; int hw_features; int priv_flags; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ) ;
 struct ntb_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct device*,struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 struct ntb_netdev* FUNC_9 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct net_device*,struct device*,int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_11)
{
 struct ntb_dev *VAR_12;
 struct net_device *VAR_13;
 struct pci_dev *VAR_14;
 struct ntb_netdev *VAR_15;
 int VAR_16;

 VAR_12 = FUNC_3(VAR_11->parent);
 VAR_14 = VAR_12->pdev;
 if (!VAR_14)
  return -VAR_1;

 VAR_13 = FUNC_1(sizeof(*VAR_15));
 if (!VAR_13)
  return -VAR_2;

 FUNC_0(VAR_13, VAR_11);

 VAR_15 = FUNC_9(VAR_13);
 VAR_15->ndev = VAR_13;
 VAR_15->pdev = VAR_14;
 VAR_13->features = VAR_6;

 VAR_13->priv_flags |= VAR_5;

 VAR_13->hw_features = VAR_13->features;
 VAR_13->watchdog_timeo = FUNC_8(VAR_7);

 FUNC_5(VAR_13->perm_addr);
 FUNC_7(VAR_13->dev_addr, VAR_13->perm_addr, VAR_13->addr_len);

 VAR_13->netdev_ops = &VAR_10;
 VAR_13->ethtool_ops = &VAR_8;

 VAR_13->min_mtu = 0;
 VAR_13->max_mtu = VAR_4;

 VAR_15->qp = FUNC_10(VAR_13, VAR_11,
          &VAR_9);
 if (!VAR_15->qp) {
  VAR_16 = -VAR_0;
  goto err;
 }

 VAR_13->mtu = FUNC_12(VAR_15->qp) - VAR_3;

 VAR_16 = FUNC_13(VAR_13);
 if (VAR_16)
  goto err1;

 FUNC_4(VAR_11, VAR_13);
 FUNC_2(&VAR_14->dev, "%s created\n", VAR_13->name);
 return 0;

err1:
 FUNC_11(VAR_15->qp);
err:
 FUNC_6(VAR_13);
 return VAR_16;
}
