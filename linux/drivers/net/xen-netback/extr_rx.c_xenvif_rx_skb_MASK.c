
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req_cons; } ;
struct xenvif_queue {TYPE_1__ rx; int last_rx_time; } ;
struct xenvif_pkt_state {scalar_t__ remaining_len; scalar_t__ extra_count; scalar_t__ slot; } ;
struct xen_netif_rx_response {int dummy; } ;
struct xen_netif_rx_request {int dummy; } ;


 struct xen_netif_rx_request* FUNC_0 (TYPE_1__*,int ) ;
 struct xen_netif_rx_response* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct xenvif_queue*,struct xenvif_pkt_state*) ;
 int FUNC_3 (struct xenvif_queue*,struct xenvif_pkt_state*,struct xen_netif_rx_request*,struct xen_netif_rx_response*) ;
 int FUNC_4 (struct xenvif_queue*,struct xenvif_pkt_state*,struct xen_netif_rx_request*,struct xen_netif_rx_response*) ;
 int FUNC_5 (struct xenvif_queue*,struct xenvif_pkt_state*) ;

__attribute__((used)) static void FUNC_6(struct xenvif_queue *VAR_1)
{
 struct xenvif_pkt_state VAR_2;

 FUNC_5(VAR_1, &VAR_2);

 VAR_1->last_rx_time = VAR_0;

 do {
  struct xen_netif_rx_request *VAR_3;
  struct xen_netif_rx_response *VAR_4;

  VAR_3 = FUNC_0(&VAR_1->rx, VAR_1->rx.req_cons);
  VAR_4 = FUNC_1(&VAR_1->rx, VAR_1->rx.req_cons);


  if (VAR_2.slot != 0 && VAR_2.extra_count != 0)
   FUNC_4(VAR_1, &VAR_2, VAR_3, VAR_4);
  else
   FUNC_3(VAR_1, &VAR_2, VAR_3, VAR_4);

  VAR_1->rx.req_cons++;
  VAR_2.slot++;
 } while (VAR_2.remaining_len > 0 || VAR_2.extra_count != 0);

 FUNC_2(VAR_1, &VAR_2);
}
