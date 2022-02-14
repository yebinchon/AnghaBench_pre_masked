
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {size_t wep_tx_key; int mac_control; int * wep_key; int * wep_key_len; int * scan_req; int scan_q; struct net_device* mesh_dev; } ;
struct cfg80211_scan_request {int dummy; } ;
struct TYPE_2__ {int cipher_group; } ;
struct cfg80211_connect_params {int bssid; size_t key_idx; int auth_type; TYPE_1__ crypto; int key_len; int key; int ssid_len; int ssid; int channel; } ;
struct cfg80211_bss {int bssid; } ;


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




 int FUNC_0 (struct lbs_private*,int,struct cfg80211_scan_request*) ;
 struct cfg80211_scan_request* FUNC_1 (struct wiphy*,struct cfg80211_connect_params*) ;
 struct cfg80211_bss* FUNC_2 (struct wiphy*,int ,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_4 (struct lbs_private*,struct cfg80211_bss*,struct cfg80211_connect_params*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct lbs_private*,int) ;
 int FUNC_7 (struct lbs_private*) ;
 int FUNC_8 (struct lbs_private*,struct cfg80211_connect_params*) ;
 int FUNC_9 (struct lbs_private*,int ,int ,int *,int ) ;
 int FUNC_10 (struct lbs_private*) ;
 int FUNC_11 (struct lbs_private*,int ,int) ;
 int FUNC_12 (struct lbs_private*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (struct wiphy*,char*,int) ;
 struct lbs_private* FUNC_17 (struct wiphy*) ;

__attribute__((used)) static int FUNC_18(struct wiphy *VAR_12, struct net_device *VAR_13,
      struct cfg80211_connect_params *VAR_14)
{
 struct lbs_private *VAR_15 = FUNC_17(VAR_12);
 struct cfg80211_bss *VAR_16 = ((void*)0);
 int VAR_17 = 0;
 u8 VAR_18 = VAR_11;

 if (VAR_13 == VAR_15->mesh_dev)
  return -VAR_4;

 if (!VAR_14->bssid) {
  struct cfg80211_scan_request *VAR_19;





  FUNC_5("assoc: waiting for existing scans\n");
  FUNC_15(VAR_15->scan_q,
       (VAR_15->scan_req == ((void*)0)),
       (15 * VAR_5));

  VAR_19 = FUNC_1(VAR_12, VAR_14);
  if (!VAR_19) {
   VAR_17 = -VAR_1;
   goto done;
  }

  FUNC_5("assoc: scanning for compatible AP\n");
  FUNC_0(VAR_15, 1, VAR_19);

  FUNC_5("assoc: waiting for scan to complete\n");
  FUNC_15(VAR_15->scan_q,
       (VAR_15->scan_req == ((void*)0)),
       (15 * VAR_5));
  FUNC_5("assoc: scanning completed\n");
 }


 VAR_16 = FUNC_2(VAR_12, VAR_14->channel, VAR_14->bssid,
  VAR_14->ssid, VAR_14->ssid_len, VAR_6,
  VAR_7);
 if (!VAR_16) {
  FUNC_16(VAR_12, "assoc: bss %pM not in scan results\n",
     VAR_14->bssid);
  VAR_17 = -VAR_2;
  goto done;
 }
 FUNC_5("trying %pM\n", VAR_16->bssid);
 FUNC_5("cipher 0x%x, key index %d, key len %d\n",
        VAR_14->crypto.cipher_group,
        VAR_14->key_idx, VAR_14->key_len);


 VAR_15->wep_tx_key = 0;
 FUNC_14(VAR_15->wep_key, 0, sizeof(VAR_15->wep_key));
 FUNC_14(VAR_15->wep_key_len, 0, sizeof(VAR_15->wep_key_len));


 switch (VAR_14->crypto.cipher_group) {
 case 128:
 case 129:

  VAR_15->wep_tx_key = VAR_14->key_idx;
  VAR_15->wep_key_len[VAR_14->key_idx] = VAR_14->key_len;
  FUNC_13(VAR_15->wep_key[VAR_14->key_idx], VAR_14->key, VAR_14->key_len);

  FUNC_12(VAR_15);
  VAR_15->mac_control |= VAR_0;
  FUNC_10(VAR_15);

  FUNC_6(VAR_15, 0);
  break;
 case 0:







 case 130:
 case 131:

  FUNC_7(VAR_15);
  VAR_15->mac_control &= ~VAR_0;
  FUNC_10(VAR_15);


  FUNC_9(VAR_15,
   VAR_10,
   VAR_9,
   ((void*)0), 0);
  FUNC_9(VAR_15,
   VAR_10,
   VAR_8,
   ((void*)0), 0);

  FUNC_6(VAR_15, VAR_14->crypto.cipher_group != 0);
  break;
 default:
  FUNC_16(VAR_12, "unsupported cipher group 0x%x\n",
     VAR_14->crypto.cipher_group);
  VAR_17 = -VAR_3;
  goto done;
 }

 VAR_17 = FUNC_8(VAR_15, VAR_14);
 if (VAR_17 == -VAR_3) {
  FUNC_16(VAR_12, "unsupported authtype 0x%x\n", VAR_14->auth_type);
  goto done;
 }

 FUNC_11(VAR_15, VAR_18, 1);


 VAR_17 = FUNC_4(VAR_15, VAR_16, VAR_14);

 done:
 if (VAR_16)
  FUNC_3(VAR_12, VAR_16);
 return VAR_17;
}
