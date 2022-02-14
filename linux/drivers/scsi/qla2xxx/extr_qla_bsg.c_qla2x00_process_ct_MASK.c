
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint16_t ;
struct qla_hw_data {TYPE_8__* pdev; } ;
struct TYPE_26__ {int al_pa; int area; int domain; } ;
struct TYPE_27__ {TYPE_5__ b; } ;
struct fc_port {int loop_id; TYPE_6__ d_id; TYPE_11__* vha; } ;
struct TYPE_24__ {int preamble_word1; int preamble_word2; int * port_id; } ;
struct TYPE_25__ {TYPE_3__ h_ct; } ;
struct fc_bsg_request {TYPE_4__ rqst_data; } ;
struct TYPE_30__ {int sg_cnt; int sg_list; } ;
struct TYPE_28__ {int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_9__ reply_payload; TYPE_7__ request_payload; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_23__ {struct bsg_job* bsg_job; } ;
struct TYPE_20__ {char* name; int done; int free; TYPE_2__ u; int iocbs; int type; } ;
typedef TYPE_10__ srb_t ;
struct TYPE_22__ {int online; } ;
struct TYPE_21__ {int mgmt_svr_loop_id; TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
struct TYPE_29__ {int dev; } ;


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
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (struct fc_port*) ;
 int FUNC_5 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_11 ;
 int FUNC_6 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 struct fc_port* FUNC_8 (TYPE_11__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_10__* FUNC_9 (TYPE_11__*,struct fc_port*,int ) ;
 int FUNC_10 (TYPE_10__*) ;
 int FUNC_11 (TYPE_10__*) ;
 TYPE_11__* FUNC_12 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_13(struct bsg_job *VAR_15)
{
 srb_t *VAR_16;
 struct fc_bsg_request *VAR_17 = VAR_15->request;
 struct Scsi_Host *VAR_18 = FUNC_3(VAR_15);
 scsi_qla_host_t *VAR_19 = FUNC_12(VAR_18);
 struct qla_hw_data *VAR_20 = VAR_19->hw;
 int VAR_21 = (VAR_0 << 16);
 int VAR_22, VAR_23;
 uint16_t VAR_24;
 struct fc_port *VAR_25;
 char *VAR_26 = "FC_BSG_HST_CT";

 VAR_22 =
  FUNC_1(&VAR_20->pdev->dev, VAR_15->request_payload.sg_list,
   VAR_15->request_payload.sg_cnt, VAR_2);
 if (!VAR_22) {
  FUNC_6(VAR_12, VAR_19, 0x700f,
      "dma_map_sg return %d for request\n", VAR_22);
  VAR_21 = -VAR_6;
  goto done;
 }

 VAR_23 = FUNC_1(&VAR_20->pdev->dev, VAR_15->reply_payload.sg_list,
  VAR_15->reply_payload.sg_cnt, VAR_1);
 if (!VAR_23) {
  FUNC_6(VAR_12, VAR_19, 0x7010,
      "dma_map_sg return %d for reply\n", VAR_23);
  VAR_21 = -VAR_6;
  goto done;
 }

 if ((VAR_22 != VAR_15->request_payload.sg_cnt) ||
     (VAR_23 != VAR_15->reply_payload.sg_cnt)) {
  FUNC_6(VAR_12, VAR_19, 0x7011,
      "request_sg_cnt: %x dma_request_sg_cnt: %x reply_sg_cnt:%x "
      "dma_reply_sg_cnt: %x\n", VAR_15->request_payload.sg_cnt,
      VAR_22, VAR_15->reply_payload.sg_cnt, VAR_23);
  VAR_21 = -VAR_3;
  goto done_unmap_sg;
 }

 if (!VAR_19->flags.online) {
  FUNC_6(VAR_12, VAR_19, 0x7012,
      "Host is not online.\n");
  VAR_21 = -VAR_5;
  goto done_unmap_sg;
 }

 VAR_24 =
  (VAR_17->rqst_data.h_ct.preamble_word1 & 0xFF000000)
   >> 24;
 switch (VAR_24) {
 case 0xFC:
  VAR_24 = FUNC_0(VAR_8);
  break;
 case 0xFA:
  VAR_24 = VAR_19->mgmt_svr_loop_id;
  break;
 default:
  FUNC_5(VAR_11, VAR_19, 0x7013,
      "Unknown loop id: %x.\n", VAR_24);
  VAR_21 = -VAR_4;
  goto done_unmap_sg;
 }






 VAR_25 = FUNC_8(VAR_19, VAR_7);
 if (!VAR_25) {
  FUNC_6(VAR_12, VAR_19, 0x7014,
      "Failed to allocate fcport.\n");
  VAR_21 = -VAR_6;
  goto done_unmap_sg;
 }


 VAR_25->vha = VAR_19;
 VAR_25->d_id.b.al_pa = VAR_17->rqst_data.h_ct.port_id[0];
 VAR_25->d_id.b.area = VAR_17->rqst_data.h_ct.port_id[1];
 VAR_25->d_id.b.domain = VAR_17->rqst_data.h_ct.port_id[2];
 VAR_25->loop_id = VAR_24;


 VAR_16 = FUNC_9(VAR_19, VAR_25, VAR_7);
 if (!VAR_16) {
  FUNC_6(VAR_12, VAR_19, 0x7015,
      "qla2x00_get_sp failed.\n");
  VAR_21 = -VAR_6;
  goto done_free_fcport;
 }

 VAR_16->type = VAR_10;
 VAR_16->name = "bsg_ct";
 VAR_16->iocbs = FUNC_7(VAR_22 + VAR_23);
 VAR_16->u.bsg_job = VAR_15;
 VAR_16->free = VAR_14;
 VAR_16->done = VAR_13;

 FUNC_5(VAR_11, VAR_19, 0x7016,
     "bsg rqst type: %s else type: %x - "
     "loop-id=%x portid=%02x%02x%02x.\n", VAR_26,
     (VAR_17->rqst_data.h_ct.preamble_word2 >> 16),
     VAR_25->loop_id, VAR_25->d_id.b.domain, VAR_25->d_id.b.area,
     VAR_25->d_id.b.al_pa);

 VAR_21 = FUNC_11(VAR_16);
 if (VAR_21 != VAR_9) {
  FUNC_6(VAR_12, VAR_19, 0x7017,
      "qla2x00_start_sp failed=%d.\n", VAR_21);
  FUNC_10(VAR_16);
  VAR_21 = -VAR_5;
  goto done_free_fcport;
 }
 return VAR_21;

done_free_fcport:
 FUNC_4(VAR_25);
done_unmap_sg:
 FUNC_2(&VAR_20->pdev->dev, VAR_15->request_payload.sg_list,
  VAR_15->request_payload.sg_cnt, VAR_2);
 FUNC_2(&VAR_20->pdev->dev, VAR_15->reply_payload.sg_list,
  VAR_15->reply_payload.sg_cnt, VAR_1);
done:
 return VAR_21;
}
