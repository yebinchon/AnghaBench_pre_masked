
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
     int VAR_2, u8 *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_1(VAR_1);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;

 switch (VAR_2) {
 case 128:
 case 129:
  *VAR_3 = FUNC_0(VAR_5) + 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
