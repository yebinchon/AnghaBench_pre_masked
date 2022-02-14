
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5e_priv*,int ) ;
 int FUNC_2 (struct mlx5e_priv*,int ) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_3, __be16 VAR_4, u16 VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_3(VAR_3);

 if (FUNC_0(VAR_4) == VAR_2)
  return FUNC_1(VAR_6, VAR_5);
 else if (FUNC_0(VAR_4) == VAR_1)
  return FUNC_2(VAR_6, VAR_5);

 return -VAR_0;
}
