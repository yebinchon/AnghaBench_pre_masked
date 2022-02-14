
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nic_core_reset_hdlr_active; } ;
struct qla_hw_data {int nic_core_unrecoverable; int dpc_hp_wq; int idc_state_handler; int nic_core_reset; TYPE_1__ flags; int idc_aen; int dpc_lp_wq; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;






 int FUNC_0 (int ,TYPE_2__*,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(scsi_qla_host_t *VAR_2, int VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_2->hw;

 switch (VAR_3) {
 case 131:
  if (VAR_4->dpc_lp_wq)
   FUNC_2(VAR_4->dpc_lp_wq, &VAR_4->idc_aen);
  break;

 case 129:
  if (!VAR_4->flags.nic_core_reset_hdlr_active) {
   if (VAR_4->dpc_hp_wq)
    FUNC_2(VAR_4->dpc_hp_wq, &VAR_4->nic_core_reset);
  } else
   FUNC_0(VAR_0, VAR_2, 0xb05e,
       "NIC Core reset is already active. Skip "
       "scheduling it again.\n");
  break;
 case 130:
  if (VAR_4->dpc_hp_wq)
   FUNC_2(VAR_4->dpc_hp_wq, &VAR_4->idc_state_handler);
  break;
 case 128:
  if (VAR_4->dpc_hp_wq)
   FUNC_2(VAR_4->dpc_hp_wq, &VAR_4->nic_core_unrecoverable);
  break;
 default:
  FUNC_1(VAR_1, VAR_2, 0xb05f,
      "Unknown work-code=0x%x.\n", VAR_3);
 }

 return;
}
