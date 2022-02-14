
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int completed; } ;
struct TYPE_3__ {int req_cons; int rsp_prod_pvt; } ;
struct xenvif_queue {TYPE_2__ rx_copy; TYPE_1__ rx; } ;
struct xenvif_pkt_state {int skb; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xenvif_queue *VAR_0,
          struct xenvif_pkt_state *VAR_1)
{

 VAR_0->rx.rsp_prod_pvt = VAR_0->rx.req_cons;

 FUNC_0(VAR_0->rx_copy.completed, VAR_1->skb);
}
