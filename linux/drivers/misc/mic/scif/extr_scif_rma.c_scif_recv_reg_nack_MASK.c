
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {scalar_t__* payload; } ;
struct scif_window {int regwq; int reg_state; scalar_t__ ep; } ;
struct TYPE_2__ {int rma_lock; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;
struct scif_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scif_dev *VAR_1, struct scifmsg *VAR_2)
{
 struct scif_window *VAR_3 =
  (struct scif_window *)VAR_2->payload[2];
 struct scif_endpt *VAR_4 = (struct scif_endpt *)VAR_3->ep;

 FUNC_0(&VAR_4->rma_info.rma_lock);
 VAR_3->reg_state = VAR_0;
 FUNC_2(&VAR_3->regwq);
 FUNC_1(&VAR_4->rma_info.rma_lock);
}
