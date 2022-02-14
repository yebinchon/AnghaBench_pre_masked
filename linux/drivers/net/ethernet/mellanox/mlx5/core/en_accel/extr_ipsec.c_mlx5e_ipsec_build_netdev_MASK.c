
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hw_enc_features; int hw_features; int features; int * xfrmdev_ops; } ;
struct mlx5e_priv {int ipsec; struct net_device* netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_4(struct mlx5e_priv *VAR_9)
{
 struct mlx5_core_dev *VAR_10 = VAR_9->mdev;
 struct net_device *VAR_11 = VAR_9->netdev;

 if (!VAR_9->ipsec)
  return;

 if (!(FUNC_1(VAR_10) & VAR_0) ||
     !FUNC_0(VAR_10, VAR_6)) {
  FUNC_2(VAR_10, "mlx5e: ESP and SWP offload not supported\n");
  return;
 }

 FUNC_3(VAR_10, "mlx5e: IPSec ESP acceleration enabled\n");
 VAR_11->xfrmdev_ops = &VAR_5;
 VAR_11->features |= VAR_3;
 VAR_11->hw_enc_features |= VAR_3;

 if (!FUNC_0(VAR_10, VAR_7)) {
  FUNC_2(VAR_10, "mlx5e: SWP checksum not supported\n");
  return;
 }

 VAR_11->features |= VAR_4;
 VAR_11->hw_enc_features |= VAR_4;

 if (!(FUNC_1(VAR_10) & VAR_1) ||
     !FUNC_0(VAR_10, VAR_8)) {
  FUNC_2(VAR_10, "mlx5e: ESP LSO not supported\n");
  return;
 }

 FUNC_2(VAR_10, "mlx5e: ESP GSO capability turned on\n");
 VAR_11->features |= VAR_2;
 VAR_11->hw_features |= VAR_2;
 VAR_11->hw_enc_features |= VAR_2;
}
