
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_2__ sin_addr; } ;
struct TYPE_8__ {TYPE_3__ sin; } ;
struct vxlan_config {int flags; int dst_port; TYPE_4__ saddr; int label; int ttl; } ;
struct vxlan_dev {struct vxlan_config cfg; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int addr4; } ;
struct mlxsw_sp_nve_config {int learning_en; int udp_dport; TYPE_1__ ul_sip; int ul_proto; int ul_tb_id; int flowlabel; int ttl; int type; } ;
struct mlxsw_sp_nve {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vxlan_dev* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static void FUNC_1(const struct mlxsw_sp_nve *VAR_4,
          const struct net_device *VAR_5,
          struct mlxsw_sp_nve_config *VAR_6)
{
 struct vxlan_dev *VAR_7 = FUNC_0(VAR_5);
 struct vxlan_config *VAR_8 = &VAR_7->cfg;

 VAR_6->type = VAR_1;
 VAR_6->ttl = VAR_8->ttl;
 VAR_6->flowlabel = VAR_8->label;
 VAR_6->learning_en = VAR_8->flags & VAR_3 ? 1 : 0;
 VAR_6->ul_tb_id = VAR_2;
 VAR_6->ul_proto = VAR_0;
 VAR_6->ul_sip.addr4 = VAR_8->saddr.sin.sin_addr.s_addr;
 VAR_6->udp_dport = VAR_8->dst_port;
}
