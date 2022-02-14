
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int *,int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
      u16 *VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_3(VAR_3);
 struct mlx5_core_dev *VAR_6 = VAR_5->mdev;

 if (!FUNC_1((VAR_5)->mdev, VAR_1) ||
     !FUNC_0((VAR_5)->mdev, VAR_2))
  return -VAR_0;

 return FUNC_2(VAR_6, VAR_4, ((void*)0));
}
