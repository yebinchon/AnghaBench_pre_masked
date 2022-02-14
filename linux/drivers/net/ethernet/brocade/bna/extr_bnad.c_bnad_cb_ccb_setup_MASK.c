
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnad_rx_info {TYPE_3__* rx_ctrl; } ;
struct bnad {int dummy; } ;
struct bna_ccb {size_t id; TYPE_3__* ctrl; TYPE_2__* cq; } ;
struct TYPE_6__ {struct bna_ccb* ccb; } ;
struct TYPE_5__ {TYPE_1__* rx; } ;
struct TYPE_4__ {scalar_t__ priv; } ;



__attribute__((used)) static void
FUNC_0(struct bnad *VAR_0, struct bna_ccb *VAR_1)
{
 struct bnad_rx_info *VAR_2 =
   (struct bnad_rx_info *)VAR_1->cq->rx->priv;

 VAR_2->rx_ctrl[VAR_1->id].ccb = VAR_1;
 VAR_1->ctrl = &VAR_2->rx_ctrl[VAR_1->id];
}
