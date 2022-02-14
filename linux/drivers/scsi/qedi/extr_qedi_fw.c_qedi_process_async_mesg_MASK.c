
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int hi; int lo; } ;
struct iscsi_async_msg_hdr {int hdr_second_dword; int param3_rsrv; int param2_rsrv; int param1_rsrv; int async_vcode; int async_event; int stat_sn; int max_cmd_sn; int exp_cmd_sn; TYPE_5__ lun; int opcode; } ;
struct TYPE_7__ {struct iscsi_async_msg_hdr async_msg; } ;
struct TYPE_8__ {scalar_t__ cqe_type; TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {int cqe_unsolicited; TYPE_3__ cqe_common; } ;
typedef int u32 ;
typedef int u16 ;
struct scsi_lun {int dummy; } ;
struct qedi_ctx {int hba_lock; } ;
struct TYPE_9__ {int resp_hdr; } ;
struct qedi_conn {TYPE_4__ gen_pdu; TYPE_1__* cls_conn; } ;
struct iscsi_task {int dummy; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct iscsi_async {int flags; void* param3; void* param2; void* param1; int async_vcode; int async_event; void* statsn; void* max_cmdsn; void* exp_cmdsn; int lun; int opcode; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,char*,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct iscsi_async*,int ,int) ;
 int FUNC_5 (struct qedi_ctx*,int *,int,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct qedi_ctx *VAR_3,
        union iscsi_cqe *VAR_4,
        struct iscsi_task *VAR_5,
        struct qedi_conn *VAR_6,
        u16 VAR_7)
{
 struct iscsi_conn *VAR_8 = VAR_6->cls_conn->dd_data;
 struct iscsi_session *VAR_9 = VAR_8->session;
 struct iscsi_async_msg_hdr *VAR_10;
 struct iscsi_async *VAR_11;
 u32 VAR_12[2];
 u32 VAR_13, VAR_14;
 char VAR_15[VAR_2];
 unsigned long VAR_16;

 FUNC_6(&VAR_9->back_lock);

 VAR_10 = &VAR_4->cqe_common.iscsi_hdr.async_msg;
 VAR_13 = VAR_10->hdr_second_dword &
  VAR_0;
 VAR_14 = VAR_13 / VAR_2;

 if (VAR_4->cqe_common.cqe_type == VAR_1) {
  FUNC_7(&VAR_3->hba_lock, VAR_16);
  FUNC_5(VAR_3, &VAR_4->cqe_unsolicited,
       VAR_13, VAR_14, VAR_15);
  FUNC_9(&VAR_3->hba_lock, VAR_16);
 }

 VAR_11 = (struct iscsi_async *)&VAR_6->gen_pdu.resp_hdr;
 FUNC_4(VAR_11, 0, sizeof(struct iscsi_hdr));
 VAR_11->opcode = VAR_10->opcode;
 VAR_11->flags = 0x80;

 VAR_12[0] = FUNC_2(VAR_10->lun.lo);
 VAR_12[1] = FUNC_2(VAR_10->lun.hi);
 FUNC_3(&VAR_11->lun, VAR_12, sizeof(struct scsi_lun));
 VAR_11->exp_cmdsn = FUNC_2(VAR_10->exp_cmd_sn);
 VAR_11->max_cmdsn = FUNC_2(VAR_10->max_cmd_sn);
 VAR_11->statsn = FUNC_2(VAR_10->stat_sn);

 VAR_11->async_event = VAR_10->async_event;
 VAR_11->async_vcode = VAR_10->async_vcode;

 VAR_11->param1 = FUNC_1(VAR_10->param1_rsrv);
 VAR_11->param2 = FUNC_1(VAR_10->param2_rsrv);
 VAR_11->param3 = FUNC_1(VAR_10->param3_rsrv);

 FUNC_0(VAR_8, (struct iscsi_hdr *)VAR_11, VAR_15,
        VAR_13);

 FUNC_8(&VAR_9->back_lock);
}
