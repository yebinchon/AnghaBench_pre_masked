
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_sq_param {int is_mpw; void* sqc; } ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_params {int log_sq_size; } ;


 int FUNC_0 (struct mlx5e_params*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_sq_param*) ;
 void* VAR_2 ;

void FUNC_4(struct mlx5e_priv *VAR_3,
        struct mlx5e_params *VAR_4,
        struct mlx5e_sq_param *VAR_5)
{
 void *VAR_6 = VAR_5->sqc;
 void *VAR_7 = FUNC_1(VAR_6, VAR_6, VAR_7);

 FUNC_3(VAR_3, VAR_5);
 FUNC_2(VAR_7, VAR_7, VAR_1, VAR_4->log_sq_size);
 VAR_5->is_mpw = FUNC_0(VAR_4, VAR_0);
}
