
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ vxlan_force_disable; scalar_t__ vxlan_features; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->vxlan_features)
  FUNC_1(VAR_0);

 VAR_0->vxlan_force_disable = 0;
}
