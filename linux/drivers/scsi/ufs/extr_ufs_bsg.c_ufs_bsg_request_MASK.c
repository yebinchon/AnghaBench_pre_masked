
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct uic_command {int dummy; } ;
struct ufs_hba {int dev; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_9__ {struct uic_command uc; TYPE_2__ qr; } ;
struct ufs_bsg_request {int msgcode; TYPE_4__ upiu_req; } ;
struct TYPE_10__ {struct uic_command uc; } ;
struct ufs_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; TYPE_5__ upiu_rsp; } ;
struct TYPE_8__ {int sg_cnt; int sg_list; } ;
struct bsg_job {unsigned int request_len; unsigned int reply_len; TYPE_3__ request_payload; TYPE_1__* dev; struct ufs_bsg_reply* reply; struct ufs_bsg_request* request; } ;
typedef enum query_opcode { ____Placeholder_query_opcode } query_opcode ;
struct TYPE_6__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct bsg_job*,int,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uic_command*,struct uic_command*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int) ;
 struct ufs_hba* FUNC_8 (int ) ;
 int FUNC_9 (struct ufs_hba*,struct bsg_job*,int **,int*,int) ;
 int FUNC_10 (struct ufs_hba*,unsigned int,unsigned int) ;
 int FUNC_11 (struct ufs_hba*,TYPE_4__*,TYPE_5__*,int,int *,int*,int) ;
 int FUNC_12 (struct ufs_hba*,struct uic_command*) ;

__attribute__((used)) static int FUNC_13(struct bsg_job *VAR_4)
{
 struct ufs_bsg_request *VAR_5 = VAR_4->request;
 struct ufs_bsg_reply *VAR_6 = VAR_4->reply;
 struct ufs_hba *VAR_7 = FUNC_8(FUNC_2(VAR_4->dev->parent));
 unsigned int VAR_8 = VAR_4->request_len;
 unsigned int VAR_9 = VAR_4->reply_len;
 struct uic_command VAR_10 = {};
 int VAR_11;
 uint8_t *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 enum query_opcode VAR_14 = VAR_2;
 int VAR_15;

 VAR_15 = FUNC_10(VAR_7, VAR_8, VAR_9);
 if (VAR_15)
  goto out;

 VAR_6->reply_payload_rcv_len = 0;

 FUNC_5(VAR_7->dev);

 VAR_11 = VAR_5->msgcode;
 switch (VAR_11) {
 case 130:
  VAR_14 = VAR_5->upiu_req.qr.opcode;
  VAR_15 = FUNC_9(VAR_7, VAR_4, &VAR_12,
      &VAR_13, VAR_14);
  if (VAR_15)
   goto out;


 case 131:
 case 129:
  VAR_15 = FUNC_11(VAR_7, &VAR_5->upiu_req,
            &VAR_6->upiu_rsp, VAR_11,
            VAR_12, &VAR_13, VAR_14);
  if (VAR_15)
   FUNC_1(VAR_7->dev,
    "exe raw upiu: error code %d\n", VAR_15);

  break;
 case 128:
  FUNC_4(&VAR_10, &VAR_5->upiu_req.uc, VAR_1);
  VAR_15 = FUNC_12(VAR_7, &VAR_10);
  if (VAR_15)
   FUNC_1(VAR_7->dev,
    "send uic cmd: error code %d\n", VAR_15);

  FUNC_4(&VAR_6->upiu_rsp.uc, &VAR_10, VAR_1);

  break;
 default:
  VAR_15 = -VAR_0;
  FUNC_1(VAR_7->dev, "unsupported msgcode 0x%x\n", VAR_11);

  break;
 }

 FUNC_6(VAR_7->dev);

 if (!VAR_12)
  goto out;

 if (VAR_14 == VAR_3 && VAR_13)
  VAR_6->reply_payload_rcv_len =
   FUNC_7(VAR_4->request_payload.sg_list,
         VAR_4->request_payload.sg_cnt,
         VAR_12, VAR_13);

 FUNC_3(VAR_12);

out:
 VAR_6->result = VAR_15;
 VAR_4->reply_len = sizeof(struct ufs_bsg_reply);

 if (VAR_15 == 0)
  FUNC_0(VAR_4, VAR_15, VAR_6->reply_payload_rcv_len);

 return VAR_15;
}
