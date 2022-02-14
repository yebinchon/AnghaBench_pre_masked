
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int dummy; } ;
struct xenvif_pkt_state {scalar_t__ extra_count; struct xen_netif_extra_info* extras; } ;
struct xen_netif_rx_response {int dummy; } ;
struct xen_netif_rx_request {int dummy; } ;
struct xen_netif_extra_info {scalar_t__ type; int flags; } ;


 unsigned int FUNC_0 (struct xen_netif_extra_info*) ;
 int FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct xenvif_queue *VAR_1,
     struct xenvif_pkt_state *VAR_2,
     struct xen_netif_rx_request *VAR_3,
     struct xen_netif_rx_response *VAR_4)
{
 struct xen_netif_extra_info *VAR_5 = (void *)VAR_4;
 unsigned int VAR_6;

 VAR_2->extra_count--;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2->extras); VAR_6++) {
  if (VAR_2->extras[VAR_6].type) {
   *VAR_5 = VAR_2->extras[VAR_6];

   if (VAR_2->extra_count != 0)
    VAR_5->flags |= VAR_0;

   VAR_2->extras[VAR_6].type = 0;
   return;
  }
 }
 FUNC_1();
}
