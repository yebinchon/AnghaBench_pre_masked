
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_20__ {int fcp_prio_enabled; } ;
struct qla_hw_data {TYPE_5__ flags; TYPE_7__* fcp_prio_cfg; } ;
struct qla_fcp_prio_cfg {int dummy; } ;
struct TYPE_16__ {int* vendor_cmd; } ;
struct TYPE_17__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct TYPE_19__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_18__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_4__ request_payload; TYPE_3__ reply_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_21__ {struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
struct TYPE_22__ {int attributes; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;




 int FUNC_3 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (TYPE_7__*,int ,int) ;
 int FUNC_6 (int ,TYPE_6__*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_6__*,struct qla_fcp_prio_cfg*,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ,int ,TYPE_7__*,int) ;
 int FUNC_10 (int ,int ,TYPE_7__*,int) ;
 TYPE_6__* FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (TYPE_7__*) ;
 TYPE_7__* FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct bsg_job *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_4(VAR_7);
 struct fc_bsg_request *VAR_9 = VAR_7->request;
 struct fc_bsg_reply *VAR_10 = VAR_7->reply;
 scsi_qla_host_t *VAR_11 = FUNC_11(VAR_8);
 struct qla_hw_data *VAR_12 = VAR_11->hw;
 int VAR_13 = 0;
 uint32_t VAR_14;
 uint32_t VAR_15;

 if (!(FUNC_1(VAR_12) || FUNC_2(VAR_12) || FUNC_0(VAR_12))) {
  VAR_13 = -VAR_2;
  goto exit_fcp_prio_cfg;
 }


 VAR_15 = VAR_9->rqst_data.h_vendor.vendor_cmd[1];


 if (!VAR_12->fcp_prio_cfg && (VAR_15 != 128)) {
  VAR_13 = -VAR_2;
  goto exit_fcp_prio_cfg;
 }
 switch (VAR_15) {
 case 131:
  if (VAR_12->flags.fcp_prio_enabled) {
   VAR_12->flags.fcp_prio_enabled = 0;
   VAR_12->fcp_prio_cfg->attributes &=
    ~VAR_4;
   FUNC_8(VAR_11);
   VAR_10->result = VAR_1;
  } else {
   VAR_13 = -VAR_2;
   VAR_10->result = (VAR_0 << 16);
   goto exit_fcp_prio_cfg;
  }
  break;

 case 130:
  if (!VAR_12->flags.fcp_prio_enabled) {
   if (VAR_12->fcp_prio_cfg) {
    VAR_12->flags.fcp_prio_enabled = 1;
    VAR_12->fcp_prio_cfg->attributes |=
        VAR_4;
    FUNC_8(VAR_11);
    VAR_10->result = VAR_1;
   } else {
    VAR_13 = -VAR_2;
    VAR_10->result = (VAR_0 << 16);
    goto exit_fcp_prio_cfg;
   }
  }
  break;

 case 129:
  VAR_14 = VAR_7->reply_payload.payload_len;
  if (!VAR_14 || VAR_14 > VAR_5) {
   VAR_13 = -VAR_2;
   VAR_10->result = (VAR_0 << 16);
   goto exit_fcp_prio_cfg;
  }

  VAR_10->result = VAR_1;
  VAR_10->reply_payload_rcv_len =
   FUNC_9(
   VAR_7->reply_payload.sg_list,
   VAR_7->reply_payload.sg_cnt, VAR_12->fcp_prio_cfg,
   VAR_14);

  break;

 case 128:
  VAR_14 = VAR_7->request_payload.payload_len;
  if (!VAR_14 || VAR_14 > VAR_5) {
   VAR_10->result = (VAR_0 << 16);
   VAR_13 = -VAR_2;
   goto exit_fcp_prio_cfg;
  }

  if (!VAR_12->fcp_prio_cfg) {
   VAR_12->fcp_prio_cfg = FUNC_13(VAR_5);
   if (!VAR_12->fcp_prio_cfg) {
    FUNC_6(VAR_6, VAR_11, 0x7050,
        "Unable to allocate memory for fcp prio "
        "config data (%x).\n", VAR_5);
    VAR_10->result = (VAR_0 << 16);
    VAR_13 = -VAR_3;
    goto exit_fcp_prio_cfg;
   }
  }

  FUNC_5(VAR_12->fcp_prio_cfg, 0, VAR_5);
  FUNC_10(VAR_7->request_payload.sg_list,
  VAR_7->request_payload.sg_cnt, VAR_12->fcp_prio_cfg,
   VAR_5);



  if (!FUNC_7(VAR_11,
      (struct qla_fcp_prio_cfg *) VAR_12->fcp_prio_cfg, 1)) {
   VAR_10->result = (VAR_0 << 16);
   VAR_13 = -VAR_2;



   FUNC_12(VAR_12->fcp_prio_cfg);
   VAR_12->fcp_prio_cfg = ((void*)0);
   goto exit_fcp_prio_cfg;
  }

  VAR_12->flags.fcp_prio_enabled = 0;
  if (VAR_12->fcp_prio_cfg->attributes & VAR_4)
   VAR_12->flags.fcp_prio_enabled = 1;
  FUNC_8(VAR_11);
  VAR_10->result = VAR_1;
  break;
 default:
  VAR_13 = -VAR_2;
  break;
 }
exit_fcp_prio_cfg:
 if (!VAR_13)
  FUNC_3(VAR_7, VAR_10->result,
          VAR_10->reply_payload_rcv_len);
 return VAR_13;
}
