
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mt76x02_dev*) ;
 int FUNC_1 (struct ieee80211_hw*,int,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_hw *VAR_1, enum set_key_cmd VAR_2,
  struct ieee80211_vif *VAR_3, struct ieee80211_sta *VAR_4,
  struct ieee80211_key_conf *VAR_5)
{
 struct mt76x02_dev *VAR_6 = VAR_1->priv;

 if (FUNC_0(VAR_6))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
