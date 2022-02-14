
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtw_dev {int hw; } ;
struct ieee80211_tx_info {int flags; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_1,
        struct sk_buff *VAR_2, bool VAR_3)
{
 struct ieee80211_tx_info *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_4);
 if (VAR_3)
  VAR_4->flags |= VAR_0;
 else
  VAR_4->flags &= ~VAR_0;

 FUNC_2(VAR_1->hw, VAR_2);
}
