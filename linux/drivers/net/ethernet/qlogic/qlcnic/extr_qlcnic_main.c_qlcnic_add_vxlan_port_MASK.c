
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_info {scalar_t__ type; int port; } ;
struct qlcnic_hardware_context {int vxlan_port_count; scalar_t__ vxlan_port; } ;
struct qlcnic_adapter {int flags; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
      struct udp_tunnel_info *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_0(VAR_2);
 struct qlcnic_hardware_context *VAR_5 = VAR_4->ahw;

 if (VAR_3->type != VAR_1)
  return;




 if (!FUNC_2(VAR_4))
  return;
 if (!VAR_5->vxlan_port_count) {
  VAR_5->vxlan_port_count = 1;
  VAR_5->vxlan_port = FUNC_1(VAR_3->port);
  VAR_4->flags |= VAR_0;
  return;
 }
 if (VAR_5->vxlan_port == FUNC_1(VAR_3->port))
  VAR_5->vxlan_port_count++;

}
