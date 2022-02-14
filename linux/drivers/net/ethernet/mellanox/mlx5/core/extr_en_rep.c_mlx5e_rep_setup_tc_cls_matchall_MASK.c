
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cls_matchall_offload {int command; } ;
struct mlx5e_priv {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct mlx5e_priv*,struct tc_cls_matchall_offload*) ;
 int FUNC_1 (struct mlx5e_priv*,struct tc_cls_matchall_offload*) ;
 int FUNC_2 (struct mlx5e_priv*,struct tc_cls_matchall_offload*) ;

__attribute__((used)) static
int FUNC_3(struct mlx5e_priv *VAR_1,
        struct tc_cls_matchall_offload *VAR_2)
{
 switch (VAR_2->command) {
 case 129:
  return FUNC_0(VAR_1, VAR_2);
 case 130:
  return FUNC_1(VAR_1, VAR_2);
 case 128:
  FUNC_2(VAR_1, VAR_2);
  return 0;
 default:
  return -VAR_0;
 }
}
