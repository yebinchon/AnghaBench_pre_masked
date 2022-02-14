
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ioctl_iocb_entry_fx00 {int result; int reply_payload_rcv_len; struct qla_mt_iocb_rsp_fx00* reserved_2; int seq_no; int status; int residuallen; int dataword_r_extra; int adapid; int dataword_r; int fw_iotcl_flags; int comp_func_num; int reserved_0; } ;
typedef struct ioctl_iocb_entry_fx00 uint8_t ;
struct TYPE_8__ {int flags; int req_data; int result; int fw_flags; int seq_number; } ;
struct TYPE_9__ {TYPE_1__ fxiocb; } ;
struct srb_iocb {TYPE_2__ u; } ;
struct req_que {int dummy; } ;
struct qla_mt_iocb_rsp_fx00 {struct ioctl_iocb_entry_fx00* reserved_3; int seq_number; int status; int res_count; int reserved_2; int adapid; int ioctl_data; int ioctl_flags; int func_type; int reserved_1; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; struct qla_mt_iocb_rsp_fx00* reserved_2; int seq_no; int status; int residuallen; int dataword_r_extra; int adapid; int dataword_r; int fw_iotcl_flags; int comp_func_num; int reserved_0; } ;
struct TYPE_11__ {int payload_len; } ;
struct bsg_job {int reply_len; TYPE_4__ reply_payload; struct ioctl_iocb_entry_fx00* reply; } ;
struct TYPE_10__ {struct bsg_job* bsg_job; struct srb_iocb iocb_cmd; } ;
struct TYPE_12__ {scalar_t__ type; int (* done ) (TYPE_5__*,int) ;int vha; TYPE_3__ u; } ;
typedef TYPE_5__ srb_t ;
typedef int scsi_qla_host_t ;
typedef int fstatus ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ioctl_iocb_entry_fx00*,struct qla_mt_iocb_rsp_fx00*,int) ;
 int FUNC_1 (struct qla_mt_iocb_rsp_fx00*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int ,int,struct ioctl_iocb_entry_fx00*,int) ;
 TYPE_5__* FUNC_3 (int *,char const*,struct req_que*,struct ioctl_iocb_entry_fx00*) ;
 int FUNC_4 (TYPE_5__*,int) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_5, struct req_que *VAR_6,
    struct ioctl_iocb_entry_fx00 *VAR_7)
{
 const char VAR_8[] = "IOSB_IOCB";
 srb_t *VAR_9;
 struct bsg_job *VAR_10;
 struct fc_bsg_reply *VAR_11;
 struct srb_iocb *VAR_12;
 int VAR_13 = 0;
 struct qla_mt_iocb_rsp_fx00 VAR_14;
 uint8_t *VAR_15;

 VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_6, VAR_7);
 if (!VAR_9)
  return;

 if (VAR_9->type == VAR_2) {
  VAR_12 = &VAR_9->u.iocb_cmd;
  VAR_12->u.fxiocb.seq_number = VAR_7->seq_no;
  VAR_12->u.fxiocb.fw_flags = VAR_7->fw_iotcl_flags;
  VAR_12->u.fxiocb.result = VAR_7->status;
  if (VAR_12->u.fxiocb.flags & VAR_1)
   VAR_12->u.fxiocb.req_data =
       VAR_7->dataword_r;
 } else {
  VAR_10 = VAR_9->u.bsg_job;
  VAR_11 = VAR_10->reply;

  FUNC_1(&VAR_14, 0, sizeof(struct qla_mt_iocb_rsp_fx00));

  VAR_14.reserved_1 = VAR_7->reserved_0;
  VAR_14.func_type = VAR_7->comp_func_num;
  VAR_14.ioctl_flags = VAR_7->fw_iotcl_flags;
  VAR_14.ioctl_data = VAR_7->dataword_r;
  VAR_14.adapid = VAR_7->adapid;
  VAR_14.reserved_2 = VAR_7->dataword_r_extra;
  VAR_14.res_count = VAR_7->residuallen;
  VAR_14.status = VAR_7->status;
  VAR_14.seq_number = VAR_7->seq_no;
  FUNC_0(VAR_14.reserved_3,
      VAR_7->reserved_2, 20 * sizeof(uint8_t));

  VAR_15 = VAR_10->reply + sizeof(struct fc_bsg_reply);

  FUNC_0(VAR_15, &VAR_14, sizeof(VAR_14));
  VAR_10->reply_len = sizeof(struct fc_bsg_reply) +
   sizeof(struct qla_mt_iocb_rsp_fx00) + sizeof(uint8_t);

  FUNC_2(VAR_3 + VAR_4,
      VAR_9->vha, 0x5080, VAR_7, sizeof(*VAR_7));

  FUNC_2(VAR_3 + VAR_4,
      VAR_9->vha, 0x5074,
      VAR_15, sizeof(VAR_14));

  VAR_13 = VAR_11->result = VAR_0 << 16;
  VAR_11->reply_payload_rcv_len =
      VAR_10->reply_payload.payload_len;
 }
 VAR_9->done(VAR_9, VAR_13);
}
