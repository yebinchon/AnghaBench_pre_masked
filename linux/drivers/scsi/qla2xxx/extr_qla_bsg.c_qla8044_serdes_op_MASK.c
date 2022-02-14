
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_serdes_reg_ex {int cmd; int val; int addr; } ;
struct TYPE_7__ {int * vendor_rsp; } ;
struct TYPE_8__ {TYPE_3__ vendor_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_4__ reply_data; } ;
struct TYPE_6__ {int sg_cnt; int sg_list; } ;
struct TYPE_5__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_2__ reply_payload; TYPE_1__ request_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
typedef int sr ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct bsg_job*,int,int) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct qla_serdes_reg_ex*,int ,int) ;
 int FUNC_3 (int ,int *,int,char*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ,struct qla_serdes_reg_ex*,int) ;
 int FUNC_7 (int ,int ,struct qla_serdes_reg_ex*,int) ;
 int * FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_9(struct bsg_job *VAR_4)
{
 struct fc_bsg_reply *VAR_5 = VAR_4->reply;
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_4);
 scsi_qla_host_t *VAR_7 = FUNC_8(VAR_6);
 int VAR_8 = 0;
 struct qla_serdes_reg_ex VAR_9;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));

 FUNC_7(VAR_4->request_payload.sg_list,
     VAR_4->request_payload.sg_cnt, &VAR_9, sizeof(VAR_9));

 switch (VAR_9.cmd) {
 case 128:
  VAR_8 = FUNC_5(VAR_7, VAR_9.addr, VAR_9.val);
  VAR_5->reply_payload_rcv_len = 0;
  break;
 case 129:
  VAR_8 = FUNC_4(VAR_7, VAR_9.addr, &VAR_9.val);
  FUNC_6(VAR_4->reply_payload.sg_list,
      VAR_4->reply_payload.sg_cnt, &VAR_9, sizeof(VAR_9));
  VAR_5->reply_payload_rcv_len = sizeof(VAR_9);
  break;
 default:
  FUNC_3(VAR_3, VAR_7, 0x7020,
      "Unknown serdes cmd %x.\n", VAR_9.cmd);
  VAR_8 = -VAR_1;
  break;
 }

 VAR_5->reply_data.vendor_reply.vendor_rsp[0] =
     VAR_8 ? VAR_2 : 0;

 VAR_4->reply_len = sizeof(struct fc_bsg_reply);
 VAR_5->result = VAR_0 << 16;
 FUNC_0(VAR_4, VAR_5->result,
         VAR_5->reply_payload_rcv_len);
 return 0;
}
