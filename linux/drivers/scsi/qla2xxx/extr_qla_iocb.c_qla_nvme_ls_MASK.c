
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int rsp_dma; int rsp_len; int cmd_dma; int cmd_len; int timeout_sec; } ;
struct TYPE_13__ {TYPE_4__ nvme; } ;
struct srb_iocb {TYPE_5__ u; } ;
struct pt_ls4_request {int entry_count; int control_flags; int tx_dseg_count; int rx_dseg_count; TYPE_6__* dsd; int rx_byte_count; int tx_byte_count; int vp_index; void* nport_handle; void* timeout; int entry_type; } ;
struct TYPE_9__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {TYPE_3__* fcport; TYPE_1__ u; } ;
typedef TYPE_7__ srb_t ;
struct TYPE_14__ {int address; int length; } ;
struct TYPE_11__ {TYPE_2__* vha; int loop_id; } ;
struct TYPE_10__ {int vp_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(srb_t *VAR_4, struct pt_ls4_request *VAR_5)
{
 struct srb_iocb *VAR_6;
 int VAR_7 = VAR_3;

 VAR_6 = &VAR_4->u.iocb_cmd;
 VAR_5->entry_type = VAR_2;
 VAR_5->entry_count = 1;
 VAR_5->control_flags = VAR_0 << VAR_1;

 VAR_5->timeout = FUNC_0(VAR_6->u.nvme.timeout_sec);
 VAR_5->nport_handle = FUNC_0(VAR_4->fcport->loop_id);
 VAR_5->vp_index = VAR_4->fcport->vha->vp_idx;

 VAR_5->tx_dseg_count = 1;
 VAR_5->tx_byte_count = VAR_6->u.nvme.cmd_len;
 VAR_5->dsd[0].length = VAR_6->u.nvme.cmd_len;
 FUNC_1(VAR_6->u.nvme.cmd_dma, &VAR_5->dsd[0].address);

 VAR_5->rx_dseg_count = 1;
 VAR_5->rx_byte_count = VAR_6->u.nvme.rsp_len;
 VAR_5->dsd[1].length = VAR_6->u.nvme.rsp_len;
 FUNC_1(VAR_6->u.nvme.rsp_dma, &VAR_5->dsd[1].address);

 return VAR_7;
}
