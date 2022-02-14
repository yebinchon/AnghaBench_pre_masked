
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wireless_dev {int iftype; struct net_device* netdev; int wiphy; } ;
struct wil6210_vif {struct wireless_dev wdev; scalar_t__ mid; struct wil6210_priv* wil; struct net_device* ndev; } ;
struct wil6210_priv {int wiphy; struct net_device* main_ndev; } ;
struct net_device {int needs_free_netdev; int hw_features; int features; struct wireless_dev* ieee80211_ptr; int * netdev_ops; int priv_destructor; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 struct wil6210_vif* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int ) ;
 scalar_t__ VAR_8 ;
 struct net_device* FUNC_2 (int,char const*,unsigned char,int ) ;
 int FUNC_3 (int ,char*) ;
 struct wil6210_vif* FUNC_4 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_5 (struct wil6210_priv*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct wil6210_priv*) ;
 scalar_t__ FUNC_8 (struct wil6210_priv*) ;
 int FUNC_9 (struct wil6210_vif*) ;
 int FUNC_10 (int ) ;

struct wil6210_vif *
FUNC_11(struct wil6210_priv *VAR_12, const char *VAR_13,
       unsigned char VAR_14, enum nl80211_iftype VAR_15)
{
 struct net_device *VAR_16;
 struct wireless_dev *VAR_17;
 struct wil6210_vif *VAR_18;
 u8 VAR_19;

 VAR_19 = FUNC_8(VAR_12);
 if (VAR_19 == VAR_8) {
  FUNC_5(VAR_12, "no available virtual interface\n");
  return FUNC_0(-VAR_0);
 }

 VAR_16 = FUNC_2(sizeof(*VAR_18), VAR_13, VAR_14,
       VAR_9);
 if (!VAR_16) {
  FUNC_3(FUNC_7(VAR_12), "alloc_netdev failed\n");
  return FUNC_0(-VAR_1);
 }
 if (VAR_19 == 0) {
  VAR_12->main_ndev = VAR_16;
 } else {
  VAR_16->priv_destructor = VAR_10;
  VAR_16->needs_free_netdev = 1;
 }

 VAR_18 = FUNC_4(VAR_16);
 VAR_18->ndev = VAR_16;
 VAR_18->wil = VAR_12;
 VAR_18->mid = VAR_19;
 FUNC_9(VAR_18);

 VAR_17 = &VAR_18->wdev;
 VAR_17->wiphy = VAR_12->wiphy;
 VAR_17->iftype = VAR_15;

 VAR_16->netdev_ops = &VAR_11;
 FUNC_6(VAR_16);
 VAR_16->ieee80211_ptr = VAR_17;
 VAR_16->hw_features = VAR_3 | VAR_4 |
       VAR_5 | VAR_2 |
       VAR_6 | VAR_7;

 VAR_16->features |= VAR_16->hw_features;
 FUNC_1(VAR_16, FUNC_10(VAR_17->wiphy));
 VAR_17->netdev = VAR_16;
 return VAR_18;
}
