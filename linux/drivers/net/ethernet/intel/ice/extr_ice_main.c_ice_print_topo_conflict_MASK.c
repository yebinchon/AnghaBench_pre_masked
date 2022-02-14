
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ice_vsi {int netdev; TYPE_3__* port_info; } ;
struct TYPE_4__ {int topo_media_conflict; } ;
struct TYPE_5__ {TYPE_1__ link_info; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;




 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct ice_vsi *VAR_0)
{
 switch (VAR_0->port_info->phy.link_info.topo_media_conflict) {
 case 128:
 case 129:
  FUNC_0(VAR_0->netdev, "Possible mis-configuration of the Ethernet port detected, please use the Intel(R) Ethernet Port Configuration Tool application to address the issue.\n");
  break;
 default:
  break;
 }
}
