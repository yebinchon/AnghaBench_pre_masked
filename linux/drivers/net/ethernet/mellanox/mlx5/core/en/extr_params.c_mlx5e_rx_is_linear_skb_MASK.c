
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {int lro_en; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;

bool FUNC_2(struct mlx5e_params *VAR_1,
       struct mlx5e_xsk_param *VAR_2)
{



 u32 VAR_3 = FUNC_0(FUNC_1(VAR_1, VAR_2),
     FUNC_1(VAR_1, ((void*)0)));

 return !VAR_1->lro_en && VAR_3 <= VAR_0;
}
