
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_5__ {int band; } ;
struct mwifiex_private {int cfg_bssid; TYPE_3__ wdev; TYPE_2__ curr_bss_params; } ;
struct TYPE_4__ {int ssid_len; int ssid; } ;
struct mwifiex_bss_info {int bssid; int bss_chan; TYPE_1__ ssid; } ;
struct ieee_types_header {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cfg80211_bss* FUNC_0 (int ,struct ieee80211_channel*,int ,int ,int ,int ,int ,int*,int,int ,int ) ;
 int FUNC_1 (int ,struct cfg80211_bss*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 struct ieee80211_channel* FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int *,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct mwifiex_private*,struct mwifiex_bss_info*) ;

__attribute__((used)) static int FUNC_8(struct mwifiex_private *VAR_5)
{
 struct ieee80211_channel *VAR_6;
 struct mwifiex_bss_info VAR_7;
 struct cfg80211_bss *VAR_8;
 int VAR_9;
 u8 VAR_10[VAR_2 + sizeof(struct ieee_types_header)];
 enum nl80211_band VAR_11;

 if (FUNC_7(VAR_5, &VAR_7))
  return -1;

 VAR_10[0] = VAR_4;
 VAR_10[1] = VAR_7.ssid.ssid_len;

 FUNC_5(&VAR_10[sizeof(struct ieee_types_header)],
        &VAR_7.ssid.ssid, VAR_7.ssid.ssid_len);
 VAR_9 = VAR_10[1] + sizeof(struct ieee_types_header);

 VAR_11 = FUNC_6(VAR_5->curr_bss_params.band);
 VAR_6 = FUNC_4(VAR_5->wdev.wiphy,
   FUNC_3(VAR_7.bss_chan,
             VAR_11));

 VAR_8 = FUNC_0(VAR_5->wdev.wiphy, VAR_6,
      VAR_0,
      VAR_7.bssid, 0, VAR_3,
      0, VAR_10, VAR_9, 0, VAR_1);
 if (VAR_8) {
  FUNC_1(VAR_5->wdev.wiphy, VAR_8);
  FUNC_2(VAR_5->cfg_bssid, VAR_7.bssid);
 }

 return 0;
}
