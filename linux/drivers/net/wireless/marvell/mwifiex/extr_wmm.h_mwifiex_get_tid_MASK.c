
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int priority; } ;
struct mwifiex_ra_list_tbl {int skb_head; } ;


 struct sk_buff* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int
FUNC_2(struct mwifiex_ra_list_tbl *VAR_0)
{
 struct sk_buff *VAR_1;

 if (FUNC_1(&VAR_0->skb_head))
  return 0;

 VAR_1 = FUNC_0(&VAR_0->skb_head);

 return VAR_1->priority;
}
