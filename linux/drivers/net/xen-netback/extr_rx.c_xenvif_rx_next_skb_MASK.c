
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int tx_packets; int tx_bytes; } ;
struct xenvif_queue {TYPE_2__* vif; TYPE_1__ stats; } ;
struct xenvif_pkt_state {int frag; int extra_count; struct xen_netif_extra_info* extras; scalar_t__ remaining_len; struct sk_buff* frag_iter; struct sk_buff* skb; } ;
struct TYPE_10__ {scalar_t__ value; int type; int algorithm; } ;
struct TYPE_9__ {unsigned int type; scalar_t__ features; scalar_t__ pad; int size; } ;
struct TYPE_11__ {TYPE_4__ hash; TYPE_3__ gso; } ;
struct xen_netif_extra_info {int type; scalar_t__ flags; TYPE_5__ u; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ l4_hash; scalar_t__ sw_hash; scalar_t__ len; } ;
struct TYPE_12__ {int gso_size; } ;
struct TYPE_8__ {int gso_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xenvif_pkt_state*,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_6__* FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct xenvif_queue*) ;

__attribute__((used)) static void FUNC_6(struct xenvif_queue *VAR_8,
          struct xenvif_pkt_state *VAR_9)
{
 struct sk_buff *VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_5(VAR_8);

 VAR_8->stats.tx_bytes += VAR_10->len;
 VAR_8->stats.tx_packets++;


 FUNC_1(VAR_9, 0, sizeof(struct xenvif_pkt_state));

 VAR_9->skb = VAR_10;
 VAR_9->frag_iter = VAR_10;
 VAR_9->remaining_len = VAR_10->len;
 VAR_9->frag = -1;

 VAR_11 = FUNC_4(VAR_10);
 if ((1 << VAR_11) & VAR_8->vif->gso_mask) {
  struct xen_netif_extra_info *VAR_12;

  VAR_12 = &VAR_9->extras[VAR_2 - 1];

  VAR_12->u.gso.type = VAR_11;
  VAR_12->u.gso.size = FUNC_3(VAR_10)->gso_size;
  VAR_12->u.gso.pad = 0;
  VAR_12->u.gso.features = 0;
  VAR_12->type = VAR_2;
  VAR_12->flags = 0;

  VAR_9->extra_count++;
 }

 if (VAR_10->sw_hash) {
  struct xen_netif_extra_info *VAR_13;

  VAR_13 = &VAR_9->extras[VAR_3 - 1];

  VAR_13->u.hash.algorithm =
   VAR_1;

  if (VAR_10->l4_hash)
   VAR_13->u.hash.type =
    VAR_10->protocol == FUNC_0(VAR_0) ?
    VAR_5 :
    VAR_7;
  else
   VAR_13->u.hash.type =
    VAR_10->protocol == FUNC_0(VAR_0) ?
    VAR_4 :
    VAR_6;

  *(uint32_t *)VAR_13->u.hash.value = FUNC_2(VAR_10);

  VAR_13->type = VAR_3;
  VAR_13->flags = 0;

  VAR_9->extra_count++;
 }
}
