
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ current_topology; scalar_t__ operating_mode; TYPE_9__* pdev; int srb_mempool; int selflogin_lock; } ;
struct TYPE_31__ {scalar_t__* vendor_rsp; } ;
struct TYPE_32__ {TYPE_2__ vendor_reply; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; TYPE_3__ reply_data; } ;
struct TYPE_25__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct TYPE_26__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_10__ request_payload; TYPE_11__ reply_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_30__ {struct bsg_job* bsg_job; } ;
struct TYPE_27__ {int done; int type; int free; TYPE_1__ u; } ;
typedef TYPE_12__ srb_t ;
struct TYPE_34__ {int domain; int area; int al_pa; } ;
struct TYPE_37__ {int b24; TYPE_5__ b; } ;
struct TYPE_29__ {scalar_t__ loop_id; TYPE_8__ d_id; TYPE_13__* vha; } ;
struct TYPE_35__ {int domain; int area; int al_pa; } ;
struct TYPE_36__ {TYPE_6__ b; } ;
struct TYPE_33__ {int online; } ;
struct TYPE_28__ {int device_flags; scalar_t__ self_login_loop_id; scalar_t__ loop_id; TYPE_19__ bidir_fcport; TYPE_7__ d_id; TYPE_4__ flags; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_13__ scsi_qla_host_t ;
struct TYPE_38__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct bsg_job*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 struct Scsi_Host* FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (TYPE_12__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_13__*,int,char*,...) ;
 int VAR_18 ;
 int FUNC_9 (int ,TYPE_13__*,int,char*,...) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_10 (TYPE_13__*,TYPE_19__*,scalar_t__*) ;
 TYPE_12__* FUNC_11 (TYPE_13__*,TYPE_19__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_12__*,TYPE_13__*,scalar_t__) ;
 TYPE_13__* FUNC_13 (struct Scsi_Host*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct bsg_job *VAR_22)
{
 struct fc_bsg_reply *VAR_23 = VAR_22->reply;
 struct Scsi_Host *VAR_24 = FUNC_4(VAR_22);
 scsi_qla_host_t *VAR_25 = FUNC_13(VAR_24);
 struct qla_hw_data *VAR_26 = VAR_25->hw;
 uint32_t VAR_27 = VAR_11;
 uint16_t VAR_28 = 0;
 uint16_t VAR_29 = 0;
 uint16_t VAR_30 = 0;
 uint32_t VAR_31;
 srb_t *VAR_32 = ((void*)0);
 uint32_t VAR_33;
 uint32_t VAR_34;


 if (!FUNC_0(VAR_26)) {
  FUNC_9(VAR_19, VAR_25, 0x70a0,
   "This adapter is not supported\n");
  VAR_27 = VAR_9;
  goto done;
 }

 if (FUNC_14(VAR_13, &VAR_25->dpc_flags) ||
  FUNC_14(VAR_0, &VAR_25->dpc_flags) ||
  FUNC_14(VAR_14, &VAR_25->dpc_flags)) {
  VAR_27 = VAR_5;
  goto done;
 }


 if (!VAR_25->flags.online) {
  FUNC_9(VAR_19, VAR_25, 0x70a1,
   "Host is not online\n");
  VAR_27 = VAR_6;
  goto done;
 }


 if (VAR_25->device_flags & VAR_1) {
  FUNC_9(VAR_19, VAR_25, 0x70a2,
   "Cable is unplugged...\n");
  VAR_27 = VAR_7;
  goto done;
 }


 if (VAR_26->current_topology != VAR_15) {
  FUNC_9(VAR_19, VAR_25, 0x70a3,
   "Host is not connected to the switch\n");
  VAR_27 = VAR_7;
  goto done;
 }


 if (VAR_26->operating_mode != VAR_16) {
  FUNC_9(VAR_19, VAR_25, 0x70a4,
      "Host operating mode is not P2p\n");
  VAR_27 = VAR_7;
  goto done;
 }

 FUNC_6(&VAR_26->selflogin_lock);
 if (VAR_25->self_login_loop_id == 0) {

  VAR_25->bidir_fcport.vha = VAR_25;
  VAR_25->bidir_fcport.d_id.b.al_pa = VAR_25->d_id.b.al_pa;
  VAR_25->bidir_fcport.d_id.b.area = VAR_25->d_id.b.area;
  VAR_25->bidir_fcport.d_id.b.domain = VAR_25->d_id.b.domain;
  VAR_25->bidir_fcport.loop_id = VAR_25->loop_id;

  if (FUNC_10(VAR_25, &(VAR_25->bidir_fcport), &VAR_30)) {
   FUNC_9(VAR_19, VAR_25, 0x70a7,
       "Failed to login port %06X for bidirectional IOCB\n",
       VAR_25->bidir_fcport.d_id.b24);
   FUNC_7(&VAR_26->selflogin_lock);
   VAR_27 = VAR_8;
   goto done;
  }
  VAR_25->self_login_loop_id = VAR_30 - 1;

 }

 FUNC_7(&VAR_26->selflogin_lock);

 VAR_25->bidir_fcport.loop_id = VAR_25->self_login_loop_id;

 VAR_28 = FUNC_2(&VAR_26->pdev->dev,
  VAR_22->request_payload.sg_list,
  VAR_22->request_payload.sg_cnt,
  VAR_4);

 if (!VAR_28) {
  VAR_27 = VAR_10;
  goto done;
 }

 VAR_29 = FUNC_2(&VAR_26->pdev->dev,
  VAR_22->reply_payload.sg_list, VAR_22->reply_payload.sg_cnt,
  VAR_3);

 if (!VAR_29) {
  VAR_27 = VAR_10;
  goto done_unmap_req_sg;
 }

 if ((VAR_28 != VAR_22->request_payload.sg_cnt) ||
  (VAR_29 != VAR_22->reply_payload.sg_cnt)) {
  FUNC_8(VAR_18, VAR_25, 0x70a9,
      "Dma mapping resulted in different sg counts "
      "[request_sg_cnt: %x dma_request_sg_cnt: %x reply_sg_cnt: "
      "%x dma_reply_sg_cnt: %x]\n",
      VAR_22->request_payload.sg_cnt, VAR_28,
      VAR_22->reply_payload.sg_cnt, VAR_29);
  VAR_27 = VAR_10;
  goto done_unmap_sg;
 }

 VAR_33 = VAR_22->request_payload.payload_len;
 VAR_34 = VAR_22->reply_payload.payload_len;

 if (VAR_33 != VAR_34) {
  VAR_27 = VAR_5;
  FUNC_9(VAR_19, VAR_25, 0x70aa,
      "req_data_len != rsp_data_len\n");
  goto done_unmap_sg;
 }


 VAR_32 = FUNC_11(VAR_25, &(VAR_25->bidir_fcport), VAR_12);
 if (!VAR_32) {
  FUNC_8(VAR_18, VAR_25, 0x70ac,
      "Alloc SRB structure failed\n");
  VAR_27 = VAR_10;
  goto done_unmap_sg;
 }


 VAR_32->u.bsg_job = VAR_22;
 VAR_32->free = VAR_21;
 VAR_32->type = VAR_17;
 VAR_32->done = VAR_20;


 VAR_31 = VAR_29 + VAR_28;

 VAR_27 = FUNC_12(VAR_32, VAR_25, VAR_31);
 if (VAR_27 != VAR_11)
  goto done_free_srb;

 return VAR_27;

done_free_srb:
 FUNC_5(VAR_32, VAR_26->srb_mempool);
done_unmap_sg:
 FUNC_3(&VAR_26->pdev->dev,
     VAR_22->reply_payload.sg_list,
     VAR_22->reply_payload.sg_cnt, VAR_3);
done_unmap_req_sg:
 FUNC_3(&VAR_26->pdev->dev,
     VAR_22->request_payload.sg_list,
     VAR_22->request_payload.sg_cnt, VAR_4);
done:




 VAR_23->reply_data.vendor_reply.vendor_rsp[0] = VAR_27;
 VAR_22->reply_len = sizeof(struct fc_bsg_reply);
 VAR_23->reply_payload_rcv_len = 0;
 VAR_23->result = (VAR_2) << 16;
 FUNC_1(VAR_22, VAR_23->result,
         VAR_23->reply_payload_rcv_len);

 return 0;
}
