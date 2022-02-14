
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int const**,int*,int) ;

u32 FUNC_2(struct mlx5_core_dev *VAR_0, u32 VAR_1,
     bool VAR_2)
{
 unsigned long VAR_3 = VAR_1;
 const u32 *VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6;
 int VAR_7;

 FUNC_1(VAR_0, &VAR_4, &VAR_6, VAR_2);
 VAR_7 = FUNC_0(&VAR_3, VAR_6);
 if (VAR_7 < VAR_6)
  VAR_5 = VAR_4[VAR_7];
 return VAR_5;
}
