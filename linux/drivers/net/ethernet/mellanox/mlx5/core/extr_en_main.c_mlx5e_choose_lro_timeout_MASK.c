
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct mlx5_core_dev *VAR_2, u32 VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0 - 1; VAR_4++)
  if (FUNC_0(VAR_2, VAR_1[VAR_4]) >= VAR_3)
   break;

 return FUNC_0(VAR_2, VAR_1[VAR_4]);
}
