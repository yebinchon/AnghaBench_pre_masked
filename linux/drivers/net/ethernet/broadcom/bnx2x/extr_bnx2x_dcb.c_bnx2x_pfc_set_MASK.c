
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x_nig_brb_pfc_port_params {int num_of_rx_cos_priority_mask; int* rx_cos_priority_mask; int pkt_priority_to_cos; int llfc_low_priority_classes; scalar_t__ llfc_high_priority_classes; int member_0; } ;
struct TYPE_8__ {int feature_config_flags; } ;
struct TYPE_6__ {int num_of_cos; TYPE_1__* cos_params; } ;
struct TYPE_7__ {TYPE_2__ ets; } ;
struct bnx2x {int link_vars; TYPE_4__ link_params; TYPE_3__ dcbx_port_params; } ;
struct TYPE_5__ {int pri_bitmask; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (TYPE_4__*,int *,struct bnx2x_nig_brb_pfc_port_params*) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_2)
{
 struct bnx2x_nig_brb_pfc_port_params VAR_3 = {0};
 u32 VAR_4, VAR_5 = 0;
 int VAR_6;

 VAR_3.num_of_rx_cos_priority_mask =
     VAR_2->dcbx_port_params.ets.num_of_cos;


 for (VAR_6 = 0; VAR_6 < VAR_2->dcbx_port_params.ets.num_of_cos; VAR_6++)





  VAR_3.rx_cos_priority_mask[VAR_6] =
   VAR_2->dcbx_port_params.ets.cos_params[VAR_6].pri_bitmask
    & FUNC_0(VAR_2);






 for (VAR_6 = 0 ; VAR_6 < VAR_1 ; VAR_6++) {
  VAR_4 = 1 << VAR_6;

  if (!(VAR_4 & FUNC_0(VAR_2)))
   VAR_5 |= 1 << (VAR_6 * 4);
 }

 VAR_3.pkt_priority_to_cos = VAR_5;


 VAR_3.llfc_low_priority_classes = FUNC_0(VAR_2);

 VAR_3.llfc_high_priority_classes = 0;

 FUNC_1(VAR_2);
 VAR_2->link_params.feature_config_flags |= VAR_0;
 FUNC_3(&VAR_2->link_params, &VAR_2->link_vars, &VAR_3);
 FUNC_2(VAR_2);
}
