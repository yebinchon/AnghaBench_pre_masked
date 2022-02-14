
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_sq_param {void* sqc; } ;
struct mlx5e_priv {int mdev; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_sq_param*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

void FUNC_4(struct mlx5e_priv *VAR_4,
        u8 VAR_5,
        struct mlx5e_sq_param *VAR_6)
{
 void *VAR_7 = VAR_6->sqc;
 void *VAR_8 = FUNC_0(VAR_7, VAR_7, VAR_8);

 FUNC_3(VAR_4, VAR_6);

 FUNC_2(VAR_8, VAR_8, VAR_0, VAR_5);
 FUNC_2(VAR_7, VAR_7, VAR_1, FUNC_1(VAR_4->mdev, VAR_2));
}
