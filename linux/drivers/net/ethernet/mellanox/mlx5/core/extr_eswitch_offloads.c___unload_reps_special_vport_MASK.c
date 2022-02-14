
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_eswitch {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_eswitch*,struct mlx5_eswitch_rep*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mlx5_eswitch_rep* FUNC_3 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5_eswitch *VAR_3, u8 VAR_4)
{
 struct mlx5_eswitch_rep *VAR_5;

 if (FUNC_2(VAR_3->dev)) {
  VAR_5 = FUNC_3(VAR_3, VAR_0);
  FUNC_0(VAR_3, VAR_5, VAR_4);
 }

 if (FUNC_1(VAR_3->dev)) {
  VAR_5 = FUNC_3(VAR_3, VAR_1);
  FUNC_0(VAR_3, VAR_5, VAR_4);
 }

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_3, VAR_5, VAR_4);
}
