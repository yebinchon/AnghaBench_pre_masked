
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct xenvif_queue {scalar_t__* pending_ring; int pending_cons; } ;
struct xen_netif_tx_request {int dummy; } ;
struct skb_shared_info {unsigned int nr_frags; struct sk_buff* frag_list; int * frags; } ;
struct sk_buff {int dummy; } ;
struct gnttab_map_grant_ref {int dummy; } ;
typedef int skb_frag_t ;
typedef size_t pending_ring_idx_t ;
struct TYPE_2__ {scalar_t__ pending_idx; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 size_t FUNC_3 (int ) ;
 struct skb_shared_info* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct xenvif_queue*,scalar_t__,struct xen_netif_tx_request*,int ,struct gnttab_map_grant_ref*) ;

__attribute__((used)) static struct gnttab_map_grant_ref *FUNC_6(struct xenvif_queue *VAR_0,
       struct sk_buff *VAR_1,
       struct xen_netif_tx_request *VAR_2,
       struct gnttab_map_grant_ref *VAR_3,
       unsigned int VAR_4,
       struct sk_buff *VAR_5)
{
 struct skb_shared_info *VAR_6 = FUNC_4(VAR_1);
 skb_frag_t *VAR_7 = VAR_6->frags;
 u16 VAR_8 = FUNC_0(VAR_1)->pending_idx;
 int VAR_9;
 pending_ring_idx_t VAR_10;
 unsigned int VAR_11;

 VAR_11 = VAR_6->nr_frags;


 VAR_9 = (FUNC_1(&VAR_6->frags[0]) == VAR_8);

 for (VAR_6->nr_frags = VAR_9; VAR_6->nr_frags < VAR_11;
      VAR_6->nr_frags++, VAR_2++, VAR_3++) {
  VAR_10 = FUNC_3(VAR_0->pending_cons++);
  VAR_8 = VAR_0->pending_ring[VAR_10];
  FUNC_5(VAR_0, VAR_8, VAR_2, 0, VAR_3);
  FUNC_2(&VAR_7[VAR_6->nr_frags], VAR_8);
 }

 if (VAR_4) {

  VAR_6 = FUNC_4(VAR_5);
  VAR_7 = VAR_6->frags;

  for (VAR_6->nr_frags = 0; VAR_6->nr_frags < VAR_4;
       VAR_6->nr_frags++, VAR_2++, VAR_3++) {
   VAR_10 = FUNC_3(VAR_0->pending_cons++);
   VAR_8 = VAR_0->pending_ring[VAR_10];
   FUNC_5(VAR_0, VAR_8, VAR_2, 0,
      VAR_3);
   FUNC_2(&VAR_7[VAR_6->nr_frags],
          VAR_8);
  }

  FUNC_4(VAR_1)->frag_list = VAR_5;
 }

 return VAR_3;
}
