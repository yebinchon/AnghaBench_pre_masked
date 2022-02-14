
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct qla_dport_diag {int options; int buf; } ;
struct TYPE_11__ {int * vendor_rsp; } ;
struct TYPE_12__ {TYPE_3__ vendor_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_4__ reply_data; } ;
struct TYPE_10__ {int sg_cnt; int sg_list; } ;
struct TYPE_9__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_2__ reply_payload; TYPE_1__ request_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_13__ {int hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct bsg_job*,int,int) ;
 struct Scsi_Host* FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (struct qla_dport_diag*) ;
 struct qla_dport_diag* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,TYPE_5__*,int,char*) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_5__*,int ,int,int ) ;
 int FUNC_9 (int ,int ,struct qla_dport_diag*,int) ;
 int FUNC_10 (int ,int ,struct qla_dport_diag*,int) ;
 TYPE_5__* FUNC_11 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_12(struct bsg_job *VAR_8)
{
 struct fc_bsg_reply *VAR_9 = VAR_8->reply;
 struct Scsi_Host *VAR_10 = FUNC_4(VAR_8);
 scsi_qla_host_t *VAR_11 = FUNC_11(VAR_10);
 int VAR_12;
 struct qla_dport_diag *VAR_13;

 if (!FUNC_2(VAR_11->hw) && !FUNC_0(VAR_11->hw) &&
     !FUNC_1(VAR_11->hw))
  return -VAR_2;

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_5);
 if (!VAR_13) {
  FUNC_7(VAR_7, VAR_11, 0x70db,
      "Failed to allocate memory for dport.\n");
  return -VAR_1;
 }

 FUNC_10(VAR_8->request_payload.sg_list,
     VAR_8->request_payload.sg_cnt, VAR_13, sizeof(*VAR_13));

 VAR_12 = FUNC_8(
     VAR_11, VAR_13->buf, sizeof(VAR_13->buf), VAR_13->options);
 if (VAR_12 == VAR_6) {
  FUNC_9(VAR_8->reply_payload.sg_list,
      VAR_8->reply_payload.sg_cnt, VAR_13, sizeof(*VAR_13));
 }

 VAR_9->reply_payload_rcv_len = sizeof(*VAR_13);
 VAR_9->reply_data.vendor_reply.vendor_rsp[0] =
     VAR_12 ? VAR_3 : VAR_4;

 VAR_8->reply_len = sizeof(*VAR_9);
 VAR_9->result = VAR_0 << 16;
 FUNC_3(VAR_8, VAR_9->result,
         VAR_9->reply_payload_rcv_len);

 FUNC_5(VAR_13);

 return 0;
}
