
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
struct ieee_ets {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ieee_ets*) ;
 int FUNC_1 (struct net_device*,struct ieee_ets*,int) ;
 int FUNC_2 (struct mlx5e_priv*,struct ieee_ets*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
       struct ieee_ets *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (!FUNC_0(VAR_3->mdev, VAR_2))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 return 0;
}
