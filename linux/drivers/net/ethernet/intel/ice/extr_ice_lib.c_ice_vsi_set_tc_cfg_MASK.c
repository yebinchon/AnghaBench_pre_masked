
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numtc; int ena_tc; } ;
struct ice_vsi {TYPE_2__ tc_cfg; TYPE_1__* port_info; } ;
struct ice_dcbx_cfg {int dummy; } ;
struct TYPE_3__ {struct ice_dcbx_cfg local_dcbx_cfg; } ;


 int FUNC_0 (struct ice_dcbx_cfg*) ;
 int FUNC_1 (struct ice_dcbx_cfg*) ;

__attribute__((used)) static void FUNC_2(struct ice_vsi *VAR_0)
{
 struct ice_dcbx_cfg *VAR_1 = &VAR_0->port_info->local_dcbx_cfg;

 VAR_0->tc_cfg.ena_tc = FUNC_0(VAR_1);
 VAR_0->tc_cfg.numtc = FUNC_1(VAR_1);
}
