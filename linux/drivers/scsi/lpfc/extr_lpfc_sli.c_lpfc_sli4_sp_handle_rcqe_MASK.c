
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_rcqe {int dummy; } ;
struct lpfc_queue {scalar_t__ queue_id; int RQ_no_posted_buf; int RQ_buf_posted; int RQ_rcv_buf; int RQ_no_buf_found; } ;
struct lpfc_nvmet_tgtport {int xmt_fcp_release; int rcv_fcp_cmd_out; int rcv_fcp_cmd_in; } ;
struct TYPE_11__ {int sp_queue_event; struct lpfc_queue* dat_rq; struct lpfc_queue* hdr_rq; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_6__* targetport; int nvmet_support; TYPE_5__ sli4_hba; int pport; TYPE_1__* hbqs; } ;
struct TYPE_8__ {int rcqe_cmpl; } ;
struct TYPE_10__ {int list; TYPE_2__ cqe; } ;
struct TYPE_9__ {scalar_t__ virt; } ;
struct hbq_dmabuf {TYPE_4__ cq_event; TYPE_3__ hbuf; } ;
struct fc_frame_header {int fh_r_ctl; } ;
struct TYPE_12__ {struct lpfc_nvmet_tgtport* private; } ;
struct TYPE_7__ {int hbq_buffer_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct lpfc_rcqe*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_8 ;
 int FUNC_3 (struct lpfc_hba*,int ,int,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,struct hbq_dmabuf*) ;
 int FUNC_5 (struct lpfc_queue*,struct lpfc_queue*) ;
 struct hbq_dmabuf* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct lpfc_rcqe*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static bool
FUNC_11(struct lpfc_hba *VAR_12, struct lpfc_rcqe *VAR_13)
{
 bool VAR_14 = 0;
 struct fc_frame_header *VAR_15;
 struct lpfc_queue *VAR_16 = VAR_12->sli4_hba.hdr_rq;
 struct lpfc_queue *VAR_17 = VAR_12->sli4_hba.dat_rq;
 struct lpfc_nvmet_tgtport *VAR_18;
 struct hbq_dmabuf *VAR_19;
 uint32_t VAR_20, VAR_21;
 unsigned long VAR_22;


 if (FUNC_10(!VAR_16) || FUNC_10(!VAR_17))
  return VAR_14;

 if (FUNC_1(VAR_8, VAR_13) == VAR_0)
  VAR_21 = FUNC_1(VAR_10, VAR_13);
 else
  VAR_21 = FUNC_1(VAR_9, VAR_13);
 if (VAR_21 != VAR_16->queue_id)
  goto out;

 VAR_20 = FUNC_1(VAR_11, VAR_13);
 switch (VAR_20) {
 case 129:
  FUNC_3(VAR_12, VAR_5, VAR_7,
    "2537 Receive Frame Truncated!!\n");

 case 128:
  FUNC_8(&VAR_12->hbalock, VAR_22);
  FUNC_5(VAR_16, VAR_17);
  VAR_19 = FUNC_6(&VAR_12->hbqs[0].hbq_buffer_list);
  if (!VAR_19) {
   VAR_16->RQ_no_buf_found++;
   FUNC_9(&VAR_12->hbalock, VAR_22);
   goto out;
  }
  VAR_16->RQ_rcv_buf++;
  VAR_16->RQ_buf_posted--;
  FUNC_7(&VAR_19->cq_event.cqe.rcqe_cmpl, VAR_13, sizeof(*VAR_13));

  VAR_15 = (struct fc_frame_header *)VAR_19->hbuf.virt;

  if (VAR_15->fh_r_ctl == VAR_2 ||
      VAR_15->fh_r_ctl == VAR_1) {
   FUNC_9(&VAR_12->hbalock, VAR_22);

   FUNC_4(VAR_12->pport, VAR_19);
   break;
  }


  FUNC_2(&VAR_19->cq_event.list,
         &VAR_12->sli4_hba.sp_queue_event);

  VAR_12->hba_flag |= VAR_4;
  FUNC_9(&VAR_12->hbalock, VAR_22);
  VAR_14 = 1;
  break;
 case 131:
  if (VAR_12->nvmet_support) {
   VAR_18 = VAR_12->targetport->private;
   FUNC_3(VAR_12, VAR_5, VAR_7 | VAR_6,
     "6402 RQE Error x%x, posted %d err_cnt "
     "%d: %x %x %x\n",
     VAR_20, VAR_16->RQ_buf_posted,
     VAR_16->RQ_no_posted_buf,
     FUNC_0(&VAR_18->rcv_fcp_cmd_in),
     FUNC_0(&VAR_18->rcv_fcp_cmd_out),
     FUNC_0(&VAR_18->xmt_fcp_release));
  }


 case 130:
  VAR_16->RQ_no_posted_buf++;

  FUNC_8(&VAR_12->hbalock, VAR_22);
  VAR_12->hba_flag |= VAR_3;
  FUNC_9(&VAR_12->hbalock, VAR_22);
  VAR_14 = 1;
  break;
 }
out:
 return VAR_14;
}
