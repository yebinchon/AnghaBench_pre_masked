
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {scalar_t__ uop; scalar_t__* payload; } ;
struct scif_window {int dummy; } ;
struct TYPE_2__ {int rma_lock; int remote_reg_list; } ;
struct scif_endpt {scalar_t__ state; int remote_dev; TYPE_1__ rma_info; int lock; } ;
struct scif_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct scif_window*) ;
 int FUNC_3 (struct scif_window*) ;
 int FUNC_4 (int ,struct scif_window*) ;
 int FUNC_5 (struct scif_window*,int *) ;
 int FUNC_6 (int ,struct scifmsg*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct scif_dev *VAR_3, struct scifmsg *VAR_4)
{
 struct scif_endpt *VAR_5 = (struct scif_endpt *)VAR_4->payload[0];
 struct scif_window *VAR_6 =
  (struct scif_window *)VAR_4->payload[1];

 FUNC_0(&VAR_5->rma_info.rma_lock);
 FUNC_7(&VAR_5->lock);
 if (VAR_5->state == VAR_0) {
  VAR_4->uop = VAR_1;
  FUNC_6(VAR_5->remote_dev, VAR_4);
  FUNC_4(VAR_5->remote_dev, VAR_6);

  FUNC_5(VAR_6, &VAR_5->rma_info.remote_reg_list);
 } else {
  VAR_4->uop = VAR_2;
  FUNC_6(VAR_5->remote_dev, VAR_4);
 }
 FUNC_8(&VAR_5->lock);
 FUNC_1(&VAR_5->rma_info.rma_lock);

 FUNC_2(VAR_5->remote_dev, VAR_6);




 if (VAR_4->uop == VAR_2)
  FUNC_3(VAR_6);
}
