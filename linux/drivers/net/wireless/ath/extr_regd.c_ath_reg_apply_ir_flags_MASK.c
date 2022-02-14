
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ath_regulatory {int dummy; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 size_t VAR_0 ;


 int FUNC_0 (struct wiphy*,int) ;
 int FUNC_1 (struct wiphy*,int) ;
 int FUNC_2 (struct ath_regulatory*) ;

__attribute__((used)) static void
FUNC_3(struct wiphy *VAR_1,
         struct ath_regulatory *VAR_2,
         enum nl80211_reg_initiator VAR_3)
{
 struct ieee80211_supported_band *VAR_4;

 VAR_4 = VAR_1->bands[VAR_0];
 if (!VAR_4)
  return;

 switch(VAR_3) {
 case 129:
  FUNC_0(VAR_1, 2467);
  FUNC_0(VAR_1, 2472);
  break;
 case 128:
  if (!FUNC_2(VAR_2))
   break;
  FUNC_0(VAR_1, 2467);
  FUNC_0(VAR_1, 2472);
  break;
 default:
  FUNC_1(VAR_1, 2467);
  FUNC_1(VAR_1, 2472);
 }
}
