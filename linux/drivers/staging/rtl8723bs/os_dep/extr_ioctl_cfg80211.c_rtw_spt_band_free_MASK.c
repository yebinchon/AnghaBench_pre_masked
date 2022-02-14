
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {scalar_t__ band; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_3)
{
 u32 VAR_4 = 0;

 if (!VAR_3)
  return;

 if (VAR_3->band == VAR_0)
 {
  VAR_4 = sizeof(struct ieee80211_supported_band)
   + sizeof(struct ieee80211_channel)*VAR_1
   + sizeof(struct ieee80211_rate)*VAR_2;
 }
 FUNC_0((u8 *)VAR_3);
}
