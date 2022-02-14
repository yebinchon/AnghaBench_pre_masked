
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_tunnel_info {int type; } ;
struct net_device {int dummy; } ;
struct fm10k_udp_port {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct fm10k_intfc {int geneve_port; int vxlan_port; TYPE_2__ hw; } ;




 scalar_t__ VAR_0 ;
 struct fm10k_udp_port* FUNC_0 (int *,struct udp_tunnel_info*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_udp_port*) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
     struct udp_tunnel_info *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_3(VAR_1);
 struct fm10k_udp_port *VAR_4 = ((void*)0);

 if (VAR_3->hw.mac.type != VAR_0)
  return;

 switch (VAR_2->type) {
 case 128:
  VAR_4 = FUNC_0(&VAR_3->vxlan_port, VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_0(&VAR_3->geneve_port, VAR_2);
  break;
 default:
  return;
 }


 FUNC_2(VAR_4);

 FUNC_1(VAR_3);
}
