
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_tirc_config {int rx_hash_fields; } ;
typedef enum mlx5e_traffic_types { ____Placeholder_mlx5e_traffic_types } mlx5e_traffic_types ;


 struct mlx5e_tirc_config* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mlx5e_tirc_config *VAR_1,
     enum mlx5e_traffic_types VAR_2,
     u32 VAR_3)
{
 *VAR_1 = VAR_0[VAR_2];
 VAR_1->rx_hash_fields = VAR_3;
}
