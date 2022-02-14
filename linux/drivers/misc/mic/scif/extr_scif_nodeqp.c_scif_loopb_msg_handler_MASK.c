
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {int dummy; } ;
struct scif_qp {int inbound_q; int recv_lock; } ;
struct scif_loopb_msg {int list; int msg; } ;
struct scif_dev {int dummy; } ;
struct TYPE_2__ {int loopb_work; int loopb_wq; int loopb_recv_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scif_loopb_msg*) ;
 struct scif_loopb_msg* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct scif_dev *VAR_3, struct scif_qp *VAR_4)
{
 int VAR_5;
 struct scif_loopb_msg *VAR_6;

 do {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_5 = FUNC_4(&VAR_4->inbound_q, &VAR_6->msg,
          sizeof(struct scifmsg));
  if (VAR_5 != sizeof(struct scifmsg)) {
   FUNC_0(VAR_6);
   FUNC_5(&VAR_4->inbound_q);
   break;
  }
  FUNC_6(&VAR_4->recv_lock);
  FUNC_2(&VAR_6->list, &VAR_2.loopb_recv_q);
  FUNC_7(&VAR_4->recv_lock);
  FUNC_3(VAR_2.loopb_wq, &VAR_2.loopb_work);
  FUNC_5(&VAR_4->inbound_q);
 } while (VAR_5 == sizeof(struct scifmsg));
 return VAR_5;
}
