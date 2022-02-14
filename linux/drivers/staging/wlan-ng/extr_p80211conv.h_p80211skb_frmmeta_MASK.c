
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct p80211_frmmeta {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct p80211_frmmeta *FUNC_0(struct sk_buff *VAR_1)
{
 struct p80211_frmmeta *VAR_2 = (struct p80211_frmmeta *)VAR_1->cb;

 return VAR_2->magic == VAR_0 ? VAR_2 : ((void*)0);
}
