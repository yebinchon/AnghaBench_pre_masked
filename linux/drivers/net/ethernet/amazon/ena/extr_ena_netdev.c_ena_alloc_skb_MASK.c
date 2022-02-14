
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int skb_alloc_fail; } ;
struct ena_ring {int netdev; int adapter; int syncp; TYPE_1__ rx_stats; int rx_copybreak; int napi; } ;


 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct ena_ring *VAR_1, bool VAR_2)
{
 struct sk_buff *VAR_3;

 if (VAR_2)
  VAR_3 = FUNC_0(VAR_1->napi);
 else
  VAR_3 = FUNC_1(VAR_1->netdev,
      VAR_1->rx_copybreak);

 if (FUNC_5(!VAR_3)) {
  FUNC_3(&VAR_1->syncp);
  VAR_1->rx_stats.skb_alloc_fail++;
  FUNC_4(&VAR_1->syncp);
  FUNC_2(VAR_1->adapter, VAR_0, VAR_1->netdev,
     "Failed to allocate skb. frags: %d\n", VAR_2);
  return ((void*)0);
 }

 return VAR_3;
}
