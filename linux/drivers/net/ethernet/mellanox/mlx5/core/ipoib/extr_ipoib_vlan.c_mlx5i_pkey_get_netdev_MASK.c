
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qpn_to_netdev {struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct mlx5i_priv {TYPE_1__* qpn_htbl; } ;
struct TYPE_2__ {int buckets; } ;


 struct qpn_to_netdev* FUNC_0 (int ,int ) ;
 struct mlx5i_priv* FUNC_1 (struct net_device*) ;

struct net_device *FUNC_2(struct net_device *VAR_0, u32 VAR_1)
{
 struct mlx5i_priv *VAR_2 = FUNC_1(VAR_0);
 struct qpn_to_netdev *VAR_3;

 VAR_3 = FUNC_0(VAR_2->qpn_htbl->buckets, VAR_1);
 if (!VAR_3)
  return ((void*)0);

 return VAR_3->netdev;
}
