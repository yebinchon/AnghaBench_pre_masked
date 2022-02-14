
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct flow_block_offload {int unlocked_driver_cb; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;


 int FUNC_0 (void*,int *,int ,struct mlx5e_priv*,struct mlx5e_priv*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5e_priv*,void*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, enum tc_setup_type VAR_4,
     void *VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 128:
  return FUNC_1(VAR_6, VAR_5);
 default:
  return -VAR_0;
 }
}
