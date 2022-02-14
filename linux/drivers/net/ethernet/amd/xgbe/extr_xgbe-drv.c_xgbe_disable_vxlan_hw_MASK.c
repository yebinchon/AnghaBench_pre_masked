
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* disable_vxlan ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {scalar_t__ vxlan_port; scalar_t__ vxlan_port_set; TYPE_1__ hw_if; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_0)
{
 if (!VAR_0->vxlan_port_set)
  return;

 VAR_0->hw_if.disable_vxlan(VAR_0);

 VAR_0->vxlan_port_set = 0;
 VAR_0->vxlan_port = 0;
}
