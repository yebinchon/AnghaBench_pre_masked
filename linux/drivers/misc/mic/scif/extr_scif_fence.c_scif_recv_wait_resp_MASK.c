
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {scalar_t__ uop; scalar_t__* payload; } ;
struct scif_fence_info {int comp; int state; } ;
struct TYPE_2__ {int rma_lock; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;
struct scif_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scif_dev *VAR_3, struct scifmsg *VAR_4)
{
 struct scif_endpt *VAR_5 = (struct scif_endpt *)VAR_4->payload[0];
 struct scif_fence_info *VAR_6 =
  (struct scif_fence_info *)VAR_4->payload[1];

 FUNC_1(&VAR_5->rma_info.rma_lock);
 if (VAR_4->uop == VAR_2)
  VAR_6->state = VAR_0;
 else
  VAR_6->state = VAR_1;
 FUNC_2(&VAR_5->rma_info.rma_lock);
 FUNC_0(&VAR_6->comp);
}
