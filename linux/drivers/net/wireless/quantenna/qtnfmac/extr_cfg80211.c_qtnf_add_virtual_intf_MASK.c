
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int iftype; int * netdev; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int use_4addr; int * macaddr; } ;
struct qtnf_wmac {int macid; } ;
struct qtnf_vif {int vifid; struct wireless_dev wdev; int * netdev; int mac_addr; int bss_priority; int bssid; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wireless_dev* FUNC_0 (int) ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wireless_dev*,int ,int) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct qtnf_vif*,int,int,int *) ;
 int FUNC_6 (struct qtnf_vif*) ;
 int FUNC_7 (struct qtnf_wmac*,struct qtnf_vif*,char const*,unsigned char) ;
 struct qtnf_vif* FUNC_8 (struct qtnf_wmac*) ;
 int FUNC_9 (struct wiphy*,int *,int) ;
 struct qtnf_wmac* FUNC_10 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *FUNC_11(struct wiphy *VAR_5,
        const char *VAR_6,
        unsigned char VAR_7,
        enum nl80211_iftype VAR_8,
        struct vif_params *VAR_9)
{
 struct qtnf_wmac *VAR_10;
 struct qtnf_vif *VAR_11;
 u8 *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14;

 VAR_10 = FUNC_10(VAR_5);

 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_14 = FUNC_9(VAR_5, ((void*)0), VAR_8);
 if (VAR_14) {
  FUNC_4("MAC%u invalid combination: failed to add type %d\n",
         VAR_10->macid, VAR_8);
  return FUNC_0(VAR_14);
 }

 switch (VAR_8) {
 case 128:
 case 129:
  VAR_11 = FUNC_8(VAR_10);
  if (!VAR_11) {
   FUNC_4("MAC%u: no free VIF available\n", VAR_10->macid);
   return FUNC_0(-VAR_0);
  }

  FUNC_1(VAR_11->mac_addr);
  FUNC_1(VAR_11->bssid);
  VAR_11->bss_priority = VAR_4;
  FUNC_3(&VAR_11->wdev, 0, sizeof(VAR_11->wdev));
  VAR_11->wdev.wiphy = VAR_5;
  VAR_11->wdev.iftype = VAR_8;
  break;
 default:
  FUNC_4("MAC%u: unsupported IF type %d\n", VAR_10->macid, VAR_8);
  return FUNC_0(-VAR_2);
 }

 if (VAR_9) {
  VAR_12 = VAR_9->macaddr;
  VAR_13 = VAR_9->use_4addr;
 }

 VAR_14 = FUNC_5(VAR_11, VAR_8, VAR_13, VAR_12);
 if (VAR_14) {
  FUNC_4("VIF%u.%u: failed to add VIF %pM\n",
         VAR_10->macid, VAR_11->vifid, VAR_12);
  goto err_cmd;
 }

 if (!FUNC_2(VAR_11->mac_addr)) {
  FUNC_4("VIF%u.%u: FW reported bad MAC: %pM\n",
         VAR_10->macid, VAR_11->vifid, VAR_11->mac_addr);
  VAR_14 = -VAR_1;
  goto err_mac;
 }

 VAR_14 = FUNC_7(VAR_10, VAR_11, VAR_6, VAR_7);
 if (VAR_14) {
  FUNC_4("VIF%u.%u: failed to attach netdev\n", VAR_10->macid,
         VAR_11->vifid);
  goto err_net;
 }

 VAR_11->wdev.netdev = VAR_11->netdev;
 return &VAR_11->wdev;

err_net:
 VAR_11->netdev = ((void*)0);
err_mac:
 FUNC_6(VAR_11);
err_cmd:
 VAR_11->wdev.iftype = VAR_3;

 return FUNC_0(VAR_14);
}
