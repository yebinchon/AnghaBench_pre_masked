
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,unsigned int,unsigned int*,int *) ;

int FUNC_1(struct mlx5_core_dev *VAR_0, u32 *VAR_1,
    int VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;

 while (VAR_4 < VAR_2) {
  if (FUNC_0(VAR_0, VAR_4, &VAR_3,
       &VAR_1[(VAR_4 >> 2)]))
   return VAR_4;

  VAR_4 = VAR_3;
 }
 return VAR_2;
}
