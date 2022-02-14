
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int iftype; int* address; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {TYPE_1__* wiphy; struct wireless_dev* p2p_wdev; struct net_device* main_ndev; } ;
struct vif_params {int* macaddr; } ;
struct net_device {int* perm_addr; int* dev_addr; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int n_iface_combinations; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wireless_dev* FUNC_0 (struct wil6210_vif*) ;
 struct wireless_dev* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct wil6210_vif*) ;
 int VAR_3 ;
 int FUNC_3 (int*,int*) ;
 scalar_t__ FUNC_4 (int*) ;
 struct wireless_dev* FUNC_5 (int,int ) ;
 struct net_device* FUNC_6 (struct wil6210_vif*) ;
 struct wireless_dev* FUNC_7 (struct wil6210_vif*) ;
 int FUNC_8 (struct wil6210_priv*,int) ;
 int FUNC_9 (struct wil6210_priv*,char*,int) ;
 int FUNC_10 (struct wil6210_priv*,char*,...) ;
 int FUNC_11 (struct wil6210_priv*,char*,int,int,int*) ;
 int FUNC_12 (struct wil6210_priv*,struct wil6210_vif*) ;
 struct wil6210_vif* FUNC_13 (struct wil6210_priv*,char const*,unsigned char,int) ;
 int FUNC_14 (struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_15 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *
FUNC_16(struct wiphy *VAR_4, const char *VAR_5,
         unsigned char VAR_6,
         enum nl80211_iftype VAR_7,
         struct vif_params *VAR_8)
{
 struct wil6210_priv *VAR_9 = FUNC_15(VAR_4);
 struct net_device *VAR_10 = VAR_9->main_ndev, *VAR_11;
 struct wil6210_vif *VAR_12;
 struct wireless_dev *VAR_13, *VAR_14;
 int VAR_15;

 FUNC_9(VAR_9, "add_iface, type %d\n", VAR_7);





 if (VAR_7 == VAR_3) {
  if (VAR_9->p2p_wdev) {
   FUNC_10(VAR_9, "P2P_DEVICE interface already created\n");
   return FUNC_1(-VAR_0);
  }

  VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_2);
  if (!VAR_13)
   return FUNC_1(-VAR_1);

  VAR_13->iftype = VAR_7;
  VAR_13->wiphy = VAR_4;

  FUNC_3(VAR_13->address, VAR_10->perm_addr);

  VAR_9->p2p_wdev = VAR_13;

  return VAR_13;
 }

 if (!VAR_9->wiphy->n_iface_combinations) {
  FUNC_10(VAR_9, "virtual interfaces not supported\n");
  return FUNC_1(-VAR_0);
 }

 VAR_15 = FUNC_8(VAR_9, VAR_7);
 if (VAR_15) {
  FUNC_10(VAR_9, "iface validation failed, err=%d\n", VAR_15);
  return FUNC_1(VAR_15);
 }

 VAR_12 = FUNC_13(VAR_9, VAR_5, VAR_6, VAR_7);
 if (FUNC_2(VAR_12))
  return FUNC_0(VAR_12);

 VAR_11 = FUNC_6(VAR_12);
 FUNC_3(VAR_11->perm_addr, VAR_10->perm_addr);
 if (FUNC_4(VAR_8->macaddr)) {
  FUNC_3(VAR_11->dev_addr, VAR_8->macaddr);
 } else {
  FUNC_3(VAR_11->dev_addr, VAR_10->perm_addr);
  VAR_11->dev_addr[0] = (VAR_11->dev_addr[0] ^ (1 << VAR_12->mid)) |
   0x2;
 }
 VAR_14 = FUNC_7(VAR_12);
 FUNC_3(VAR_14->address, VAR_11->dev_addr);

 VAR_15 = FUNC_12(VAR_9, VAR_12);
 if (VAR_15)
  goto out;

 FUNC_11(VAR_9, "added VIF, mid %d iftype %d MAC %pM\n",
   VAR_12->mid, VAR_7, VAR_14->address);
 return VAR_14;
out:
 FUNC_14(VAR_12);
 return FUNC_1(VAR_15);
}
