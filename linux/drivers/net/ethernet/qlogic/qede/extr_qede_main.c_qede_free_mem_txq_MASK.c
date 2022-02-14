
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int skbs; int xdp; } ;
struct qede_tx_queue {int tx_pbl; TYPE_1__ sw_tx_ring; scalar_t__ is_xdp; } ;
struct qede_dev {int cdev; TYPE_3__* ops; } ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* chain_free ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct qede_dev *VAR_0, struct qede_tx_queue *VAR_1)
{

 if (VAR_1->is_xdp)
  FUNC_0(VAR_1->sw_tx_ring.xdp);
 else
  FUNC_0(VAR_1->sw_tx_ring.skbs);


 VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_1->tx_pbl);
}
