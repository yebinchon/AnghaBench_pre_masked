
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_encap_entry {int reformat_type; int * tunnel; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_2,
            struct mlx5e_priv *VAR_3,
            struct mlx5e_encap_entry *VAR_4,
            struct netlink_ext_ack *VAR_5)
{
 VAR_4->tunnel = &VAR_1;
 VAR_4->reformat_type = VAR_0;
 return 0;
}
