
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port; scalar_t__ b_update_port; } ;
struct TYPE_3__ {int port; scalar_t__ b_update_port; } ;
struct qed_tunnel_info {TYPE_2__ vxlan_port; TYPE_1__ geneve_port; } ;



__attribute__((used)) static void FUNC_0(struct qed_tunnel_info *VAR_0,
          struct qed_tunnel_info *VAR_1)
{
 VAR_0->geneve_port.b_update_port = VAR_1->geneve_port.b_update_port;
 VAR_0->vxlan_port.b_update_port = VAR_1->vxlan_port.b_update_port;

 if (VAR_1->geneve_port.b_update_port)
  VAR_0->geneve_port.port = VAR_1->geneve_port.port;

 if (VAR_1->vxlan_port.b_update_port)
  VAR_0->vxlan_port.port = VAR_1->vxlan_port.port;
}
