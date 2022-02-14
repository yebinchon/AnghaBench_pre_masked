
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_dcb_tc_cfg {int dummy; } ;
struct qlcnic_dcb_pg_cfg {int dummy; } ;
struct qlcnic_dcb_param {int * hdr_prio_pfc_map; } ;
struct qlcnic_dcb_mbx_params {struct qlcnic_dcb_param* type; } ;
struct TYPE_4__ {scalar_t__ max_ets_tc; scalar_t__ max_pfc_tc; } ;
struct qlcnic_dcb_cfg {TYPE_2__ capability; struct qlcnic_dcb_cee* type; } ;
struct qlcnic_dcb_cee {int tc_param_valid; int pfc_mode_enable; int pg_cfg; int tc_cfg; } ;
struct qlcnic_adapter {TYPE_1__* dcb; } ;
struct TYPE_3__ {struct qlcnic_dcb_cfg* cfg; struct qlcnic_dcb_mbx_params* param; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct qlcnic_adapter*,size_t,struct qlcnic_dcb_param*,struct qlcnic_dcb_cee*) ;
 int FUNC_2 (struct qlcnic_dcb_param*,struct qlcnic_dcb_cee*) ;
 int FUNC_3 (struct qlcnic_dcb_mbx_params*,struct qlcnic_dcb_param*,struct qlcnic_dcb_cee*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static void FUNC_6(struct qlcnic_adapter *VAR_1, u8 VAR_2)
{
 struct qlcnic_dcb_mbx_params *VAR_3 = VAR_1->dcb->param;
 struct qlcnic_dcb_param *VAR_4 = &VAR_3->type[VAR_2];
 struct qlcnic_dcb_cfg *VAR_5 = VAR_1->dcb->cfg;
 struct qlcnic_dcb_cee *VAR_6 = &VAR_5->type[VAR_2];

 VAR_6->tc_param_valid = 0;
 VAR_6->pfc_mode_enable = 0;
 FUNC_0(VAR_6->tc_cfg, 0,
        sizeof(struct qlcnic_dcb_tc_cfg) * VAR_0);
 FUNC_0(VAR_6->pg_cfg, 0,
        sizeof(struct qlcnic_dcb_pg_cfg) * VAR_0);

 if (FUNC_4(VAR_1, VAR_4->hdr_prio_pfc_map[0]) &&
     VAR_5->capability.max_pfc_tc)
  VAR_6->pfc_mode_enable = 1;

 if (FUNC_5(VAR_1, VAR_4->hdr_prio_pfc_map[0]) &&
     VAR_5->capability.max_ets_tc)
  VAR_6->tc_param_valid = 1;

 FUNC_3(VAR_3, VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_6);
 FUNC_1(VAR_1, VAR_2, VAR_4, VAR_6);
}
