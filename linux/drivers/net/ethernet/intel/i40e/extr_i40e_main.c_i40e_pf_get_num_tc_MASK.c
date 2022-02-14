
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ iscsi; } ;
struct i40e_dcbx_config {int dummy; } ;
struct i40e_hw {TYPE_4__ func_caps; struct i40e_dcbx_config local_dcbx_config; } ;
struct i40e_pf {int flags; size_t lan_vsi; struct i40e_hw hw; TYPE_3__** vsi; } ;
struct TYPE_5__ {int num_tc; } ;
struct TYPE_6__ {TYPE_1__ qopt; } ;
struct TYPE_7__ {TYPE_2__ mqprio_qopt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_dcbx_config*) ;
 int FUNC_2 (struct i40e_pf*) ;

__attribute__((used)) static u8 FUNC_3(struct i40e_pf *VAR_4)
{
 struct i40e_hw *VAR_5 = &VAR_4->hw;
 u8 VAR_6, VAR_7 = 1;
 u8 VAR_8 = 0;
 struct i40e_dcbx_config *VAR_9 = &VAR_5->local_dcbx_config;

 if (VAR_4->flags & VAR_2)
  return VAR_4->vsi[VAR_4->lan_vsi]->mqprio_qopt.qopt.num_tc;


 if (!(VAR_4->flags & VAR_0))
  return 1;


 if (!(VAR_4->flags & VAR_1))
  return FUNC_1(VAR_9);


 if (VAR_4->hw.func_caps.iscsi)
  VAR_7 = FUNC_2(VAR_4);
 else
  return 1;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_7 & FUNC_0(VAR_6))
   VAR_8++;
 }
 return VAR_8;
}
