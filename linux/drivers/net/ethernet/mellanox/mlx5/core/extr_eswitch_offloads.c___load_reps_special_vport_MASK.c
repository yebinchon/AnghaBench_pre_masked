
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
 int FUNC_1 (struct mlx5_eswitch*,struct mlx5_eswitch_rep*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct mlx5_eswitch_rep* FUNC_4 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_eswitch *VAR_3, u8 VAR_4)
{
 struct mlx5_eswitch_rep *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_2);
 VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (FUNC_2(VAR_3->dev)) {
  VAR_5 = FUNC_4(VAR_3, VAR_1);
  VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_4);
  if (VAR_6)
   goto err_pf;
 }

 if (FUNC_3(VAR_3->dev)) {
  VAR_5 = FUNC_4(VAR_3, VAR_0);
  VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_4);
  if (VAR_6)
   goto err_ecpf;
 }

 return 0;

err_ecpf:
 if (FUNC_2(VAR_3->dev)) {
  VAR_5 = FUNC_4(VAR_3, VAR_1);
  FUNC_1(VAR_3, VAR_5, VAR_4);
 }

err_pf:
 VAR_5 = FUNC_4(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_5, VAR_4);
 return VAR_6;
}
