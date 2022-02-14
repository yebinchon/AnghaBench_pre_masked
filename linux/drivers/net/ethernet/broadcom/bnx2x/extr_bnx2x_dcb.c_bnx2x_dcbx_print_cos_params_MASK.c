
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct bnx2x_func_tx_start_params {TYPE_5__* traffic_type_to_priority_cos; int dcb_version; } ;
struct TYPE_8__ {size_t num_of_cos; TYPE_2__* cos_params; } ;
struct TYPE_6__ {int priority_non_pauseable_mask; } ;
struct TYPE_9__ {TYPE_3__ ets; TYPE_1__ pfc; } ;
struct bnx2x {TYPE_4__ dcbx_port_params; } ;
struct TYPE_10__ {int cos; int priority; } ;
struct TYPE_7__ {int pauseable; int strict; int bw_tbl; int pri_bitmask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bnx2x *VAR_2,
       struct bnx2x_func_tx_start_params *VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;

 FUNC_0(VAR_0,
    "pfc_fw_cfg->dcb_version %x\n", VAR_3->dcb_version);
 FUNC_0(VAR_0,
    "pdev->params.dcbx_port_params.pfc.priority_non_pauseable_mask %x\n",
    VAR_2->dcbx_port_params.pfc.priority_non_pauseable_mask);

 for (VAR_5 = 0 ; VAR_5 < VAR_2->dcbx_port_params.ets.num_of_cos ; VAR_5++) {
  FUNC_0(VAR_0,
     "pdev->params.dcbx_port_params.ets.cos_params[%d].pri_bitmask %x\n",
     VAR_5, VAR_2->dcbx_port_params.ets.cos_params[VAR_5].pri_bitmask);

  FUNC_0(VAR_0,
     "pdev->params.dcbx_port_params.ets.cos_params[%d].bw_tbl %x\n",
     VAR_5, VAR_2->dcbx_port_params.ets.cos_params[VAR_5].bw_tbl);

  FUNC_0(VAR_0,
     "pdev->params.dcbx_port_params.ets.cos_params[%d].strict %x\n",
     VAR_5, VAR_2->dcbx_port_params.ets.cos_params[VAR_5].strict);

  FUNC_0(VAR_0,
     "pdev->params.dcbx_port_params.ets.cos_params[%d].pauseable %x\n",
     VAR_5, VAR_2->dcbx_port_params.ets.cos_params[VAR_5].pauseable);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_0,
     "pfc_fw_cfg->traffic_type_to_priority_cos[%d].priority %x\n",
     VAR_4, VAR_3->traffic_type_to_priority_cos[VAR_4].priority);

  FUNC_0(VAR_0,
     "pfc_fw_cfg->traffic_type_to_priority_cos[%d].cos %x\n",
     VAR_4, VAR_3->traffic_type_to_priority_cos[VAR_4].cos);
 }
}
