
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rep_indr_block_priv {int netdev; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (int ,void*,struct mlx5e_rep_indr_block_priv*) ;

__attribute__((used)) static int FUNC_1(enum tc_setup_type VAR_1,
      void *VAR_2, void *VAR_3)
{
 struct mlx5e_rep_indr_block_priv *VAR_4 = VAR_3;

 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_4->netdev, VAR_2, VAR_4);
 default:
  return -VAR_0;
 }
}
