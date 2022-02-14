
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct sts_entry_24xx {int ox_id; int residual_len; int nvme_rsp_pyld_len; int nvme_ersp_data; int state_flags; int comp_status; } ;
struct TYPE_13__ {int comp_status; int aen_op; int rsp_pyld_len; struct nvmefc_fcp_req* desc; } ;
struct TYPE_14__ {TYPE_4__ nvme; } ;
struct srb_iocb {TYPE_5__ u; } ;
struct req_que {int dummy; } ;
struct nvmefc_fcp_req {scalar_t__ transferred_length; scalar_t__ payload_length; scalar_t__ rspaddr; } ;
struct TYPE_10__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {int (* done ) (TYPE_6__*,int) ;int handle; int name; TYPE_3__* vha; TYPE_7__* fcport; TYPE_1__ u; } ;
typedef TYPE_6__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_16__ {int nvme_flag; int vha; } ;
typedef TYPE_7__ fc_port_t ;
struct TYPE_12__ {TYPE_2__* hw; } ;
struct TYPE_11__ {int nvme_active_aen_cnt; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,char*,int ,int,...) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(scsi_qla_host_t *VAR_7, struct req_que *VAR_8,
    void *VAR_9, srb_t *VAR_10)
{
 fc_port_t *VAR_11;
 struct srb_iocb *VAR_12;
 struct sts_entry_24xx *VAR_13 = (struct sts_entry_24xx *)VAR_9;
 uint16_t VAR_14;
 struct nvmefc_fcp_req *VAR_15;
 uint16_t VAR_16 = VAR_3;
 uint16_t VAR_17 = FUNC_1(VAR_13->comp_status);

 VAR_12 = &VAR_10->u.iocb_cmd;
 VAR_11 = VAR_10->fcport;
 VAR_12->u.nvme.comp_status = VAR_17;
 VAR_14 = FUNC_1(VAR_13->state_flags);
 VAR_15 = VAR_12->u.nvme.desc;

 if (FUNC_6(VAR_12->u.nvme.aen_op))
  FUNC_0(&VAR_10->vha->hw->nvme_active_aen_cnt);
 if (!(VAR_14 & (VAR_4 | VAR_5))) {
  VAR_12->u.nvme.rsp_pyld_len = 0;
 } else if ((VAR_14 & VAR_4)) {
  VAR_12->u.nvme.rsp_pyld_len = FUNC_1(VAR_13->nvme_rsp_pyld_len);
 } else if (VAR_14 & VAR_5) {
  uint32_t *VAR_18, *VAR_19;
  uint16_t VAR_20;

  VAR_18 = (uint32_t *)&VAR_13->nvme_ersp_data;
  VAR_19 = (uint32_t *)VAR_15->rspaddr;
  VAR_12->u.nvme.rsp_pyld_len = FUNC_1(VAR_13->nvme_rsp_pyld_len);
  VAR_20 = VAR_12->u.nvme.rsp_pyld_len >> 2;
  for (; VAR_20; VAR_20--)
   *VAR_19++ = FUNC_5(*VAR_18++);
 } else {
     FUNC_3(VAR_6, VAR_11->vha, 0x503a,
  "NVME-%s error. Unhandled state_flags of %x\n",
  VAR_10->name, VAR_14);
 }

 VAR_15->transferred_length = VAR_15->payload_length -
     FUNC_2(VAR_13->residual_len);

 if (FUNC_6(VAR_17 != 133))
  FUNC_3(VAR_6, VAR_11->vha, 0x5060,
     "NVME-%s ERR Handling - hdl=%x status(%x) tr_len:%x resid=%x  ox_id=%x\n",
     VAR_10->name, VAR_10->handle, VAR_17,
     VAR_15->transferred_length, FUNC_2(VAR_13->residual_len),
     VAR_13->ox_id);





 switch (VAR_17) {
 case 133:
  break;

 case 128:
 case 129:
 case 130:
  VAR_11->nvme_flag |= VAR_0;

 case 134:
 case 131:
  VAR_15->transferred_length = 0;
  VAR_12->u.nvme.rsp_pyld_len = 0;
  VAR_16 = VAR_1;
  break;
 case 132:
  break;
 default:
  VAR_16 = VAR_2;
  break;
 }
 VAR_10->done(VAR_10, VAR_16);
}
