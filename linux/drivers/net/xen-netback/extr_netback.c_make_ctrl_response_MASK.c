
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rsp_prod_pvt; } ;
struct xenvif {TYPE_1__ ctrl; } ;
struct xen_netif_ctrl_response {int data; int status; int type; int id; } ;
struct xen_netif_ctrl_request {int type; int id; } ;
typedef scalar_t__ RING_IDX ;


 struct xen_netif_ctrl_response* FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct xenvif *VAR_0,
          const struct xen_netif_ctrl_request *VAR_1,
          u32 VAR_2, u32 VAR_3)
{
 RING_IDX VAR_4 = VAR_0->ctrl.rsp_prod_pvt;
 struct xen_netif_ctrl_response VAR_5 = {
  .id = VAR_1->id,
  .type = VAR_1->type,
  .status = VAR_2,
  .data = VAR_3,
 };

 *FUNC_0(&VAR_0->ctrl, VAR_4) = VAR_5;
 VAR_0->ctrl.rsp_prod_pvt = ++VAR_4;
}
