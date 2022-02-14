
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int mdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->mdev, "create tises failed, %d\n", VAR_1);
  return VAR_1;
 }




 return 0;
}
