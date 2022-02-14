
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pvid; } ;
struct i40e_vsi {int has_vlan_filter; TYPE_1__ info; } ;



bool FUNC_0(struct i40e_vsi *VAR_0)
{

 if (VAR_0->info.pvid)
  return 1;
 return VAR_0->has_vlan_filter;
}
