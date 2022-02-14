
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct se_cmd {int se_cmd_flags; int * t_task_cdb; int tag; int residual_count; } ;
struct qla_tgt_prm {int seg_cnt; int req_cnt; int add_status_pkt; int rq_result; int * sense_buffer; int residual; scalar_t__ tot_dsds; scalar_t__ prot_seg_cnt; int * prot_sg; int * sg; int sense_buffer_len; int * pkt; int tgt; struct qla_tgt_cmd* cmd; } ;
struct qla_tgt_cmd {TYPE_1__* vha; int bufflen; int * sense_buffer; int tgt; struct qla_qpair* qpair; struct se_cmd se_cmd; } ;
struct qla_qpair {int dummy; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__,struct qla_qpair*,int,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (struct qla_tgt_cmd*) ;
 scalar_t__ FUNC_4 (struct qla_tgt_prm*) ;

__attribute__((used)) static int FUNC_5(struct qla_tgt_cmd *VAR_10,
 struct qla_tgt_prm *VAR_11, int VAR_12, uint8_t VAR_13,
 uint32_t *VAR_14)
{
 struct se_cmd *VAR_15 = &VAR_10->se_cmd;
 struct qla_qpair *VAR_16 = VAR_10->qpair;

 VAR_11->cmd = VAR_10;
 VAR_11->tgt = VAR_10->tgt;
 VAR_11->pkt = ((void*)0);
 VAR_11->rq_result = VAR_13;
 VAR_11->sense_buffer = &VAR_10->sense_buffer[0];
 VAR_11->sense_buffer_len = VAR_7;
 VAR_11->sg = ((void*)0);
 VAR_11->seg_cnt = -1;
 VAR_11->req_cnt = 1;
 VAR_11->residual = 0;
 VAR_11->add_status_pkt = 0;
 VAR_11->prot_sg = ((void*)0);
 VAR_11->prot_seg_cnt = 0;
 VAR_11->tot_dsds = 0;

 if ((VAR_12 & VAR_1) && FUNC_3(VAR_10)) {
  if (FUNC_4(VAR_11) != 0)
   return -VAR_0;
 }

 *VAR_14 = VAR_11->req_cnt;

 if (VAR_15->se_cmd_flags & VAR_4) {
  VAR_11->residual = VAR_15->residual_count;
  FUNC_2(VAR_8 + VAR_9, VAR_16, 0x305c,
      "Residual underflow: %d (tag %lld, op %x, bufflen %d, rq_result %x)\n",
         VAR_11->residual, VAR_15->tag,
         VAR_15->t_task_cdb ? VAR_15->t_task_cdb[0] : 0,
         VAR_10->bufflen, VAR_11->rq_result);
  VAR_11->rq_result |= VAR_6;
 } else if (VAR_15->se_cmd_flags & VAR_3) {
  VAR_11->residual = VAR_15->residual_count;
  FUNC_2(VAR_8, VAR_16, 0x305d,
      "Residual overflow: %d (tag %lld, op %x, bufflen %d, rq_result %x)\n",
         VAR_11->residual, VAR_15->tag, VAR_15->t_task_cdb ?
         VAR_15->t_task_cdb[0] : 0, VAR_10->bufflen, VAR_11->rq_result);
  VAR_11->rq_result |= VAR_5;
 }

 if (VAR_12 & VAR_2) {




  if (FUNC_3(VAR_10)) {
   if (FUNC_1(VAR_11->sense_buffer) ||
       (FUNC_0(VAR_10->vha->hw) &&
       (VAR_11->rq_result != 0))) {
    VAR_11->add_status_pkt = 1;
    (*VAR_14)++;
   }
  }
 }

 return 0;
}
