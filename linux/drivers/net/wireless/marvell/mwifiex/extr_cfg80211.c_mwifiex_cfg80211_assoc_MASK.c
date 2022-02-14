
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_5__ {int wpa_enabled; int wpa2_enabled; int is_authtype_auto; int authentication_mode; scalar_t__ encryption_mode; } ;
struct mwifiex_private {int cfg_bssid; int adapter; TYPE_3__ wdev; scalar_t__ wep_key_curr_index; TYPE_2__ sec_info; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_ssid {size_t ssid_len; int* ssid; } ;
struct TYPE_4__ {scalar_t__ cipher_group; scalar_t__* ciphers_pairwise; scalar_t__ n_ciphers_pairwise; } ;
struct cfg80211_connect_params {int auth_type; scalar_t__ key_idx; int key_len; int * key; int ie_len; scalar_t__ ie; TYPE_1__ crypto; } ;
struct cfg80211_bss {int const* bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 struct cfg80211_bss* FUNC_0 (int ,struct ieee80211_channel*,int const*,int const*,size_t,int ,int ) ;
 int FUNC_1 (int*,int const*,size_t) ;
 int FUNC_2 (struct cfg80211_ssid*,int ,int) ;
 int FUNC_3 (struct mwifiex_private*,struct cfg80211_bss*,struct cfg80211_ssid*) ;
 scalar_t__ FUNC_4 (struct mwifiex_private*) ;
 int FUNC_5 (int ,int ,char*,...) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct mwifiex_private*,struct cfg80211_ssid*) ;
 int FUNC_8 (struct mwifiex_private*,int ,int ,int ,int*,int) ;
 int FUNC_9 (struct mwifiex_private*,int *,int *,int ,scalar_t__,int *,int) ;
 int FUNC_10 (struct mwifiex_private*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_11(struct mwifiex_private *VAR_16, size_t VAR_17,
         const u8 *VAR_18, const u8 *VAR_19, int VAR_20,
         struct ieee80211_channel *VAR_21,
         struct cfg80211_connect_params *VAR_22, bool VAR_23)
{
 struct cfg80211_ssid VAR_24;
 int VAR_25, VAR_26 = 0;
 struct cfg80211_bss *VAR_27 = ((void*)0);
 u8 VAR_28 = 0;

 FUNC_2(&VAR_24, 0, sizeof(struct cfg80211_ssid));

 VAR_24.ssid_len = VAR_17;
 if (VAR_17 > VAR_8) {
  FUNC_5(VAR_16->adapter, VAR_2, "invalid SSID - aborting\n");
  return -VAR_1;
 }

 FUNC_1(VAR_24.ssid, VAR_18, VAR_17);
 if (!VAR_24.ssid_len || VAR_24.ssid[0] < 0x20) {
  FUNC_5(VAR_16->adapter, VAR_2, "invalid SSID - aborting\n");
  return -VAR_1;
 }



 VAR_16->sec_info.wpa_enabled = 0;
 VAR_16->sec_info.wpa2_enabled = 0;
 VAR_16->wep_key_curr_index = 0;
 VAR_16->sec_info.encryption_mode = 0;
 VAR_16->sec_info.is_authtype_auto = 0;
 VAR_25 = FUNC_9(VAR_16, ((void*)0), ((void*)0), 0, 0, ((void*)0), 1);

 if (VAR_20 == VAR_14) {
  u16 VAR_29 = 1;


  VAR_25 = FUNC_8(
    VAR_16,
    VAR_5,
    VAR_4, 0, &VAR_29, 1);
  if (VAR_25)
   return VAR_25;


  if (VAR_23) {






   VAR_16->sec_info.encryption_mode =
     VAR_15;
   VAR_16->sec_info.authentication_mode =
     VAR_13;
  }

  goto done;
 }


 if (VAR_22->auth_type == VAR_12) {
  VAR_26 = VAR_13;
  VAR_16->sec_info.is_authtype_auto = 1;
 } else {
  VAR_26 = VAR_22->auth_type;
 }

 if (VAR_22->crypto.n_ciphers_pairwise) {
  VAR_16->sec_info.encryption_mode =
      VAR_22->crypto.ciphers_pairwise[0];
  VAR_16->sec_info.authentication_mode = VAR_26;
 }

 if (VAR_22->crypto.cipher_group) {
  VAR_16->sec_info.encryption_mode = VAR_22->crypto.cipher_group;
  VAR_16->sec_info.authentication_mode = VAR_26;
 }
 if (VAR_22->ie)
  VAR_25 = FUNC_10(VAR_16, VAR_22->ie, VAR_22->ie_len);

 if (VAR_22->key) {
  if (FUNC_6(VAR_16->sec_info.encryption_mode)) {
   FUNC_5(VAR_16->adapter, VAR_10,
        "info: setting wep encryption\t"
        "with key len %d\n", VAR_22->key_len);
   VAR_16->wep_key_curr_index = VAR_22->key_idx;
   VAR_25 = FUNC_9(VAR_16, ((void*)0), VAR_22->key,
       VAR_22->key_len, VAR_22->key_idx,
       ((void*)0), 0);
  }
 }
done:





 while (1) {
  if (VAR_28) {

   if (FUNC_7(VAR_16, &VAR_24)) {
    FUNC_5(VAR_16->adapter, VAR_2, "scan error\n");
    return -VAR_0;
   }
  }


  if (VAR_20 == VAR_14)
   VAR_27 = FUNC_0(VAR_16->wdev.wiphy, VAR_21,
            VAR_19, VAR_18, VAR_17,
            VAR_7,
            VAR_9);
  else
   VAR_27 = FUNC_0(VAR_16->wdev.wiphy, VAR_21,
            VAR_19, VAR_18, VAR_17,
            VAR_6,
            VAR_9);

  if (!VAR_27) {
   if (VAR_28) {
    FUNC_5(VAR_16->adapter, VAR_11,
         "assoc: requested bss not found in scan results\n");
    break;
   }
   VAR_28 = 1;
  } else {
   FUNC_5(VAR_16->adapter, VAR_11,
        "info: trying to associate to '%.*s' bssid %pM\n",
        VAR_24.ssid_len, (char *)VAR_24.ssid,
        VAR_27->bssid);
   FUNC_1(&VAR_16->cfg_bssid, VAR_27->bssid, VAR_3);
   break;
  }
 }

 VAR_25 = FUNC_3(VAR_16, VAR_27, &VAR_24);
 if (VAR_25)
  return VAR_25;

 if (VAR_20 == VAR_14) {


  if (FUNC_4(VAR_16))
   return -VAR_0;
 }

 return VAR_25;
}
