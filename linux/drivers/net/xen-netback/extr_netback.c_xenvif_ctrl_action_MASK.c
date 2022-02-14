
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req_cons; TYPE_1__* sring; } ;
struct xenvif {TYPE_2__ ctrl; } ;
struct xen_netif_ctrl_request {int dummy; } ;
struct TYPE_3__ {scalar_t__ req_prod; scalar_t__ req_event; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (TYPE_2__*,scalar_t__,struct xen_netif_ctrl_request*) ;
 int FUNC_1 (struct xenvif*,struct xen_netif_ctrl_request*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct xenvif *VAR_0)
{
 for (;;) {
  RING_IDX VAR_1, VAR_2;

  VAR_1 = VAR_0->ctrl.sring->req_prod;
  VAR_2 = VAR_0->ctrl.req_cons;


  FUNC_2();

  if (VAR_2 == VAR_1)
   break;

  while (VAR_2 != VAR_1) {
   struct xen_netif_ctrl_request VAR_3;

   FUNC_0(&VAR_0->ctrl, VAR_2, &VAR_3);
   VAR_2++;

   FUNC_1(VAR_0, &VAR_3);
  }

  VAR_0->ctrl.req_cons = VAR_2;
  VAR_0->ctrl.sring->req_event = VAR_2 + 1;
 }
}
