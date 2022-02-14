
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int uint16_t ;
struct qla_hw_data {TYPE_7__* pdev; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct TYPE_31__ {int* port_id; int command_code; } ;
struct TYPE_32__ {TYPE_3__ h_els; } ;
struct fc_bsg_request {scalar_t__ msgcode; TYPE_4__ rqst_data; } ;
struct TYPE_37__ {int sg_cnt; int sg_list; } ;
struct TYPE_36__ {int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_9__ reply_payload; TYPE_8__ request_payload; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_29__ {struct bsg_job* bsg_job; } ;
struct TYPE_26__ {char* name; int done; int free; TYPE_1__ u; int type; } ;
typedef TYPE_10__ srb_t ;
struct TYPE_30__ {int online; } ;
struct TYPE_27__ {TYPE_2__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
struct TYPE_33__ {int al_pa; int area; int domain; } ;
struct TYPE_34__ {TYPE_5__ b; int b24; } ;
struct TYPE_28__ {TYPE_6__ d_id; int loop_id; TYPE_11__* vha; } ;
typedef TYPE_12__ fc_port_t ;
struct TYPE_35__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 struct fc_rport* FUNC_3 (struct bsg_job*) ;
 struct Scsi_Host* FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_14 ;
 int FUNC_7 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_15 ;
 TYPE_12__* FUNC_8 (TYPE_11__*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_9 (TYPE_11__*,TYPE_12__*,int *) ;
 TYPE_10__* FUNC_10 (TYPE_11__*,TYPE_12__*,int ) ;
 int FUNC_11 (TYPE_10__*) ;
 int FUNC_12 (TYPE_10__*) ;
 struct Scsi_Host* FUNC_13 (struct fc_rport*) ;
 TYPE_11__* FUNC_14 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_15(struct bsg_job *VAR_18)
{
 struct fc_bsg_request *VAR_19 = VAR_18->request;
 struct fc_rport *VAR_20;
 fc_port_t *VAR_21 = ((void*)0);
 struct Scsi_Host *VAR_22;
 scsi_qla_host_t *VAR_23;
 struct qla_hw_data *VAR_24;
 srb_t *VAR_25;
 const char *VAR_26;
 int VAR_27, VAR_28;
 int VAR_29 = (VAR_0 << 16);
 uint16_t VAR_30 = 0;

 if (VAR_19->msgcode == VAR_7) {
  VAR_20 = FUNC_3(VAR_18);
  VAR_21 = *(fc_port_t **) VAR_20->dd_data;
  VAR_22 = FUNC_13(VAR_20);
  VAR_23 = FUNC_14(VAR_22);
  VAR_24 = VAR_23->hw;
  VAR_26 = "FC_BSG_RPT_ELS";
 } else {
  VAR_22 = FUNC_4(VAR_18);
  VAR_23 = FUNC_14(VAR_22);
  VAR_24 = VAR_23->hw;
  VAR_26 = "FC_BSG_HST_ELS_NOLOGIN";
 }

 if (!VAR_23->flags.online) {
  FUNC_7(VAR_15, VAR_23, 0x7005, "Host not online.\n");
  VAR_29 = -VAR_4;
  goto done;
 }


 if (!FUNC_0(VAR_24)) {
  FUNC_6(VAR_14, VAR_23, 0x7001,
      "ELS passthru not supported for ISP23xx based adapters.\n");
  VAR_29 = -VAR_6;
  goto done;
 }


 if (VAR_18->request_payload.sg_cnt > 1 ||
  VAR_18->reply_payload.sg_cnt > 1) {
  FUNC_6(VAR_14, VAR_23, 0x7002,
      "Multiple SG's are not supported for ELS requests, "
      "request_sg_cnt=%x reply_sg_cnt=%x.\n",
      VAR_18->request_payload.sg_cnt,
      VAR_18->reply_payload.sg_cnt);
  VAR_29 = -VAR_6;
  goto done;
 }


 if (VAR_19->msgcode == VAR_7) {



  if (FUNC_9(VAR_23, VAR_21, &VAR_30)) {
   FUNC_6(VAR_14, VAR_23, 0x7003,
       "Failed to login port %06X for ELS passthru.\n",
       VAR_21->d_id.b24);
   VAR_29 = -VAR_4;
   goto done;
  }
 } else {





  VAR_21 = FUNC_8(VAR_23, VAR_8);
  if (!VAR_21) {
   VAR_29 = -VAR_5;
   goto done;
  }


  VAR_21->vha = VAR_23;
  VAR_21->d_id.b.al_pa =
   VAR_19->rqst_data.h_els.port_id[0];
  VAR_21->d_id.b.area =
   VAR_19->rqst_data.h_els.port_id[1];
  VAR_21->d_id.b.domain =
   VAR_19->rqst_data.h_els.port_id[2];
  VAR_21->loop_id =
   (VAR_21->d_id.b.al_pa == 0xFD) ?
   VAR_9 : VAR_10;
 }

 VAR_27 =
  FUNC_1(&VAR_24->pdev->dev, VAR_18->request_payload.sg_list,
  VAR_18->request_payload.sg_cnt, VAR_2);
 if (!VAR_27) {
  FUNC_2(&VAR_24->pdev->dev, VAR_18->request_payload.sg_list,
      VAR_18->request_payload.sg_cnt, VAR_2);
  VAR_29 = -VAR_5;
  goto done_free_fcport;
 }

 VAR_28 = FUNC_1(&VAR_24->pdev->dev, VAR_18->reply_payload.sg_list,
  VAR_18->reply_payload.sg_cnt, VAR_1);
        if (!VAR_28) {
  FUNC_2(&VAR_24->pdev->dev, VAR_18->reply_payload.sg_list,
      VAR_18->reply_payload.sg_cnt, VAR_1);
  VAR_29 = -VAR_5;
  goto done_free_fcport;
 }

 if ((VAR_27 != VAR_18->request_payload.sg_cnt) ||
  (VAR_28 != VAR_18->reply_payload.sg_cnt)) {
  FUNC_7(VAR_15, VAR_23, 0x7008,
      "dma mapping resulted in different sg counts, "
      "request_sg_cnt: %x dma_request_sg_cnt:%x reply_sg_cnt:%x "
      "dma_reply_sg_cnt:%x.\n", VAR_18->request_payload.sg_cnt,
      VAR_27, VAR_18->reply_payload.sg_cnt, VAR_28);
  VAR_29 = -VAR_3;
  goto done_unmap_sg;
 }


 VAR_25 = FUNC_10(VAR_23, VAR_21, VAR_8);
 if (!VAR_25) {
  VAR_29 = -VAR_5;
  goto done_unmap_sg;
 }

 VAR_25->type =
  (VAR_19->msgcode == VAR_7 ?
   VAR_13 : VAR_12);
 VAR_25->name =
  (VAR_19->msgcode == VAR_7 ?
   "bsg_els_rpt" : "bsg_els_hst");
 VAR_25->u.bsg_job = VAR_18;
 VAR_25->free = VAR_17;
 VAR_25->done = VAR_16;

 FUNC_6(VAR_14, VAR_23, 0x700a,
     "bsg rqst type: %s els type: %x - loop-id=%x "
     "portid=%-2x%02x%02x.\n", VAR_26,
     VAR_19->rqst_data.h_els.command_code, VAR_21->loop_id,
     VAR_21->d_id.b.domain, VAR_21->d_id.b.area, VAR_21->d_id.b.al_pa);

 VAR_29 = FUNC_12(VAR_25);
 if (VAR_29 != VAR_11) {
  FUNC_7(VAR_15, VAR_23, 0x700e,
      "qla2x00_start_sp failed = %d\n", VAR_29);
  FUNC_11(VAR_25);
  VAR_29 = -VAR_4;
  goto done_unmap_sg;
 }
 return VAR_29;

done_unmap_sg:
 FUNC_2(&VAR_24->pdev->dev, VAR_18->request_payload.sg_list,
  VAR_18->request_payload.sg_cnt, VAR_2);
 FUNC_2(&VAR_24->pdev->dev, VAR_18->reply_payload.sg_list,
  VAR_18->reply_payload.sg_cnt, VAR_1);
 goto done_free_fcport;

done_free_fcport:
 if (VAR_19->msgcode == VAR_7)
  FUNC_5(VAR_21);
done:
 return VAR_29;
}
