
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rsp_prod_pvt; } ;
struct xenvif_queue {TYPE_1__ tx; } ;
struct xen_netif_tx_response {int status; int id; } ;
struct xen_netif_tx_request {int id; } ;
typedef int s8 ;
typedef scalar_t__ RING_IDX ;


 struct xen_netif_tx_response* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct xenvif_queue *VAR_1,
        struct xen_netif_tx_request *VAR_2,
        unsigned int VAR_3,
        s8 VAR_4)
{
 RING_IDX VAR_5 = VAR_1->tx.rsp_prod_pvt;
 struct xen_netif_tx_response *VAR_6;

 VAR_6 = FUNC_0(&VAR_1->tx, VAR_5);
 VAR_6->id = VAR_2->id;
 VAR_6->status = VAR_4;

 while (VAR_3-- != 0)
  FUNC_0(&VAR_1->tx, ++VAR_5)->status = VAR_0;

 VAR_1->tx.rsp_prod_pvt = ++VAR_5;
}
