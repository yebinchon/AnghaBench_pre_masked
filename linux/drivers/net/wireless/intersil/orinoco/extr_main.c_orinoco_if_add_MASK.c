
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; struct wiphy* wiphy; } ;
struct wiphy {int perm_addr; } ;
struct orinoco_private {int dev; struct net_device* ndev; int wireless_data; } ;
struct net_device_ops {int dummy; } ;
struct net_device {unsigned long base_addr; unsigned int irq; int name; int max_mtu; int min_mtu; int dev_addr; int needed_headroom; struct net_device_ops const* netdev_ops; int * wireless_data; int * wireless_handlers; int watchdog_timeo; struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct wireless_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_7 ;
 struct net_device_ops const VAR_8 ;
 struct wiphy* FUNC_7 (struct orinoco_private*) ;
 int FUNC_8 (struct net_device*) ;

int FUNC_9(struct orinoco_private *VAR_9,
     unsigned long VAR_10,
     unsigned int VAR_11,
     const struct net_device_ops *VAR_12)
{
 struct wiphy *VAR_13 = FUNC_7(VAR_9);
 struct wireless_dev *VAR_14;
 struct net_device *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_1(sizeof(struct wireless_dev));

 if (!VAR_15)
  return -VAR_1;


 VAR_14 = FUNC_5(VAR_15);
 VAR_14->wiphy = VAR_13;
 VAR_14->iftype = VAR_4;


 VAR_15->ieee80211_ptr = VAR_14;
 VAR_15->watchdog_timeo = VAR_3;
 VAR_15->wireless_handlers = &VAR_7;




 if (VAR_12)
  VAR_15->netdev_ops = VAR_12;
 else
  VAR_15->netdev_ops = &VAR_8;




 VAR_15->needed_headroom = VAR_0;

 FUNC_6(VAR_15);

 FUNC_4(VAR_15->dev_addr, VAR_13->perm_addr, VAR_2);

 VAR_15->base_addr = VAR_10;
 VAR_15->irq = VAR_11;

 VAR_15->min_mtu = VAR_6;
 VAR_15->max_mtu = VAR_5;

 FUNC_0(VAR_15, VAR_9->dev);
 VAR_16 = FUNC_8(VAR_15);
 if (VAR_16)
  goto fail;

 VAR_9->ndev = VAR_15;


 FUNC_2(VAR_9->dev, "Registered interface %s.\n", VAR_15->name);

 return 0;

 fail:
 FUNC_3(VAR_15);
 return VAR_16;
}
