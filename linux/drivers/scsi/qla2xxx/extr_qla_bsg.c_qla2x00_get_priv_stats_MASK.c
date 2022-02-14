
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint ;
struct scsi_qla_host {int dummy; } ;
struct qla_hw_data {TYPE_11__* pdev; } ;
struct link_statistics {int dummy; } ;
struct TYPE_14__ {scalar_t__* vendor_cmd; } ;
struct TYPE_15__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct TYPE_17__ {int * vendor_rsp; } ;
struct TYPE_18__ {TYPE_4__ vendor_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_5__ reply_data; } ;
struct TYPE_16__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_3__ reply_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_19__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bsg_job*,int,int) ;
 struct link_statistics* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,struct link_statistics*,int ) ;
 struct Scsi_Host* FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (TYPE_11__*) ;
 struct scsi_qla_host* FUNC_6 (TYPE_11__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (scalar_t__,TYPE_6__*,int,struct link_statistics*,int) ;
 int FUNC_8 (int ,TYPE_6__*,int,char*) ;
 int VAR_13 ;
 int FUNC_9 (struct scsi_qla_host*,struct link_statistics*,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int ,int ,struct link_statistics*,int) ;
 TYPE_6__* FUNC_12 (struct Scsi_Host*) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct bsg_job *VAR_14)
{
 struct fc_bsg_request *VAR_15 = VAR_14->request;
 struct fc_bsg_reply *VAR_16 = VAR_14->reply;
 struct Scsi_Host *VAR_17 = FUNC_4(VAR_14);
 scsi_qla_host_t *VAR_18 = FUNC_12(VAR_17);
 struct qla_hw_data *VAR_19 = VAR_18->hw;
 struct scsi_qla_host *VAR_20 = FUNC_6(VAR_19->pdev);
 struct link_statistics *VAR_21 = ((void*)0);
 dma_addr_t VAR_22;
 int VAR_23;
 uint32_t *VAR_24 = VAR_15->rqst_data.h_vendor.vendor_cmd;
 uint VAR_25 = VAR_24[0] == VAR_9 ? VAR_24[1] : 0;

 if (FUNC_13(VAR_10, &VAR_18->dpc_flags))
  return -VAR_2;

 if (FUNC_14(FUNC_5(VAR_19->pdev)))
  return -VAR_2;

 if (FUNC_10(VAR_18))
  return -VAR_1;

 if (!FUNC_0(VAR_19))
  return -VAR_4;

 VAR_21 = FUNC_2(&VAR_19->pdev->dev, sizeof(*VAR_21), &VAR_22,
       VAR_7);
 if (!VAR_21) {
  FUNC_8(VAR_13, VAR_18, 0x70e2,
      "Failed to allocate memory for stats.\n");
  return -VAR_3;
 }

 VAR_23 = FUNC_9(VAR_20, VAR_21, VAR_22, VAR_25);

 if (VAR_23 == VAR_8) {
  FUNC_7(VAR_11 + VAR_12, VAR_18, 0x70e5,
   VAR_21, sizeof(*VAR_21));
  FUNC_11(VAR_14->reply_payload.sg_list,
   VAR_14->reply_payload.sg_cnt, VAR_21, sizeof(*VAR_21));
 }

 VAR_16->reply_payload_rcv_len = sizeof(*VAR_21);
 VAR_16->reply_data.vendor_reply.vendor_rsp[0] =
     VAR_23 ? VAR_5 : VAR_6;

 VAR_14->reply_len = sizeof(*VAR_16);
 VAR_16->result = VAR_0 << 16;
 FUNC_1(VAR_14, VAR_16->result,
         VAR_16->reply_payload_rcv_len);

 FUNC_3(&VAR_19->pdev->dev, sizeof(*VAR_21),
  VAR_21, VAR_22);

 return 0;
}
