
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,unsigned long*,unsigned long*) ;
 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_2(struct mlx5e_priv *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;
 u8 VAR_4;
 u8 VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_3, VAR_1) != VAR_0)
  return 0;

 VAR_6 = FUNC_1(VAR_3, &VAR_4, &VAR_5);

 return VAR_6 ? 0 : VAR_4 | VAR_5;
}
