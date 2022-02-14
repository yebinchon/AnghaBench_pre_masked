
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54s_tx_info {int tx_list; } ;
struct p54s_priv {int work; int hw; int tx_lock; int tx_pending; } ;
struct p54_tx_info {scalar_t__ data; } ;
struct ieee80211_tx_info {scalar_t__ rate_driver_data; } ;
struct ieee80211_hw {struct p54s_priv* priv; } ;


 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct p54s_priv *VAR_2 = VAR_0->priv;
 struct ieee80211_tx_info *VAR_3 = FUNC_1(VAR_1);
 struct p54_tx_info *VAR_4 = (struct p54_tx_info *) VAR_3->rate_driver_data;
 struct p54s_tx_info *VAR_5 = (struct p54s_tx_info *) VAR_4->data;
 unsigned long VAR_6;

 FUNC_0(sizeof(*VAR_5) > sizeof((VAR_4->data)));

 FUNC_4(&VAR_2->tx_lock, VAR_6);
 FUNC_3(&VAR_5->tx_list, &VAR_2->tx_pending);
 FUNC_5(&VAR_2->tx_lock, VAR_6);

 FUNC_2(VAR_2->hw, &VAR_2->work);
}
