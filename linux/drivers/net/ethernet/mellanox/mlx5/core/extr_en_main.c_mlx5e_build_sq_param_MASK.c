
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_sq_param {void* sqc; } ;
struct mlx5e_priv {int mdev; } ;
struct mlx5e_params {int log_sq_size; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5e_priv*,struct mlx5e_sq_param*) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_5(struct mlx5e_priv *VAR_2,
     struct mlx5e_params *VAR_3,
     struct mlx5e_sq_param *VAR_4)
{
 void *VAR_5 = VAR_4->sqc;
 void *VAR_6 = FUNC_0(VAR_5, VAR_5, VAR_6);
 bool VAR_7;

 VAR_7 = FUNC_3(VAR_2->mdev) ||
      !!FUNC_1(VAR_2->mdev);
 FUNC_4(VAR_2, VAR_4);
 FUNC_2(VAR_6, VAR_6, VAR_0, VAR_3->log_sq_size);
 FUNC_2(VAR_5, VAR_5, VAR_7, VAR_7);
}
