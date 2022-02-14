
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {struct net_device* netdev; int rx_bh; int nsd_rxq; int macmode; int ethconv; int state; } ;
struct wireless_dev {int iftype; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {int min_mtu; int max_mtu; struct wireless_dev* ieee80211_ptr; int * netdev_ops; struct wlandevice* ml_priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_5 ;
 struct wireless_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 struct wiphy* FUNC_7 (struct device*,struct wlandevice*) ;
 int FUNC_8 (struct wiphy*) ;

int FUNC_9(struct wlandevice *VAR_8, struct device *VAR_9)
{
 int VAR_10 = 0;
 struct net_device *VAR_11;
 struct wiphy *VAR_12;
 struct wireless_dev *VAR_13;


 VAR_8->state = VAR_2;
 VAR_8->ethconv = VAR_3;
 VAR_8->macmode = VAR_4;


 FUNC_5(&VAR_8->nsd_rxq);
 FUNC_6(&VAR_8->rx_bh,
       VAR_7, (unsigned long)VAR_8);


 VAR_12 = FUNC_7(VAR_9, VAR_8);
 if (!VAR_12) {
  FUNC_1(VAR_9, "Failed to alloc wiphy.\n");
  return 1;
 }


 VAR_11 = FUNC_0(sizeof(struct wireless_dev), "wlan%d",
         VAR_0, VAR_5);
 if (!VAR_11) {
  FUNC_1(VAR_9, "Failed to alloc netdev.\n");
  FUNC_8(VAR_12);
  VAR_10 = 1;
 } else {
  VAR_8->netdev = VAR_11;
  VAR_11->ml_priv = VAR_8;
  VAR_11->netdev_ops = &VAR_6;
  VAR_13 = FUNC_2(VAR_11);
  VAR_13->wiphy = VAR_12;
  VAR_13->iftype = VAR_1;
  VAR_11->ieee80211_ptr = VAR_13;
  VAR_11->min_mtu = 68;



  VAR_11->max_mtu = (2312 - 20 - 8);

  FUNC_4(VAR_11);
  FUNC_3(VAR_11);
 }

 return VAR_10;
}
