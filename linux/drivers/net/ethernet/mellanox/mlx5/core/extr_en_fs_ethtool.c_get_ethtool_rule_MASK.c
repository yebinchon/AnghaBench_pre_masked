
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_ethtool_rule {int dummy; } ;


 int VAR_0 ;
 struct mlx5e_ethtool_rule* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_ethtool_rule*) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_ethtool_rule*) ;
 struct mlx5e_ethtool_rule* FUNC_3 (struct mlx5e_priv*,int) ;
 struct mlx5e_ethtool_rule* FUNC_4 (int,int ) ;

__attribute__((used)) static struct mlx5e_ethtool_rule *FUNC_5(struct mlx5e_priv *VAR_2,
         int VAR_3)
{
 struct mlx5e_ethtool_rule *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4)
  FUNC_2(VAR_2, VAR_4);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_2, VAR_4);
 return VAR_4;
}
