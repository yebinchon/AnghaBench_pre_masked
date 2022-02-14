
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_core_dev {int dummy; } ;
typedef int __be64 ;


 int* FUNC_0 (struct mlx5_core_dev*,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0, u64 VAR_1[4])
{
 __be64 *VAR_2;
 __be64 *VAR_3;
 int VAR_4;

 VAR_3 =
  FUNC_0(VAR_0, VAR_3);
 VAR_2 =
  FUNC_0(VAR_0, VAR_2);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_1[VAR_4] |= FUNC_1(VAR_3[VAR_4] |
           VAR_2[VAR_4]);
}
