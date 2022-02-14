
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p80211_rxmeta {int dummy; } ;
struct p80211_frmmeta {struct p80211_rxmeta* rx; } ;


 struct p80211_frmmeta* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline struct p80211_rxmeta *FUNC_1(struct sk_buff *VAR_0)
{
 struct p80211_frmmeta *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->rx : ((void*)0);
}
