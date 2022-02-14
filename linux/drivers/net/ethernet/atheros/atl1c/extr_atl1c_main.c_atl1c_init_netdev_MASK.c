
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int hw_features; int features; scalar_t__ min_mtu; int watchdog_timeo; int * netdev_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_11, struct pci_dev *VAR_12)
{
 FUNC_0(VAR_11, &VAR_12->dev);
 FUNC_2(VAR_12, VAR_11);

 VAR_11->netdev_ops = &VAR_10;
 VAR_11->watchdog_timeo = VAR_0;
 VAR_11->min_mtu = VAR_2 - (VAR_1 + VAR_9);
 FUNC_1(VAR_11);


 VAR_11->hw_features = VAR_6 |
    VAR_3 |
    VAR_4 |
    VAR_7 |
    VAR_8;
 VAR_11->features = VAR_11->hw_features |
    VAR_5;
 return 0;
}
