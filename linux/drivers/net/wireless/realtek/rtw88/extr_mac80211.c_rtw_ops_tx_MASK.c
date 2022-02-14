
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtw_tx_pkt_info {int member_0; } ;
struct rtw_dev {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 scalar_t__ FUNC_2 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct sk_buff*) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct ieee80211_tx_control*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1,
         struct ieee80211_tx_control *VAR_2,
         struct sk_buff *VAR_3)
{
 struct rtw_dev *VAR_4 = VAR_1->priv;
 struct rtw_tx_pkt_info VAR_5 = {0};

 if (!FUNC_1(VAR_4, VAR_0))
  goto out;

 FUNC_3(VAR_4, &VAR_5, VAR_2, VAR_3);
 if (FUNC_2(VAR_4, &VAR_5, VAR_3))
  goto out;

 return;

out:
 FUNC_0(VAR_1, VAR_3);
}
