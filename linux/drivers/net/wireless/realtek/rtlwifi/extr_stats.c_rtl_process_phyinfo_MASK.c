
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_stats {int packet_matchbssid; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,struct rtl_stats*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_stats*) ;
 int FUNC_2 (struct ieee80211_hw*,struct rtl_stats*) ;

void FUNC_3(struct ieee80211_hw *VAR_0, u8 *VAR_1,
    struct rtl_stats *VAR_2)
{

 if (!VAR_2->packet_matchbssid)
  return;

 FUNC_2(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_2);
}
