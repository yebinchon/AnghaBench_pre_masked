
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_qp {int local_write; int local_read; int inbound_q; int outbound_q; int recv_lock; int send_lock; int magic; } ;
struct scif_dev {int node; struct scif_qp* qpairs; } ;
struct TYPE_2__ {int nodeid; int loopb_wq; struct scif_dev* loopb_dev; int loopb_work; int loopb_wqname; int loopb_recv_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct scif_qp*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct scif_dev*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct scif_dev*) ;
 int FUNC_9 (int *,int *,int *,void*,int ) ;
 int FUNC_10 (struct scif_dev*) ;
 int FUNC_11 (int ,int,char*,int) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct scif_dev *VAR_6)
{
 int VAR_7 = 0;
 void *VAR_8;
 struct scif_qp *VAR_9;

 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7)
  goto exit;
 FUNC_0(&VAR_4.loopb_recv_q);
 FUNC_11(VAR_4.loopb_wqname, sizeof(VAR_4.loopb_wqname),
   "SCIF LOOPB %d", VAR_6->node);
 VAR_4.loopb_wq =
  FUNC_2(VAR_4.loopb_wqname, 0);
 if (!VAR_4.loopb_wq) {
  VAR_7 = -VAR_0;
  goto destroy_intr;
 }
 FUNC_1(&VAR_4.loopb_work, VAR_5);

 VAR_6->qpairs = FUNC_6(sizeof(*VAR_6->qpairs), VAR_1);
 if (!VAR_6->qpairs) {
  VAR_7 = -VAR_0;
  goto destroy_loopb_wq;
 }

 VAR_9 = VAR_6->qpairs;
 VAR_9->magic = VAR_2;
 FUNC_12(&VAR_9->send_lock);
 FUNC_12(&VAR_9->recv_lock);

 VAR_8 = FUNC_6(VAR_3, VAR_1);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto free_qpairs;
 }





 FUNC_9(&VAR_9->outbound_q,
       &VAR_9->local_read,
       &VAR_9->local_write,
       VAR_8, FUNC_4(VAR_3));

 FUNC_9(&VAR_9->inbound_q,
       &VAR_9->local_read,
       &VAR_9->local_write,
       VAR_8, FUNC_4(VAR_3));
 VAR_4.nodeid = VAR_6->node;

 FUNC_8(VAR_6);

 VAR_4.loopb_dev = VAR_6;
 return VAR_7;
free_qpairs:
 FUNC_5(VAR_6->qpairs);
destroy_loopb_wq:
 FUNC_3(VAR_4.loopb_wq);
destroy_intr:
 FUNC_7(VAR_6);
exit:
 return VAR_7;
}
