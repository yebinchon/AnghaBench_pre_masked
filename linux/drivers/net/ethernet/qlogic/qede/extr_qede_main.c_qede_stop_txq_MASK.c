
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_tx_queue {int handle; int tx_db; int doorbell_addr; } ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* q_tx_stop ) (int ,int,int ) ;TYPE_1__* common; } ;
struct TYPE_3__ {int (* db_recovery_del ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct qede_dev *VAR_0,
    struct qede_tx_queue *VAR_1, int VAR_2)
{

 VAR_0->ops->common->db_recovery_del(VAR_0->cdev, VAR_1->doorbell_addr,
        &VAR_1->tx_db);

 return VAR_0->ops->q_tx_stop(VAR_0->cdev, VAR_2, VAR_1->handle);
}
