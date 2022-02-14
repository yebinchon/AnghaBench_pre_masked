
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {int sw_mtu; } ;


 scalar_t__ FUNC_0 (struct mlx5e_params*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;

u32 FUNC_2(struct mlx5e_params *VAR_0,
        struct mlx5e_xsk_param *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0, VAR_0->sw_mtu);
 u16 VAR_3 = FUNC_1(VAR_0, VAR_1);

 return VAR_3 + VAR_2;
}
