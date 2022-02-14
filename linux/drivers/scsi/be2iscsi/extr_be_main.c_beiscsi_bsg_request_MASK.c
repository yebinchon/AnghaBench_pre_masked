
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iscsi_bsg_request {int msgcode; } ;
struct iscsi_bsg_reply {unsigned short result; int reply_payload_rcv_len; } ;
struct TYPE_9__ {int sg_cnt; int sg_list; } ;
struct TYPE_7__ {int payload_len; } ;
struct bsg_job {TYPE_3__ reply_payload; TYPE_1__ request_payload; struct iscsi_bsg_reply* reply; struct iscsi_bsg_request* request; } ;
struct TYPE_11__ {unsigned short* mcc_tag_status; TYPE_4__* pdev; TYPE_2__* ptag_state; int * mcc_wait; } ;
struct beiscsi_hba {int state; TYPE_5__ ctrl; } ;
struct be_dma_mem {int dma; int * va; int size; } ;
struct be_cmd_resp_hdr {int response_length; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int tag_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_2 (struct bsg_job*,unsigned short,int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int *,int ,int *,int ) ;
 int FUNC_6 (TYPE_5__*,unsigned int) ;
 struct beiscsi_hba* FUNC_7 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_8 (struct bsg_job*) ;
 unsigned int FUNC_9 (TYPE_5__*,struct beiscsi_hba*,struct bsg_job*,struct be_dma_mem*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *,int ) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,unsigned short,int ) ;

__attribute__((used)) static int FUNC_14(struct bsg_job *VAR_15)
{
 struct Scsi_Host *VAR_16;
 struct beiscsi_hba *VAR_17;
 struct iscsi_bsg_request *VAR_18 = VAR_15->request;
 int VAR_19 = -VAR_7;
 unsigned int VAR_20;
 struct be_dma_mem VAR_21;
 struct be_cmd_resp_hdr *VAR_22;
 struct iscsi_bsg_reply *VAR_23 = VAR_15->reply;
 unsigned short VAR_24, VAR_25;

 VAR_16 = FUNC_8(VAR_15);
 VAR_17 = FUNC_7(VAR_16);

 if (!FUNC_0(VAR_17)) {
  FUNC_1(VAR_17, VAR_13, VAR_2,
       "BM_%d : HBA in error 0x%lx\n", VAR_17->state);
  return -VAR_10;
 }

 switch (VAR_18->msgcode) {
 case 128:
  VAR_21.va = FUNC_4(&VAR_17->ctrl.pdev->dev,
     VAR_15->request_payload.payload_len,
     &VAR_21.dma, VAR_11);
  if (VAR_21.va == ((void*)0)) {
   FUNC_1(VAR_17, VAR_12, VAR_2,
        "BM_%d : Failed to allocate memory for "
        "beiscsi_bsg_request\n");
   return -VAR_9;
  }
  VAR_20 = FUNC_9(&VAR_17->ctrl, VAR_17, VAR_15,
        &VAR_21);
  if (!VAR_20) {
   FUNC_1(VAR_17, VAR_12, VAR_2,
        "BM_%d : MBX Tag Allocation Failed\n");

   FUNC_5(&VAR_17->ctrl.pdev->dev, VAR_21.size,
         VAR_21.va, VAR_21.dma);
   return -VAR_6;
  }

  VAR_19 = FUNC_13(
     VAR_17->ctrl.mcc_wait[VAR_20],
     VAR_17->ctrl.mcc_tag_status[VAR_20],
     FUNC_10(
     VAR_1));

  if (!FUNC_12(VAR_0, &VAR_17->state)) {
   FUNC_3(VAR_14,
      &VAR_17->ctrl.ptag_state[VAR_20].tag_state);
   FUNC_5(&VAR_17->ctrl.pdev->dev, VAR_21.size,
         VAR_21.va, VAR_21.dma);
   return -VAR_8;
  }
  VAR_25 = (VAR_17->ctrl.mcc_tag_status[VAR_20] &
          VAR_3) >> VAR_4;
  VAR_24 = VAR_17->ctrl.mcc_tag_status[VAR_20] & VAR_5;
  FUNC_6(&VAR_17->ctrl, VAR_20);
  VAR_22 = (struct be_cmd_resp_hdr *)VAR_21.va;
  FUNC_11(VAR_15->reply_payload.sg_list,
        VAR_15->reply_payload.sg_cnt,
        VAR_21.va, (VAR_22->response_length
        + sizeof(*VAR_22)));
  VAR_23->reply_payload_rcv_len = VAR_22->response_length;
  VAR_23->result = VAR_24;
  FUNC_2(VAR_15, VAR_23->result,
        VAR_23->reply_payload_rcv_len);
  FUNC_5(&VAR_17->ctrl.pdev->dev, VAR_21.size,
        VAR_21.va, VAR_21.dma);
  if (VAR_24 || VAR_25) {
   FUNC_1(VAR_17, VAR_12, VAR_2,
        "BM_%d : MBX Cmd Failed"
        " status = %d extd_status = %d\n",
        VAR_24, VAR_25);

   return -VAR_8;
  } else {
   VAR_19 = 0;
  }
  break;

 default:
  FUNC_1(VAR_17, VAR_12, VAR_2,
    "BM_%d : Unsupported bsg command: 0x%x\n",
    VAR_18->msgcode);
  break;
 }

 return VAR_19;
}
