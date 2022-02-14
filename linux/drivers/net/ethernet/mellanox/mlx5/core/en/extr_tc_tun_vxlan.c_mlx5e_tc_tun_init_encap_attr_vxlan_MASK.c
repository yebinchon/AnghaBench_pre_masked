
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int netdev; TYPE_3__* mdev; } ;
struct mlx5e_encap_entry {int reformat_type; int * tunnel; TYPE_2__* tun_info; } ;
struct TYPE_6__ {int vxlan; } ;
struct TYPE_4__ {int tp_dst; } ;
struct TYPE_5__ {TYPE_1__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
           struct mlx5e_priv *VAR_4,
           struct mlx5e_encap_entry *VAR_5,
           struct netlink_ext_ack *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5->tun_info->key.tp_dst);

 VAR_5->tunnel = &VAR_2;

 if (!FUNC_2(VAR_4->mdev->vxlan, VAR_7)) {
  FUNC_0(VAR_6,
       "vxlan udp dport was not registered with the HW");
  FUNC_3(VAR_4->netdev,
       "%d isn't an offloaded vxlan udp dport\n",
       VAR_7);
  return -VAR_0;
 }

 VAR_5->reformat_type = VAR_1;
 return 0;
}
