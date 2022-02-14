
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct qla_hw_data {int dummy; } ;
struct qla_bbcr_data {scalar_t__ status; int negotiated_bbscn; int configured_bbscn; void* state; int offline_reason_code; int mbx1; } ;
struct TYPE_10__ {int * vendor_rsp; } ;
struct TYPE_11__ {TYPE_3__ vendor_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_4__ reply_data; } ;
struct TYPE_9__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_2__ reply_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {scalar_t__ bbcr_enable; } ;
struct TYPE_12__ {int bbcr; TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
typedef int bbcr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bsg_job*,int,int) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (struct qla_bbcr_data*,int ,int) ;
 int FUNC_5 (TYPE_5__*,int *,int*,int*,int*,int *,int *) ;
 int FUNC_6 (int ,int ,struct qla_bbcr_data*,int) ;
 TYPE_5__* FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_8(struct bsg_job *VAR_10)
{
 struct fc_bsg_reply *VAR_11 = VAR_10->reply;
 struct Scsi_Host *VAR_12 = FUNC_3(VAR_10);
 scsi_qla_host_t *VAR_13 = FUNC_7(VAR_12);
 struct qla_hw_data *VAR_14 = VAR_13->hw;
 struct qla_bbcr_data VAR_15;
 uint16_t VAR_16, VAR_17, VAR_18;
 uint8_t VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23;

 if (!FUNC_0(VAR_14) && !FUNC_1(VAR_14))
  return -VAR_1;

 FUNC_4(&VAR_15, 0, sizeof(VAR_15));

 if (VAR_13->flags.bbcr_enable)
  VAR_15.status = VAR_7;
 else
  VAR_15.status = VAR_6;

 if (VAR_15.status == VAR_7) {
  VAR_23 = FUNC_5(VAR_13, &VAR_16, &VAR_21,
   &VAR_20, &VAR_19, &VAR_17, &VAR_18);
  if (VAR_23 != VAR_9) {
   VAR_15.status = VAR_8;
   VAR_15.state = VAR_4;
   VAR_15.mbx1 = VAR_16;
   goto done;
  }

  VAR_22 = (VAR_13->bbcr >> 12) & 0x1;

  if (VAR_22) {
   VAR_15.state = VAR_4;
   VAR_15.offline_reason_code = VAR_3;
  } else {
   VAR_15.state = VAR_5;
   VAR_15.negotiated_bbscn = (VAR_13->bbcr >> 8) & 0xf;
  }

  VAR_15.configured_bbscn = VAR_13->bbcr & 0xf;
 }

done:
 FUNC_6(VAR_10->reply_payload.sg_list,
  VAR_10->reply_payload.sg_cnt, &VAR_15, sizeof(VAR_15));
 VAR_11->reply_payload_rcv_len = sizeof(VAR_15);

 VAR_11->reply_data.vendor_reply.vendor_rsp[0] = VAR_2;

 VAR_10->reply_len = sizeof(struct fc_bsg_reply);
 VAR_11->result = VAR_0 << 16;
 FUNC_2(VAR_10, VAR_11->result,
         VAR_11->reply_payload_rcv_len);
 return 0;
}
