
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_request {int dummy; } ;
struct atmel_mci_slot {int queue_node; struct mmc_request* mrq; TYPE_2__* mmc; } ;
struct atmel_mci {scalar_t__ state; int lock; int queue; TYPE_1__* pdev; } ;
struct TYPE_4__ {int class_dev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct atmel_mci*,struct atmel_mci_slot*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct atmel_mci *VAR_2,
  struct atmel_mci_slot *VAR_3, struct mmc_request *VAR_4)
{
 FUNC_2(&VAR_3->mmc->class_dev, "queue request: state=%d\n",
   VAR_2->state);

 FUNC_4(&VAR_2->lock);
 VAR_3->mrq = VAR_4;
 if (VAR_2->state == VAR_0) {
  VAR_2->state = VAR_1;
  FUNC_0(VAR_2, VAR_3);
 } else {
  FUNC_1(&VAR_2->pdev->dev, "queue request\n");
  FUNC_3(&VAR_3->queue_node, &VAR_2->queue);
 }
 FUNC_5(&VAR_2->lock);
}
