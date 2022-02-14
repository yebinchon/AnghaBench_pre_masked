
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
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_26__ {scalar_t__ els_cmd; int els_logo_pyld_dma; } ;
struct TYPE_25__ {int els_resp_pyld_dma; int els_plogi_pyld_dma; } ;
struct TYPE_27__ {TYPE_8__ els_logo; TYPE_7__ els_plogi; } ;
struct srb_iocb {TYPE_9__ u; } ;
struct els_plogi_payload {int dummy; } ;
struct els_logo_payload {int dummy; } ;
struct els_entry_24xx {int entry_count; int tx_dsd_count; int rx_dsd_count; scalar_t__ opcode; int control_flags; void* rx_len; int rx_address; void* rx_byte_count; void* tx_len; int tx_address; void* tx_byte_count; int * s_id; int * port_id; int sof_type; int vp_index; int nport_handle; int handle; scalar_t__ entry_status; scalar_t__ sys_define; int entry_type; } ;
struct TYPE_19__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_17__ {TYPE_12__* vha; TYPE_4__* fcport; int handle; TYPE_1__ u; } ;
typedef TYPE_11__ srb_t ;
struct TYPE_16__ {int control_requests; } ;
struct TYPE_23__ {int domain; int area; int al_pa; } ;
struct TYPE_24__ {TYPE_5__ b; } ;
struct TYPE_18__ {TYPE_10__ qla_stats; TYPE_6__ d_id; int vp_idx; } ;
typedef TYPE_12__ scsi_qla_host_t ;
struct TYPE_20__ {int domain; int area; int al_pa; } ;
struct TYPE_21__ {TYPE_2__ b; } ;
struct TYPE_22__ {TYPE_3__ d_id; int loop_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__,TYPE_12__*,int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,TYPE_12__*,int,int *,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(srb_t *VAR_6, struct els_entry_24xx *VAR_7)
{
 scsi_qla_host_t *VAR_8 = VAR_6->vha;
 struct srb_iocb *VAR_9 = &VAR_6->u.iocb_cmd;

 VAR_7->entry_type = VAR_1;
 VAR_7->entry_count = 1;
 VAR_7->sys_define = 0;
 VAR_7->entry_status = 0;
 VAR_7->handle = VAR_6->handle;
 VAR_7->nport_handle = FUNC_0(VAR_6->fcport->loop_id);
 VAR_7->tx_dsd_count = 1;
 VAR_7->vp_index = VAR_8->vp_idx;
 VAR_7->sof_type = VAR_2;
 VAR_7->rx_dsd_count = 0;
 VAR_7->opcode = VAR_9->u.els_logo.els_cmd;

 VAR_7->port_id[0] = VAR_6->fcport->d_id.b.al_pa;
 VAR_7->port_id[1] = VAR_6->fcport->d_id.b.area;
 VAR_7->port_id[2] = VAR_6->fcport->d_id.b.domain;

 VAR_7->s_id[1] = VAR_8->d_id.b.al_pa;
 VAR_7->s_id[2] = VAR_8->d_id.b.area;
 VAR_7->s_id[0] = VAR_8->d_id.b.domain;

 if (VAR_9->u.els_logo.els_cmd == VAR_0) {
  VAR_7->control_flags = 0;
  VAR_7->tx_byte_count = VAR_7->tx_len =
   FUNC_1(sizeof(struct els_plogi_payload));
  FUNC_2(VAR_9->u.els_plogi.els_plogi_pyld_dma,
       &VAR_7->tx_address);
  VAR_7->rx_dsd_count = 1;
  VAR_7->rx_byte_count = VAR_7->rx_len =
   FUNC_1(sizeof(struct els_plogi_payload));
  FUNC_2(VAR_9->u.els_plogi.els_resp_pyld_dma,
       &VAR_7->rx_address);

  FUNC_3(VAR_4 + VAR_3, VAR_8, 0x3073,
      "PLOGI ELS IOCB:\n");
  FUNC_4(VAR_5, VAR_8, 0x0109,
      (uint8_t *)VAR_7, 0x70);
 } else {
  VAR_7->control_flags = 1 << 13;
  VAR_7->tx_byte_count =
   FUNC_1(sizeof(struct els_logo_payload));
  FUNC_2(VAR_9->u.els_logo.els_logo_pyld_dma,
       &VAR_7->tx_address);
  VAR_7->tx_len = FUNC_1(sizeof(struct els_logo_payload));

  VAR_7->rx_byte_count = 0;
  VAR_7->rx_address = 0;
  VAR_7->rx_len = 0;
 }

 VAR_6->vha->qla_stats.control_requests++;
}
