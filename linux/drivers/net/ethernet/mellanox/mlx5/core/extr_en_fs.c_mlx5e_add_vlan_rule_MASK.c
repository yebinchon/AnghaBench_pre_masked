
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_flow_spec {int dummy; } ;
typedef enum mlx5e_vlan_rule_type { ____Placeholder_mlx5e_vlan_rule_type } mlx5e_vlan_rule_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5e_priv*,int,int ,struct mlx5_flow_spec*) ;
 int FUNC_1 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5e_priv*) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_3,
          enum mlx5e_vlan_rule_type VAR_4, u16 VAR_5)
{
 struct mlx5_flow_spec *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_4 == VAR_2)
  FUNC_3(VAR_3);

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_1(VAR_6);

 return VAR_7;
}
