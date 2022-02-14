
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_hw_dev {TYPE_1__* hw_ops; } ;
struct scif_dev {int node; int * cookie; struct scif_hw_dev* sdev; } ;
struct TYPE_4__ {int card_initiated_exit; int misc_work; } ;
struct TYPE_3__ {int (* free_irq ) (struct scif_hw_dev*,int *,struct scif_dev*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct scif_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scif_dev*) ;
 int FUNC_4 (struct scif_dev*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct scif_dev*) ;
 int FUNC_7 (struct scif_dev*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct scif_dev*) ;
 int FUNC_10 (struct scif_hw_dev*,int *,struct scif_dev*) ;

void FUNC_11(struct scif_dev *VAR_1)
{
 struct scif_hw_dev *VAR_2 = VAR_1->sdev;

 if (!VAR_1->sdev)
  return;
 if (FUNC_9(VAR_1)) {
  if (VAR_1->cookie) {
   VAR_2->hw_ops->free_irq(VAR_2, VAR_1->cookie, VAR_1);
   VAR_1->cookie = ((void*)0);
  }
  FUNC_3(VAR_1);
 }
 FUNC_0(&VAR_0.misc_work);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1->node);
 FUNC_8(VAR_1->node);
 FUNC_2(VAR_1->node);
 FUNC_0(&VAR_0.misc_work);
 FUNC_6(VAR_1);
 if (!VAR_1->node && VAR_0.card_initiated_exit) {




  FUNC_7(VAR_1);
  VAR_0.card_initiated_exit = 0;
 }
 FUNC_1(VAR_1);
}
