
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int num_tc; } ;
struct TYPE_4__ {TYPE_1__ qopt; } ;
struct i40e_vsi {TYPE_2__ mqprio_qopt; } ;
struct i40e_pf {size_t lan_vsi; struct i40e_vsi** vsi; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(struct i40e_pf *VAR_0)
{
 struct i40e_vsi *VAR_1 = VAR_0->vsi[VAR_0->lan_vsi];
 u8 VAR_2 = VAR_1->mqprio_qopt.qopt.num_tc;
 u8 VAR_3 = 1, VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++)
  VAR_3 |= FUNC_0(VAR_4);
 return VAR_3;
}
