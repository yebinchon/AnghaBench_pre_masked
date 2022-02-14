
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ethtool_fecparam {void* fec; void* active_fec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,scalar_t__*,scalar_t__*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;
 void* FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
         struct ethtool_fecparam *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_1(VAR_2);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 u8 VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, &VAR_7, &VAR_6);

 if (VAR_8)
  return VAR_8;

 VAR_3->active_fec = FUNC_2((u_long)VAR_7,
      sizeof(u32) * VAR_0);

 if (!VAR_3->active_fec)
  return -VAR_1;

 VAR_3->fec = FUNC_2((u_long)VAR_6,
      sizeof(u8) * VAR_0);

 return 0;
}
