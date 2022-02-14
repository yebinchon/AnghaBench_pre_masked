
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int VAR_0 ;

__attribute__((used)) static u8 FUNC_3(struct mlx5_core_dev *VAR_1, int VAR_2)
{
 u16 VAR_3 = FUNC_1(VAR_1) ? 0 : FUNC_0(VAR_1, VAR_0);

 return (VAR_2 + VAR_3) % FUNC_2(VAR_1);
}
