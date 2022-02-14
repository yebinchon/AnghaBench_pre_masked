
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wcn36xx_sta {size_t tid; int ampdu_lock; int * ampdu_state; } ;
struct wcn36xx {int conf_mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;
struct ieee80211_ampdu_params {int action; size_t tid; size_t ssn; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_vif*,struct wcn36xx_sta*) ;
 int FUNC_1 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_2 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int,size_t) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct wcn36xx*) ;
 int FUNC_10 (struct wcn36xx*,struct ieee80211_sta*,size_t,size_t*,int,int ) ;
 int FUNC_11 (struct wcn36xx*,size_t,int ) ;
 int FUNC_12 (struct wcn36xx*,int ) ;
 struct wcn36xx_sta* FUNC_13 (struct ieee80211_sta*) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_4,
      struct ieee80211_vif *VAR_5,
      struct ieee80211_ampdu_params *VAR_6)
{
 struct wcn36xx *VAR_7 = VAR_4->priv;
 struct wcn36xx_sta *VAR_8 = FUNC_13(VAR_6->sta);
 struct ieee80211_sta *VAR_9 = VAR_6->sta;
 enum ieee80211_ampdu_mlme_action VAR_10 = VAR_6->action;
 u16 VAR_11 = VAR_6->tid;
 u16 *VAR_12 = &VAR_6->ssn;

 FUNC_7(VAR_3, "mac ampdu action action %d tid %d\n",
      VAR_10, VAR_11);

 FUNC_3(&VAR_7->conf_mutex);

 switch (VAR_10) {
 case 134:
  VAR_8->tid = VAR_11;
  FUNC_10(VAR_7, VAR_9, VAR_11, VAR_12, 0,
   FUNC_0(VAR_5, VAR_8));
  FUNC_9(VAR_7);
  FUNC_12(VAR_7, FUNC_0(VAR_5, VAR_8));
  break;
 case 133:
  FUNC_11(VAR_7, VAR_11, FUNC_0(VAR_5, VAR_8));
  break;
 case 131:
  FUNC_5(&VAR_8->ampdu_lock);
  VAR_8->ampdu_state[VAR_11] = VAR_2;
  FUNC_6(&VAR_8->ampdu_lock);

  FUNC_1(VAR_5, VAR_9->addr, VAR_11);
  break;
 case 132:
  FUNC_5(&VAR_8->ampdu_lock);
  VAR_8->ampdu_state[VAR_11] = VAR_1;
  FUNC_6(&VAR_8->ampdu_lock);

  FUNC_10(VAR_7, VAR_9, VAR_11, VAR_12, 1,
   FUNC_0(VAR_5, VAR_8));
  break;
 case 129:
 case 128:
 case 130:
  FUNC_5(&VAR_8->ampdu_lock);
  VAR_8->ampdu_state[VAR_11] = VAR_0;
  FUNC_6(&VAR_8->ampdu_lock);

  FUNC_2(VAR_5, VAR_9->addr, VAR_11);
  break;
 default:
  FUNC_8("Unknown AMPDU action\n");
 }

 FUNC_4(&VAR_7->conf_mutex);

 return 0;
}
