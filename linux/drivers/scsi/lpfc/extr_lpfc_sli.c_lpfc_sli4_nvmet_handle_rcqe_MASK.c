
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {scalar_t__ virt; } ;
struct rqb_dmabuf {TYPE_4__ hbuf; scalar_t__ bytes_recv; } ;
struct lpfc_rcqe {int dummy; } ;
struct lpfc_queue {size_t queue_id; int q_flag; int RQ_no_posted_buf; int RQ_buf_posted; int isr_timestamp; int RQ_rcv_buf; int RQ_no_buf_found; } ;
struct lpfc_nvmet_tgtport {int xmt_fcp_release; int rcv_fcp_cmd_out; int rcv_fcp_cmd_in; } ;
struct TYPE_6__ {struct lpfc_queue** nvmet_mrq_data; struct lpfc_queue** nvmet_mrq_hdr; TYPE_1__** nvmet_cqset; } ;
struct lpfc_hba {scalar_t__ nvmet_support; TYPE_3__* targetport; int hbalock; TYPE_2__ sli4_hba; } ;
struct fc_frame_header {int* fh_f_ctl; int fh_type; int fh_seq_cnt; } ;
struct TYPE_7__ {struct lpfc_nvmet_tgtport* private; } ;
struct TYPE_5__ {size_t queue_id; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct lpfc_rcqe*) ;
 int VAR_9 ;
 int FUNC_2 (struct lpfc_hba*,size_t,struct rqb_dmabuf*,int ,int) ;
 int FUNC_3 (struct lpfc_hba*,int ,int,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_5 (struct lpfc_queue*,struct lpfc_queue*) ;
 struct rqb_dmabuf* FUNC_6 (struct lpfc_hba*,struct lpfc_queue*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool
FUNC_10(struct lpfc_hba *VAR_14, struct lpfc_queue *VAR_15,
       struct lpfc_rcqe *VAR_16)
{
 bool VAR_17 = 0;
 struct lpfc_queue *VAR_18;
 struct lpfc_queue *VAR_19;
 struct rqb_dmabuf *VAR_20;
 struct fc_frame_header *VAR_21;
 struct lpfc_nvmet_tgtport *VAR_22;
 uint32_t VAR_23, VAR_24;
 unsigned long VAR_25;
 uint32_t VAR_26, VAR_27;

 if ((VAR_14->nvmet_support == 0) ||
     (VAR_14->sli4_hba.nvmet_cqset == ((void*)0)))
  return VAR_17;

 VAR_27 = VAR_15->queue_id - VAR_14->sli4_hba.nvmet_cqset[0]->queue_id;
 VAR_18 = VAR_14->sli4_hba.nvmet_mrq_hdr[VAR_27];
 VAR_19 = VAR_14->sli4_hba.nvmet_mrq_data[VAR_27];


 if (FUNC_9(!VAR_18) || FUNC_9(!VAR_19))
  return VAR_17;

 if (FUNC_1(VAR_9, VAR_16) == VAR_0)
  VAR_24 = FUNC_1(VAR_12, VAR_16);
 else
  VAR_24 = FUNC_1(VAR_11, VAR_16);

 if ((VAR_14->nvmet_support == 0) ||
     (VAR_24 != VAR_18->queue_id))
  return VAR_17;

 VAR_23 = FUNC_1(VAR_13, VAR_16);
 switch (VAR_23) {
 case 129:
  FUNC_3(VAR_14, VAR_6, VAR_8,
    "6126 Receive Frame Truncated!!\n");

 case 128:
  FUNC_7(&VAR_14->hbalock, VAR_25);
  FUNC_5(VAR_18, VAR_19);
  VAR_20 = FUNC_6(VAR_14, VAR_18);
  if (!VAR_20) {
   VAR_18->RQ_no_buf_found++;
   FUNC_8(&VAR_14->hbalock, VAR_25);
   goto out;
  }
  FUNC_8(&VAR_14->hbalock, VAR_25);
  VAR_18->RQ_rcv_buf++;
  VAR_18->RQ_buf_posted--;
  VAR_21 = (struct fc_frame_header *)VAR_20->hbuf.virt;


  VAR_26 = (VAR_21->fh_f_ctl[0] << 16 |
  VAR_21->fh_f_ctl[1] << 8 |
  VAR_21->fh_f_ctl[2]);
  if (((VAR_26 &
      (VAR_2 | VAR_1 | VAR_3)) !=
      (VAR_2 | VAR_1 | VAR_3)) ||
      (VAR_21->fh_seq_cnt != 0))
   goto drop;

  if (VAR_21->fh_type == VAR_4) {
   VAR_20->bytes_recv = FUNC_1(VAR_10, VAR_16);
   FUNC_2(
    VAR_14, VAR_27, VAR_20, VAR_15->isr_timestamp,
    VAR_15->q_flag & VAR_5);
   return 0;
  }
drop:
  FUNC_4(VAR_14, &VAR_20->hbuf);
  break;
 case 131:
  if (VAR_14->nvmet_support) {
   VAR_22 = VAR_14->targetport->private;
   FUNC_3(VAR_14, VAR_6, VAR_8 | VAR_7,
     "6401 RQE Error x%x, posted %d err_cnt "
     "%d: %x %x %x\n",
     VAR_23, VAR_18->RQ_buf_posted,
     VAR_18->RQ_no_posted_buf,
     FUNC_0(&VAR_22->rcv_fcp_cmd_in),
     FUNC_0(&VAR_22->rcv_fcp_cmd_out),
     FUNC_0(&VAR_22->xmt_fcp_release));
  }


 case 130:
  VAR_18->RQ_no_posted_buf++;

  break;
 }
out:
 return VAR_17;
}
