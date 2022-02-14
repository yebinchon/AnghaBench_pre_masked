
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct sts_entry_24xx {int comp_status; } ;
struct TYPE_14__ {void* len; void* comp_status; void** fw_status; } ;
struct TYPE_13__ {scalar_t__ rsp; } ;
struct TYPE_15__ {TYPE_2__ els_plogi; TYPE_1__ ctarg; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct TYPE_17__ {int status; } ;
struct TYPE_18__ {TYPE_5__ ctels_reply; } ;
struct fc_bsg_reply {void* reply_payload_rcv_len; TYPE_6__ reply_data; } ;
struct els_sts_entry_24xx {int error_subcode_2; int error_subcode_1; int total_byte_count; } ;
struct ct_sns_rsp {int dummy; } ;
struct TYPE_19__ {void* payload_len; } ;
struct bsg_job {int reply_len; TYPE_7__ reply_payload; struct fc_bsg_reply* reply; } ;
struct TYPE_16__ {struct bsg_job* bsg_job; struct srb_iocb iocb_cmd; } ;
struct TYPE_20__ {int type; int (* done ) (TYPE_8__*,int) ;int handle; TYPE_4__ u; int name; int vha; } ;
typedef TYPE_8__ srb_t ;
typedef int scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
typedef int fw_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 void* FUNC_0 (int ) ;
 int FUNC_1 (struct fc_bsg_reply*,void**,int) ;
 int FUNC_2 (scalar_t__,int *,int,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__,int *,int,struct sts_entry_24xx*,int) ;
 int FUNC_4 (int ,int *,struct ct_sns_rsp*,int ) ;
 TYPE_8__* FUNC_5 (int *,char const*,struct req_que*,struct sts_entry_24xx*) ;
 int FUNC_6 (TYPE_8__*,int) ;
 int FUNC_7 (TYPE_8__*,int) ;
 int FUNC_8 (TYPE_8__*,int) ;

__attribute__((used)) static void
FUNC_9(scsi_qla_host_t *VAR_8, struct req_que *VAR_9,
    struct sts_entry_24xx *VAR_10, int VAR_11)
{
 const char VAR_12[] = "ELS_CT_IOCB";
 const char *VAR_13;
 srb_t *VAR_14;
 struct bsg_job *VAR_15;
 struct fc_bsg_reply *VAR_16;
 uint16_t VAR_17;
 uint32_t VAR_18[3];
 int VAR_19;
 struct srb_iocb *VAR_20;

 VAR_14 = FUNC_5(VAR_8, VAR_12, VAR_9, VAR_10);
 if (!VAR_14)
  return;

 VAR_13 = ((void*)0);
 switch (VAR_14->type) {
 case 129:
 case 130:
  VAR_13 = "els";
  break;
 case 132:
  VAR_13 = "ct pass-through";
  break;
 case 128:
  VAR_13 = "Driver ELS logo";
  if (VAR_11 != VAR_4) {
   FUNC_2(VAR_7, VAR_8, 0x5047,
       "Completing %s: (%p) type=%d.\n",
       VAR_13, VAR_14, VAR_14->type);
   VAR_14->done(VAR_14, 0);
   return;
  }
  break;
 case 131:



  VAR_19 = FUNC_4(VAR_14->vha, (ms_iocb_entry_t *)VAR_10,
   (struct ct_sns_rsp *)VAR_14->u.iocb_cmd.u.ctarg.rsp,
   VAR_14->name);
  VAR_14->done(VAR_14, VAR_19);
  return;
 default:
  FUNC_2(VAR_7, VAR_8, 0x503e,
      "Unrecognized SRB: (%p) type=%d.\n", VAR_14, VAR_14->type);
  return;
 }

 VAR_17 = VAR_18[0] = FUNC_0(VAR_10->comp_status);
 VAR_18[1] = FUNC_0(((struct els_sts_entry_24xx *)VAR_10)->error_subcode_1);
 VAR_18[2] = FUNC_0(((struct els_sts_entry_24xx *)VAR_10)->error_subcode_2);

 if (VAR_11 == VAR_4) {
  VAR_20 = &VAR_14->u.iocb_cmd;
  VAR_20->u.els_plogi.fw_status[0] = VAR_18[0];
  VAR_20->u.els_plogi.fw_status[1] = VAR_18[1];
  VAR_20->u.els_plogi.fw_status[2] = VAR_18[2];
  VAR_20->u.els_plogi.comp_status = VAR_18[0];
  if (VAR_17 == VAR_0) {
   VAR_19 = VAR_3 << 16;
  } else {
   if (VAR_17 == VAR_1) {
    VAR_19 = VAR_3 << 16;
    VAR_20->u.els_plogi.len =
    FUNC_0(((struct els_sts_entry_24xx *)
     VAR_10)->total_byte_count);
   } else {
    VAR_20->u.els_plogi.len = 0;
    VAR_19 = VAR_2 << 16;
   }
  }
  FUNC_2(VAR_7, VAR_8, 0x503f,
      "ELS IOCB Done -%s error hdl=%x comp_status=0x%x error subcode 1=0x%x error subcode 2=0x%x total_byte=0x%x\n",
      VAR_13, VAR_14->handle, VAR_17, VAR_18[1], VAR_18[2],
      FUNC_0(((struct els_sts_entry_24xx *)
   VAR_10)->total_byte_count));
  goto els_ct_done;
 }




 VAR_15 = VAR_14->u.bsg_job;
 VAR_16 = VAR_15->reply;
 VAR_16->reply_data.ctels_reply.status = VAR_5;
 VAR_15->reply_len = sizeof(struct fc_bsg_reply) + sizeof(VAR_18);

 if (VAR_17 != VAR_0) {
  if (VAR_17 == VAR_1) {
   VAR_19 = VAR_3 << 16;
   VAR_16->reply_payload_rcv_len =
       FUNC_0(((struct els_sts_entry_24xx *)VAR_10)->total_byte_count);

   FUNC_2(VAR_7, VAR_8, 0x503f,
       "ELS-CT pass-through-%s error hdl=%x comp_status-status=0x%x "
       "error subcode 1=0x%x error subcode 2=0x%x total_byte = 0x%x.\n",
       VAR_13, VAR_14->handle, VAR_17, VAR_18[1], VAR_18[2],
       FUNC_0(((struct els_sts_entry_24xx *)
    VAR_10)->total_byte_count));
  } else {
   FUNC_2(VAR_7, VAR_8, 0x5040,
       "ELS-CT pass-through-%s error hdl=%x comp_status-status=0x%x "
       "error subcode 1=0x%x error subcode 2=0x%x.\n",
       VAR_13, VAR_14->handle, VAR_17,
       FUNC_0(((struct els_sts_entry_24xx *)
    VAR_10)->error_subcode_1),
       FUNC_0(((struct els_sts_entry_24xx *)
        VAR_10)->error_subcode_2));
   VAR_19 = VAR_2 << 16;
   VAR_16->reply_payload_rcv_len = 0;
  }
  FUNC_1(VAR_15->reply + sizeof(struct fc_bsg_reply),
         VAR_18, sizeof(VAR_18));
  FUNC_3(VAR_7 + VAR_6, VAR_8, 0x5056,
      VAR_10, sizeof(*VAR_10));
 }
 else {
  VAR_19 = VAR_3 << 16;
  VAR_16->reply_payload_rcv_len = VAR_15->reply_payload.payload_len;
  VAR_15->reply_len = 0;
 }
els_ct_done:

 VAR_14->done(VAR_14, VAR_19);
}
