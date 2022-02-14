
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee_types_header {int dummy; } ;
struct ieee80211_tdls_lnkie {int ie_len; int resp_sta; int init_sta; int bssid; int ie_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 struct ieee80211_tdls_lnkie* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_2, const u8 *VAR_3,
    const u8 *VAR_4, const u8 *VAR_5)
{
 struct ieee80211_tdls_lnkie *VAR_6;

 VAR_6 = FUNC_1(VAR_2, sizeof(struct ieee80211_tdls_lnkie));
 VAR_6->ie_type = VAR_1;
 VAR_6->ie_len = sizeof(struct ieee80211_tdls_lnkie) -
   sizeof(struct ieee_types_header);

 FUNC_0(VAR_6->bssid, VAR_5, VAR_0);
 FUNC_0(VAR_6->init_sta, VAR_3, VAR_0);
 FUNC_0(VAR_6->resp_sta, VAR_4, VAR_0);
}
