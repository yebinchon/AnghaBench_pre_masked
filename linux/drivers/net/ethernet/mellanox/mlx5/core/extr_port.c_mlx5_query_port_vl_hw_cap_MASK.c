
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int *,int,int ) ;
 int VAR_0 ;

int FUNC_3(struct mlx5_core_dev *VAR_1,
         u8 *VAR_2, u8 VAR_3)
{
 u32 VAR_4[FUNC_1(VAR_0)];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_4, sizeof(VAR_4), VAR_3);
 if (VAR_5)
  return VAR_5;

 *VAR_2 = FUNC_0(VAR_0, VAR_4, VAR_2);

 return 0;
}
