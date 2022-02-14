
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_local {size_t out_idx; struct sk_buff** skbs; int sk_count; } ;
struct TYPE_3__ {struct net_local* netif; } ;
typedef TYPE_1__ hysdn_card ;



struct sk_buff *
FUNC_0(hysdn_card *VAR_0)
{
 struct net_local *VAR_1 = VAR_0->netif;

 if (!VAR_1)
  return (((void*)0));

 if (!VAR_1->sk_count)
  return (((void*)0));

 return (VAR_1->skbs[VAR_1->out_idx]);
}
