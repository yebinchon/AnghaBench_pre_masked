
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vlan_dev_priv {int vlan_proto; int vlan_id; struct net_device* real_dev; } ;
struct TYPE_9__ {struct net_device* dev; } ;
struct rtable {TYPE_4__ dst; } ;
struct net_device {int dev_addr; } ;
struct neighbour {int dummy; } ;
struct TYPE_7__ {int src; int dst; } ;
struct TYPE_8__ {TYPE_2__ ipv4; } ;
struct ip_tunnel_key {int ttl; TYPE_3__ u; int tp_dst; } ;
struct TYPE_6__ {int member_0; } ;
struct flowi4 {int saddr; int daddr; int fl4_dport; int flowi4_proto; TYPE_1__ member_0; } ;
struct bnxt_tc_l2_key {int num_vlans; int smac; int dmac; int inner_vlan_tpid; int inner_vlan_tci; } ;
struct bnxt {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct net_device*) ;
 struct neighbour* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 struct rtable* FUNC_6 (int ,struct flowi4*) ;
 int FUNC_7 (struct rtable*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,struct neighbour*,struct net_device*) ;
 int FUNC_10 (struct neighbour*) ;
 int FUNC_11 (struct net_device*,char*,int *,...) ;
 int FUNC_12 (struct net_device*) ;
 struct vlan_dev_priv* FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct bnxt *VAR_2,
           struct ip_tunnel_key *VAR_3,
           struct bnxt_tc_l2_key *VAR_4)
{
 return -VAR_0;

}
