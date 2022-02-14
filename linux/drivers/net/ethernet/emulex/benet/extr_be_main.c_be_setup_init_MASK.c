
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_speed; } ;
struct be_adapter {int vlan_prio_bmap; int if_handle; int be3_native; int cmd_privileges; int phy_state; scalar_t__ if_flags; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_3)
{
 VAR_3->vlan_prio_bmap = 0xff;
 VAR_3->phy.link_speed = -1;
 VAR_3->if_handle = -1;
 VAR_3->be3_native = 0;
 VAR_3->if_flags = 0;
 VAR_3->phy_state = VAR_0;
 if (FUNC_0(VAR_3))
  VAR_3->cmd_privileges = VAR_1;
 else
  VAR_3->cmd_privileges = VAR_2;
}
