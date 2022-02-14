
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int dummy; } ;
struct xenvif_pkt_state {scalar_t__ remaining_len; scalar_t__ slot; scalar_t__ extra_count; struct sk_buff* skb; } ;
struct xen_netif_rx_response {unsigned int flags; scalar_t__ status; int id; int offset; } ;
struct xen_netif_rx_request {int id; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct xenvif_queue*,struct xen_netif_rx_request*,unsigned int,void*,size_t) ;
 int FUNC_1 (struct xenvif_queue*,struct xenvif_pkt_state*,unsigned int,void**,size_t*) ;

__attribute__((used)) static void FUNC_2(struct xenvif_queue *VAR_7,
    struct xenvif_pkt_state *VAR_8,
    struct xen_netif_rx_request *VAR_9,
    struct xen_netif_rx_response *VAR_10)
{
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;

 do {
  size_t VAR_13;
  void *VAR_14;

  FUNC_1(VAR_7, VAR_8, VAR_11, &VAR_14, &VAR_13);
  FUNC_0(VAR_7, VAR_9, VAR_11, VAR_14, VAR_13);

  VAR_11 += VAR_13;
  VAR_8->remaining_len -= VAR_13;

 } while (VAR_11 < VAR_6 && VAR_8->remaining_len > 0);

 if (VAR_8->remaining_len > 0)
  VAR_12 = VAR_5;
 else
  VAR_12 = 0;

 if (VAR_8->slot == 0) {
  struct sk_buff *VAR_15 = VAR_8->skb;

  if (VAR_15->ip_summed == VAR_0)
   VAR_12 |= VAR_2 |
     VAR_3;
  else if (VAR_15->ip_summed == VAR_1)
   VAR_12 |= VAR_3;

  if (VAR_8->extra_count != 0)
   VAR_12 |= VAR_4;
 }

 VAR_10->offset = 0;
 VAR_10->flags = VAR_12;
 VAR_10->id = VAR_9->id;
 VAR_10->status = (s16)VAR_11;
}
