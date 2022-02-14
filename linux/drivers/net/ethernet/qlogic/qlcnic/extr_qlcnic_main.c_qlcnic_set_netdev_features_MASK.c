
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_esw_func_cfg {int offload_flags; } ;
struct qlcnic_adapter {int flags; int offload_flags; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

void FUNC_2(struct qlcnic_adapter *VAR_1,
    struct qlcnic_esw_func_cfg *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;

 if (FUNC_1(VAR_1))
  return;

 VAR_1->offload_flags = VAR_2->offload_flags;
 VAR_1->flags |= VAR_0;
 FUNC_0(VAR_3);
 VAR_1->flags &= ~VAR_0;
}
