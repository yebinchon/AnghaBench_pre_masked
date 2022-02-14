
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtl_tx_report {int queue; } ;
struct rtl_priv {struct rtl_tx_report tx_report; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_0);
 struct rtl_tx_report *VAR_3 = &VAR_2->tx_report;

 FUNC_0(&VAR_3->queue, VAR_1);
}
