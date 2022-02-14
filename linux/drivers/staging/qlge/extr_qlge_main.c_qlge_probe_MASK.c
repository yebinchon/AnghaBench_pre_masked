
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int lb_count; int timer; int tx_ring_size; int flags; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct net_device {int hw_features; int features; int vlan_features; int watchdog_timeo; int max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; int irq; int tx_queue_len; } ;


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
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_14 ;
 struct net_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 struct ql_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*,struct net_device*,int) ;
 int FUNC_12 (struct ql_adapter*) ;
 int FUNC_13 (struct pci_dev*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (struct net_device*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_19,
        const struct pci_device_id *VAR_20)
{
 struct net_device *VAR_21 = ((void*)0);
 struct ql_adapter *VAR_22 = ((void*)0);
 static int VAR_23 = 0;
 int VAR_24 = 0;

 VAR_21 = FUNC_1(sizeof(struct ql_adapter),
   FUNC_5(VAR_3, FUNC_8()));
 if (!VAR_21)
  return -VAR_0;

 VAR_24 = FUNC_11(VAR_19, VAR_21, VAR_23);
 if (VAR_24 < 0) {
  FUNC_4(VAR_21);
  return VAR_24;
 }

 VAR_22 = FUNC_7(VAR_21);
 FUNC_0(VAR_21, &VAR_19->dev);
 VAR_21->hw_features = VAR_10 |
       VAR_8 |
       VAR_11 |
       VAR_12 |
       VAR_7 |
       VAR_6 |
       VAR_5 |
       VAR_9;
 VAR_21->features = VAR_21->hw_features;
 VAR_21->vlan_features = VAR_21->hw_features;

 VAR_21->vlan_features &= ~(VAR_5 |
     VAR_7 |
     VAR_6);

 if (FUNC_15(VAR_13, &VAR_22->flags))
  VAR_21->features |= VAR_4;




 VAR_21->tx_queue_len = VAR_22->tx_ring_size;
 VAR_21->irq = VAR_19->irq;

 VAR_21->netdev_ops = &VAR_18;
 VAR_21->ethtool_ops = &VAR_17;
 VAR_21->watchdog_timeo = 10 * VAR_2;





 VAR_21->min_mtu = VAR_1;
 VAR_21->max_mtu = 9000;

 VAR_24 = FUNC_14(VAR_21);
 if (VAR_24) {
  FUNC_3(&VAR_19->dev, "net device registration failed.\n");
  FUNC_13(VAR_19);
  FUNC_9(VAR_19);
  FUNC_4(VAR_21);
  return VAR_24;
 }



 FUNC_16(&VAR_22->timer, VAR_16, VAR_14);
 FUNC_6(&VAR_22->timer, VAR_15 + (5*VAR_2));
 FUNC_12(VAR_22);
 FUNC_10(VAR_21);
 FUNC_2(&VAR_22->lb_count, 0);
 VAR_23++;
 return 0;
}
