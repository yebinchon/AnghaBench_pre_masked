
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_cq_param {int cq_period_mode; void* cqc; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_cq_param*) ;

void FUNC_2(struct mlx5e_priv *VAR_2,
         u8 VAR_3,
         struct mlx5e_cq_param *VAR_4)
{
 void *VAR_5 = VAR_4->cqc;

 FUNC_0(VAR_5, VAR_5, VAR_1, VAR_3);

 FUNC_1(VAR_2, VAR_4);

 VAR_4->cq_period_mode = VAR_0;
}
