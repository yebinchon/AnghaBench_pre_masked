
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_esw_func_cfg {int promisc_mode; int mac_override; scalar_t__ mac_anti_spoof; } ;
struct qlcnic_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct qlcnic_adapter *VAR_3,
          struct qlcnic_esw_func_cfg *VAR_4)
{
 VAR_3->flags &= ~(VAR_0 | VAR_1 |
    VAR_2);

 if (VAR_4->mac_anti_spoof)
  VAR_3->flags |= VAR_0;

 if (!VAR_4->mac_override)
  VAR_3->flags |= VAR_1;

 if (!VAR_4->promisc_mode)
  VAR_3->flags |= VAR_2;
}
