
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_wmac {TYPE_1__* bus; } ;
struct TYPE_4__ {void* iftype; } ;
struct qtnf_vif {TYPE_2__ wdev; int mac_addr; struct net_device* netdev; } ;
struct net_device {int needs_free_netdev; int flags; int tx_queue_len; int * ethtool_ops; int watchdog_timeo; int dev_addr; TYPE_2__* ieee80211_ptr; int * netdev_ops; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int,char const*,unsigned char,int ,int,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct net_device*) ;
 void* FUNC_5 (struct net_device*) ;
 struct wiphy* FUNC_6 (struct qtnf_wmac*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct wiphy*) ;
 int FUNC_9 (struct wiphy*) ;

int FUNC_10(struct qtnf_wmac *VAR_8, struct qtnf_vif *VAR_9,
    const char *VAR_10, unsigned char VAR_11)
{
 struct wiphy *VAR_12 = FUNC_6(VAR_8);
 struct net_device *VAR_13;
 void *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_1(sizeof(struct qtnf_vif *), VAR_10,
          VAR_11, VAR_5, 1, 1);
 if (!VAR_13) {
  VAR_9->wdev.iftype = VAR_3;
  return -VAR_0;
 }

 VAR_9->netdev = VAR_13;

 VAR_13->netdev_ops = &VAR_7;
 VAR_13->needs_free_netdev = 1;
 FUNC_2(VAR_13, FUNC_9(VAR_12));
 VAR_13->ieee80211_ptr = &VAR_9->wdev;
 FUNC_3(VAR_13->dev_addr, VAR_9->mac_addr);
 FUNC_0(VAR_13, FUNC_8(VAR_12));
 VAR_13->flags |= VAR_1 | VAR_2;
 VAR_13->watchdog_timeo = VAR_4;
 VAR_13->tx_queue_len = 100;
 VAR_13->ethtool_ops = &VAR_6;

 VAR_14 = FUNC_5(VAR_13);
 *((void **)VAR_14) = VAR_9;

 FUNC_0(VAR_13, VAR_8->bus->dev);

 VAR_15 = FUNC_7(VAR_13);
 if (VAR_15) {
  FUNC_4(VAR_13);
  VAR_9->wdev.iftype = VAR_3;
 }

 return VAR_15;
}
