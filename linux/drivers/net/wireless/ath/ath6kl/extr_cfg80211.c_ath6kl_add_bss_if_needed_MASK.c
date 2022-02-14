
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct ath6kl_vif {size_t const* ssid; size_t ssid_len; struct ath6kl* ar; } ;
struct ath6kl {int wiphy; } ;
typedef enum network_type { ____Placeholder_network_type } network_type ;
typedef enum ieee80211_bss_type { ____Placeholder_ieee80211_bss_type } ieee80211_bss_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 struct cfg80211_bss* FUNC_1 (int ,struct ieee80211_channel*,size_t const*,size_t const*,size_t,int,int ) ;
 struct cfg80211_bss* FUNC_2 (int ,struct ieee80211_channel*,int ,size_t const*,int ,int ,int,size_t*,int,int ,int ) ;
 int FUNC_3 (size_t*) ;
 size_t* FUNC_4 (size_t,int ) ;
 int FUNC_5 (size_t*,size_t const*,size_t) ;

__attribute__((used)) static struct cfg80211_bss *
FUNC_6(struct ath6kl_vif *VAR_10,
    enum network_type VAR_11,
    const u8 *VAR_12,
    struct ieee80211_channel *VAR_13,
    const u8 *VAR_14,
    size_t VAR_15)
{
 struct ath6kl *VAR_16 = VAR_10->ar;
 struct cfg80211_bss *VAR_17;
 u16 VAR_18;
 enum ieee80211_bss_type VAR_19;
 u8 *VAR_20;

 if (VAR_11 & VAR_0) {
  VAR_18 = VAR_8;
  VAR_19 = VAR_5;
 } else {
  VAR_18 = VAR_7;
  VAR_19 = VAR_4;
 }

 VAR_17 = FUNC_1(VAR_16->wiphy, VAR_13, VAR_12,
          VAR_10->ssid, VAR_10->ssid_len,
          VAR_19, VAR_6);
 if (VAR_17 == ((void*)0)) {
  VAR_20 = FUNC_4(2 + VAR_10->ssid_len + VAR_15, VAR_3);
  if (VAR_20 == ((void*)0))
   return ((void*)0);
  VAR_20[0] = VAR_9;
  VAR_20[1] = VAR_10->ssid_len;
  FUNC_5(VAR_20 + 2, VAR_10->ssid, VAR_10->ssid_len);
  FUNC_5(VAR_20 + 2 + VAR_10->ssid_len, VAR_14, VAR_15);
  VAR_17 = FUNC_2(VAR_16->wiphy, VAR_13,
       VAR_2,
       VAR_12, 0, VAR_18, 100,
       VAR_20, 2 + VAR_10->ssid_len + VAR_15,
       0, VAR_3);
  if (VAR_17)
   FUNC_0(VAR_1,
       "added bss %pM to cfg80211\n", VAR_12);
  FUNC_3(VAR_20);
 } else {
  FUNC_0(VAR_1, "cfg80211 already has a bss\n");
 }

 return VAR_17;
}
