
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct qla_mt_iocb_rqst_fx00 {int flags; int func_type; int dataword; } ;
struct qla_hw_data {TYPE_6__* pdev; int srb_mempool; } ;
struct fc_port {int loop_id; TYPE_9__* vha; } ;
struct TYPE_19__ {int * vendor_cmd; } ;
struct TYPE_20__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct TYPE_25__ {int sg_cnt; int sg_list; } ;
struct TYPE_23__ {int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_7__ request_payload; TYPE_5__ reply_payload; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_22__ {struct bsg_job* bsg_job; } ;
struct TYPE_26__ {char* name; int done; int free; TYPE_4__ u; int iocbs; int type; } ;
typedef TYPE_8__ srb_t ;
struct TYPE_21__ {int online; } ;
struct TYPE_27__ {TYPE_3__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
struct TYPE_24__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct fc_port*) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (scalar_t__,TYPE_9__*,int,char*,char*,int,int ,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (scalar_t__,TYPE_9__*,int,struct qla_mt_iocb_rqst_fx00*,int) ;
 int FUNC_7 (int ,TYPE_9__*,int,char*,...) ;
 int VAR_12 ;
 int FUNC_8 (int) ;
 struct fc_port* FUNC_9 (TYPE_9__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_8__* FUNC_10 (TYPE_9__*,struct fc_port*,int ) ;
 int FUNC_11 (TYPE_8__*) ;
 TYPE_9__* FUNC_12 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_13(struct bsg_job *VAR_15)
{
 struct fc_bsg_request *VAR_16 = VAR_15->request;
 struct Scsi_Host *VAR_17 = FUNC_2(VAR_15);
 scsi_qla_host_t *VAR_18 = FUNC_12(VAR_17);
 struct qla_hw_data *VAR_19 = VAR_18->hw;
 int VAR_20 = (VAR_0 << 16);
 struct qla_mt_iocb_rqst_fx00 *VAR_21;
 srb_t *VAR_22;
 int VAR_23 = 0, VAR_24 = 0;
 struct fc_port *VAR_25;
 char *VAR_26 = "FC_BSG_HST_FX_MGMT";


 VAR_21 = (struct qla_mt_iocb_rqst_fx00 *)
     &VAR_16->rqst_data.h_vendor.vendor_cmd[1];


 FUNC_6(VAR_10 + VAR_11 , VAR_18, 0x70cf,
     VAR_21, sizeof(*VAR_21));

 if (!VAR_18->flags.online) {
  FUNC_7(VAR_12, VAR_18, 0x70d0,
      "Host is not online.\n");
  VAR_20 = -VAR_3;
  goto done;
 }

 if (VAR_21->flags & VAR_7) {
  VAR_23 = FUNC_0(&VAR_19->pdev->dev,
      VAR_15->request_payload.sg_list,
      VAR_15->request_payload.sg_cnt, VAR_2);
  if (!VAR_23) {
   FUNC_7(VAR_12, VAR_18, 0x70c7,
       "dma_map_sg return %d for request\n", VAR_23);
   VAR_20 = -VAR_4;
   goto done;
  }
 }

 if (VAR_21->flags & VAR_8) {
  VAR_24 = FUNC_0(&VAR_19->pdev->dev,
      VAR_15->reply_payload.sg_list,
      VAR_15->reply_payload.sg_cnt, VAR_1);
  if (!VAR_24) {
   FUNC_7(VAR_12, VAR_18, 0x70c8,
       "dma_map_sg return %d for reply\n", VAR_24);
   VAR_20 = -VAR_4;
   goto done_unmap_req_sg;
  }
 }

 FUNC_5(VAR_10, VAR_18, 0x70c9,
     "request_sg_cnt: %x dma_request_sg_cnt: %x reply_sg_cnt:%x "
     "dma_reply_sg_cnt: %x\n", VAR_15->request_payload.sg_cnt,
     VAR_23, VAR_15->reply_payload.sg_cnt, VAR_24);






 VAR_25 = FUNC_9(VAR_18, VAR_5);
 if (!VAR_25) {
  FUNC_7(VAR_12, VAR_18, 0x70ca,
      "Failed to allocate fcport.\n");
  VAR_20 = -VAR_4;
  goto done_unmap_rsp_sg;
 }


 VAR_22 = FUNC_10(VAR_18, VAR_25, VAR_5);
 if (!VAR_22) {
  FUNC_7(VAR_12, VAR_18, 0x70cb,
      "qla2x00_get_sp failed.\n");
  VAR_20 = -VAR_4;
  goto done_free_fcport;
 }


 VAR_25->vha = VAR_18;
 VAR_25->loop_id = VAR_21->dataword;

 VAR_22->type = VAR_9;
 VAR_22->name = "bsg_fx_mgmt";
 VAR_22->iocbs = FUNC_8(VAR_23 + VAR_24);
 VAR_22->u.bsg_job = VAR_15;
 VAR_22->free = VAR_14;
 VAR_22->done = VAR_13;

 FUNC_5(VAR_10, VAR_18, 0x70cc,
     "bsg rqst type: %s fx_mgmt_type: %x id=%x\n",
     VAR_26, VAR_21->func_type, VAR_25->loop_id);

 VAR_20 = FUNC_11(VAR_22);
 if (VAR_20 != VAR_6) {
  FUNC_7(VAR_12, VAR_18, 0x70cd,
      "qla2x00_start_sp failed=%d.\n", VAR_20);
  FUNC_4(VAR_22, VAR_19->srb_mempool);
  VAR_20 = -VAR_3;
  goto done_free_fcport;
 }
 return VAR_20;

done_free_fcport:
 FUNC_3(VAR_25);

done_unmap_rsp_sg:
 if (VAR_21->flags & VAR_8)
  FUNC_1(&VAR_19->pdev->dev,
      VAR_15->reply_payload.sg_list,
      VAR_15->reply_payload.sg_cnt, VAR_1);
done_unmap_req_sg:
 if (VAR_21->flags & VAR_7)
  FUNC_1(&VAR_19->pdev->dev,
      VAR_15->request_payload.sg_list,
      VAR_15->request_payload.sg_cnt, VAR_2);

done:
 return VAR_20;
}
