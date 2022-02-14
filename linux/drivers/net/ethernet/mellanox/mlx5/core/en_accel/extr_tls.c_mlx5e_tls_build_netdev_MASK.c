
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int * tlsdev_ops; int hw_features; int features; } ;
struct mlx5e_priv {int mdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int VAR_6 ;

void FUNC_4(struct mlx5e_priv *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->netdev;
 u32 VAR_9;

 if (FUNC_0(VAR_7->mdev)) {
  FUNC_3(VAR_7);
  return;
 }

 if (!FUNC_1(VAR_7->mdev))
  return;

 VAR_9 = FUNC_2(VAR_7->mdev);
 if (VAR_9 & VAR_2) {
  VAR_8->features |= VAR_4;
  VAR_8->hw_features |= VAR_4;
 }

 if (VAR_9 & VAR_1) {
  VAR_8->features |= VAR_3;
  VAR_8->hw_features |= VAR_3;
 }

 if (!(VAR_9 & VAR_0)) {
  VAR_8->features &= ~VAR_5;
  VAR_8->hw_features &= ~VAR_5;
 }

 VAR_8->tlsdev_ops = &VAR_6;
}
