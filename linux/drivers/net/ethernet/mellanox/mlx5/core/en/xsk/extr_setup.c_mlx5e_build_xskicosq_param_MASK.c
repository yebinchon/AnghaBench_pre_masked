
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_sq_param {void* sqc; } ;
struct mlx5e_priv {int dummy; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_sq_param*) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_2,
           u8 VAR_3,
           struct mlx5e_sq_param *VAR_4)
{
 void *VAR_5 = VAR_4->sqc;
 void *VAR_6 = FUNC_0(VAR_5, VAR_5, VAR_6);

 FUNC_2(VAR_2, VAR_4);

 FUNC_1(VAR_6, VAR_6, VAR_0, VAR_3);
}
