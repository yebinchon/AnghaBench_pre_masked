
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int flags; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2,
        const u8 *VAR_3)
{
 struct rt2x00_dev *VAR_4 = VAR_1->priv;
 FUNC_1(VAR_0, &VAR_4->flags);
 FUNC_0(VAR_4);
}
