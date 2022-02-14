
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_tunnel {int (* init_encap_attr ) (struct net_device*,struct mlx5e_priv*,struct mlx5e_encap_entry*,struct netlink_ext_ack*) ;} ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_encap_entry {int reformat_type; } ;


 int VAR_0 ;
 struct mlx5e_tc_tunnel* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct mlx5e_priv*,struct mlx5e_encap_entry*,struct netlink_ext_ack*) ;

int FUNC_2(struct net_device *VAR_1,
     struct mlx5e_priv *VAR_2,
     struct mlx5e_encap_entry *VAR_3,
     struct netlink_ext_ack *VAR_4)
{
 struct mlx5e_tc_tunnel *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5) {
  VAR_3->reformat_type = -1;
  return -VAR_0;
 }

 return VAR_5->init_encap_attr(VAR_1, VAR_2, VAR_3, VAR_4);
}
