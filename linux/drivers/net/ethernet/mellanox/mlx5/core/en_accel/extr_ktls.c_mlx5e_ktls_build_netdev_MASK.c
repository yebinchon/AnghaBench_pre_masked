
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * tlsdev_ops; int features; int hw_features; } ;
struct mlx5e_priv {int mdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

void FUNC_1(struct mlx5e_priv *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;

 if (!FUNC_0(VAR_2->mdev))
  return;

 VAR_3->hw_features |= VAR_0;
 VAR_3->features |= VAR_0;

 VAR_3->tlsdev_ops = &VAR_1;
}
