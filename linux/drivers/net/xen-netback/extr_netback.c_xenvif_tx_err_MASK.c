
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ req_cons; } ;
struct xenvif_queue {TYPE_1__ tx; int response_lock; } ;
struct xen_netif_tx_request {int dummy; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (TYPE_1__*,int ,struct xen_netif_tx_request*) ;
 int VAR_0 ;
 int FUNC_1 (struct xenvif_queue*,struct xen_netif_tx_request*,unsigned int,int ) ;
 int FUNC_2 (struct xenvif_queue*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct xenvif_queue *VAR_1,
     struct xen_netif_tx_request *VAR_2,
     unsigned int VAR_3, RING_IDX VAR_4)
{
 RING_IDX VAR_5 = VAR_1->tx.req_cons;
 unsigned long VAR_6;

 do {
  FUNC_3(&VAR_1->response_lock, VAR_6);
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);
  FUNC_2(VAR_1);
  FUNC_4(&VAR_1->response_lock, VAR_6);
  if (VAR_5 == VAR_4)
   break;
  FUNC_0(&VAR_1->tx, VAR_5++, VAR_2);
  VAR_3 = 0;
 } while (1);
 VAR_1->tx.req_cons = VAR_5;
}
