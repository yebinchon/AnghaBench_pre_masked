
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 int VAR_6;


 VAR_6 = 1;

 VAR_6 += FUNC_0(VAR_5, VAR_3) ?
       VAR_0 : 0;

 VAR_6 += FUNC_0(VAR_5, VAR_2) ?
       VAR_1 : 0;

 return VAR_6;
}
