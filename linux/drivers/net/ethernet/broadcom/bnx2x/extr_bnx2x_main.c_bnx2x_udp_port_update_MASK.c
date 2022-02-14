
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct bnx2x_udp_tunnel {void* dst_port; scalar_t__ count; } ;
struct bnx2x_func_switch_update_params {int changes; void* vxlan_dst_port; void* geneve_dst_port; } ;
struct TYPE_2__ {struct bnx2x_func_switch_update_params switch_update; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; int ramrod_flags; TYPE_1__ params; int * member_0; } ;
struct bnx2x {struct bnx2x_udp_tunnel* udp_tunnel_ports; int func_obj; } ;


 int FUNC_0 (char*,void*,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,char*,void*,void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_func_state_params*) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_8)
{
 struct bnx2x_func_switch_update_params *VAR_9;
 struct bnx2x_func_state_params VAR_10 = {((void*)0)};
 struct bnx2x_udp_tunnel *VAR_11;
 u16 VAR_12 = 0, VAR_13 = 0;
 int VAR_14;

 VAR_9 = &VAR_10.params.switch_update;


 FUNC_2(VAR_6, &VAR_10.ramrod_flags);
 FUNC_2(VAR_7, &VAR_10.ramrod_flags);

 VAR_10.f_obj = &VAR_8->func_obj;
 VAR_10.cmd = VAR_0;


 FUNC_2(VAR_1,
    &VAR_9->changes);

 if (VAR_8->udp_tunnel_ports[VAR_4].count) {
  VAR_11 = &VAR_8->udp_tunnel_ports[VAR_4];
  VAR_13 = VAR_11->dst_port;
  VAR_9->geneve_dst_port = VAR_13;
 }

 if (VAR_8->udp_tunnel_ports[VAR_5].count) {
  VAR_11 = &VAR_8->udp_tunnel_ports[VAR_5];
  VAR_12 = VAR_11->dst_port;
  VAR_9->vxlan_dst_port = VAR_12;
 }


 FUNC_2(VAR_2,
    &VAR_9->changes);

 VAR_14 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_14)
  FUNC_0("failed to set UDP dst port to %04x %04x (rc = 0x%x)\n",
     VAR_12, VAR_13, VAR_14);
 else
  FUNC_1(VAR_3,
     "Configured UDP ports: Vxlan [%04x] Geneve [%04x]\n",
     VAR_12, VAR_13);

 return VAR_14;
}
