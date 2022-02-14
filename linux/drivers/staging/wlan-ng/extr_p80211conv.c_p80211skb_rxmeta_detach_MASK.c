
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int cb; } ;
struct p80211_rxmeta {int dummy; } ;
struct p80211_frmmeta {struct p80211_rxmeta* rx; } ;


 int FUNC_0 (struct p80211_rxmeta*) ;
 int FUNC_1 (int ,int ,int) ;
 struct p80211_frmmeta* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct sk_buff *VAR_0)
{
 struct p80211_rxmeta *VAR_1;
 struct p80211_frmmeta *VAR_2;


 if (!VAR_0) {
  FUNC_3("Called w/ null skb.\n");
  return;
 }
 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2) {
  FUNC_3("Called w/ bad frmmeta magic.\n");
  return;
 }
 VAR_1 = VAR_2->rx;
 if (!VAR_1) {
  FUNC_3("Called w/ bad rxmeta ptr.\n");
  return;
 }


 FUNC_0(VAR_1);


 FUNC_1(VAR_0->cb, 0, sizeof(VAR_0->cb));
}
