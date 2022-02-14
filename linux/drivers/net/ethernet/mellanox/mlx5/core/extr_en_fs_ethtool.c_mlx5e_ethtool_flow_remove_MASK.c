
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_ethtool_rule {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_ethtool_rule*) ;
 struct mlx5e_ethtool_rule* FUNC_1 (struct mlx5e_priv*,int) ;

__attribute__((used)) static int
FUNC_2(struct mlx5e_priv *VAR_3, int VAR_4)
{
 struct mlx5e_ethtool_rule *VAR_5;
 int VAR_6 = 0;

 if (VAR_4 >= VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_3, VAR_5);
out:
 return VAR_6;
}
