
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_reject_hdr {int hdr_second_dword; int max_cmd_sn; int exp_cmd_sn; int stat_sn; int hdr_flags; int hdr_reason; int opcode; } ;
struct TYPE_6__ {struct iscsi_reject_hdr reject; } ;
struct TYPE_7__ {scalar_t__ cqe_type; TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {int cqe_unsolicited; TYPE_3__ cqe_common; } ;
typedef int uint16_t ;
typedef int u32 ;
struct qedi_ctx {int hba_lock; } ;
struct TYPE_8__ {int resp_hdr; } ;
struct qedi_conn {TYPE_4__ gen_pdu; TYPE_1__* cls_conn; } ;
struct iscsi_task {int dummy; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_reject {void* ffffffff; void* statsn; void* exp_cmdsn; void* max_cmdsn; int dlength; int flags; int reason; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int data; struct iscsi_session* session; } ;
struct TYPE_5__ {struct iscsi_conn* dd_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct iscsi_reject*,int ,int) ;
 int FUNC_4 (struct qedi_ctx*,int *,int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct qedi_ctx *VAR_3,
         union iscsi_cqe *VAR_4,
         struct iscsi_task *VAR_5,
         struct qedi_conn *VAR_6,
         uint16_t VAR_7)
{
 struct iscsi_conn *VAR_8 = VAR_6->cls_conn->dd_data;
 struct iscsi_session *VAR_9 = VAR_8->session;
 struct iscsi_reject_hdr *VAR_10;
 struct iscsi_reject *VAR_11;
 u32 VAR_12, VAR_13;
 unsigned long VAR_14;

 FUNC_5(&VAR_9->back_lock);
 VAR_10 = &VAR_4->cqe_common.iscsi_hdr.reject;
 VAR_12 = VAR_10->hdr_second_dword &
    VAR_1;
 VAR_13 = VAR_12 / VAR_2;

 if (VAR_4->cqe_common.cqe_type == VAR_0) {
  FUNC_6(&VAR_3->hba_lock, VAR_14);
  FUNC_4(VAR_3, &VAR_4->cqe_unsolicited,
       VAR_12, VAR_13, VAR_8->data);
  FUNC_8(&VAR_3->hba_lock, VAR_14);
 }
 VAR_11 = (struct iscsi_reject *)&VAR_6->gen_pdu.resp_hdr;
 FUNC_3(VAR_11, 0, sizeof(struct iscsi_hdr));
 VAR_11->opcode = VAR_10->opcode;
 VAR_11->reason = VAR_10->hdr_reason;
 VAR_11->flags = VAR_10->hdr_flags;
 FUNC_2(VAR_11->dlength, (VAR_10->hdr_second_dword &
         VAR_1));
 VAR_11->max_cmdsn = FUNC_1(VAR_10->max_cmd_sn);
 VAR_11->exp_cmdsn = FUNC_1(VAR_10->exp_cmd_sn);
 VAR_11->statsn = FUNC_1(VAR_10->stat_sn);
 VAR_11->ffffffff = FUNC_1(0xffffffff);

 FUNC_0(VAR_8, (struct iscsi_hdr *)VAR_11,
        VAR_8->data, VAR_12);
 FUNC_7(&VAR_9->back_lock);
}
