
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_rx_queue {int rx_comp_ring; int rx_bd_ring; int sw_rx_ring; } ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* chain_free ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qede_dev*,struct qede_rx_queue*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qede_dev *VAR_0, struct qede_rx_queue *VAR_1)
{

 FUNC_1(VAR_0, VAR_1);


 FUNC_0(VAR_1->sw_rx_ring);


 VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_1->rx_bd_ring);
 VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_1->rx_comp_ring);
}
