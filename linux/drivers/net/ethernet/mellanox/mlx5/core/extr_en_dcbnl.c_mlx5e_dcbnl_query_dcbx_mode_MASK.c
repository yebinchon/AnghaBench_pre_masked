
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_priv {int mdev; } ;
typedef enum mlx5_dcbx_oper_mode { ____Placeholder_mlx5_dcbx_oper_mode } mlx5_dcbx_oper_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_4,
     enum mlx5_dcbx_oper_mode *VAR_5)
{
 u32 VAR_6[FUNC_1(VAR_2)];

 *VAR_5 = VAR_1;

 if (!FUNC_2(VAR_4->mdev, VAR_6))
  *VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_3);




 if (*VAR_5 != VAR_1)
  *VAR_5 = VAR_0;
}
