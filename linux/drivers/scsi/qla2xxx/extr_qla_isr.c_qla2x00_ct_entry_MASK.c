
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_22__ {int rsp_info_len; int comp_status; } ;
typedef TYPE_8__ sts_entry_t ;
struct req_que {int dummy; } ;
struct TYPE_15__ {int status; } ;
struct TYPE_16__ {TYPE_1__ ctels_reply; } ;
struct fc_bsg_reply {void* reply_payload_rcv_len; TYPE_2__ reply_data; } ;
struct ct_sns_rsp {int dummy; } ;
struct TYPE_17__ {void* payload_len; } ;
struct bsg_job {int reply_len; TYPE_3__ reply_payload; struct fc_bsg_reply* reply; } ;
struct TYPE_18__ {scalar_t__ rsp; } ;
struct TYPE_19__ {TYPE_4__ ctarg; } ;
struct TYPE_20__ {TYPE_5__ u; } ;
struct TYPE_21__ {TYPE_6__ iocb_cmd; struct bsg_job* bsg_job; } ;
struct TYPE_23__ {int type; int (* done ) (TYPE_9__*,int) ;int name; TYPE_7__ u; } ;
typedef TYPE_9__ srb_t ;
typedef int scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int *,int,TYPE_8__*,int) ;
 int FUNC_2 (int ,int *,int,char*,char const*,void*,...) ;
 int VAR_7 ;
 int FUNC_3 (int *,int *,struct ct_sns_rsp*,int ) ;
 TYPE_9__* FUNC_4 (int *,char const*,struct req_que*,TYPE_8__*) ;
 int FUNC_5 (TYPE_9__*,int) ;

__attribute__((used)) static void
FUNC_6(scsi_qla_host_t *VAR_8, struct req_que *VAR_9,
    sts_entry_t *VAR_10, int VAR_11)
{
 const char VAR_12[] = "CT_IOCB";
 const char *VAR_13;
 srb_t *VAR_14;
 struct bsg_job *VAR_15;
 struct fc_bsg_reply *VAR_16;
 uint16_t VAR_17;
 int VAR_18 = 0;

 VAR_14 = FUNC_4(VAR_8, VAR_12, VAR_9, VAR_10);
 if (!VAR_14)
  return;

 switch (VAR_14->type) {
 case 129:
     VAR_15 = VAR_14->u.bsg_job;
     VAR_16 = VAR_15->reply;

     VAR_13 = "ct pass-through";

     VAR_17 = FUNC_0(VAR_10->comp_status);





     VAR_16->reply_data.ctels_reply.status = VAR_4;
     VAR_15->reply_len = sizeof(struct fc_bsg_reply);

     if (VAR_17 != VAR_0) {
      if (VAR_17 == VAR_1) {
       VAR_18 = VAR_3 << 16;
       VAR_16->reply_payload_rcv_len =
    FUNC_0(VAR_10->rsp_info_len);

       FUNC_2(VAR_7, VAR_8, 0x5048,
    "CT pass-through-%s error comp_status=0x%x total_byte=0x%x.\n",
    VAR_13, VAR_17,
    VAR_16->reply_payload_rcv_len);
      } else {
       FUNC_2(VAR_7, VAR_8, 0x5049,
    "CT pass-through-%s error comp_status=0x%x.\n",
    VAR_13, VAR_17);
       VAR_18 = VAR_2 << 16;
       VAR_16->reply_payload_rcv_len = 0;
      }
      FUNC_1(VAR_5 + VAR_6, VAR_8, 0x5035,
   VAR_10, sizeof(*VAR_10));
     } else {
      VAR_18 = VAR_3 << 16;
      VAR_16->reply_payload_rcv_len =
   VAR_15->reply_payload.payload_len;
      VAR_15->reply_len = 0;
     }
     break;
 case 128:




      VAR_18 = FUNC_3(VAR_8, (ms_iocb_entry_t *)VAR_10,
   (struct ct_sns_rsp *)VAR_14->u.iocb_cmd.u.ctarg.rsp,
   VAR_14->name);
      break;
 }

 VAR_14->done(VAR_14, VAR_18);
}
