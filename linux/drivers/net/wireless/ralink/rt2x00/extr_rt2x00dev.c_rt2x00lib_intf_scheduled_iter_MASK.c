
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_intf {int beacon_skb_mutex; int delayed_flags; } ;
struct rt2x00_dev {int flags; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 struct rt2x00_intf* FUNC_5 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, u8 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_2;
 struct rt2x00_intf *VAR_6 = FUNC_5(VAR_4);







 if (!FUNC_4(VAR_1, &VAR_5->flags))
  return;

 if (FUNC_3(VAR_0, &VAR_6->delayed_flags)) {
  FUNC_0(&VAR_6->beacon_skb_mutex);
  FUNC_2(VAR_5, VAR_4);
  FUNC_1(&VAR_6->beacon_skb_mutex);
 }
}
