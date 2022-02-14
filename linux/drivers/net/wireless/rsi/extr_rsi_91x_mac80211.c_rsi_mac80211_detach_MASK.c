
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {int dfsentry; struct ieee80211_supported_band* sbands; struct ieee80211_hw* hw; } ;
struct ieee80211_supported_band {int channels; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rsi_hw*) ;

void FUNC_5(struct rsi_hw *VAR_1)
{
 struct ieee80211_hw *VAR_2 = VAR_1->hw;
 enum nl80211_band VAR_3;

 if (VAR_2) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
  FUNC_0(VAR_2);
  VAR_1->hw = ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ieee80211_supported_band *VAR_4 =
     &VAR_1->sbands[VAR_3];

  FUNC_3(VAR_4->channels);
 }





}
