
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int req_cons; TYPE_1__* sring; } ;
struct xenvif_queue {TYPE_3__* vif; scalar_t__ last_rx_time; int stalled; TYPE_2__ rx; } ;
struct TYPE_6__ {scalar_t__ stall_timeout; } ;
struct TYPE_4__ {int req_prod; } ;
typedef int RING_IDX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct xenvif_queue *VAR_1)
{
 RING_IDX VAR_2, VAR_3;

 VAR_2 = VAR_1->rx.sring->req_prod;
 VAR_3 = VAR_1->rx.req_cons;

 return !VAR_1->stalled &&
  VAR_2 - VAR_3 < 1 &&
  FUNC_0(VAR_0,
      VAR_1->last_rx_time + VAR_1->vif->stall_timeout);
}
