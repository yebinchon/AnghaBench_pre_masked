
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int *,int,int ,int) ;
 int VAR_1 ;

void FUNC_3(struct mlx5_core_dev *VAR_2, u8 *VAR_3,
     u8 *VAR_4, u8 *VAR_5)
{
 u32 VAR_6[FUNC_1(VAR_1)];

 *VAR_3 = 0;
 *VAR_4 = 0;
 *VAR_5 = 0;

 if (FUNC_2(VAR_2, VAR_6, sizeof(VAR_6), VAR_0, 1))
  return;

 *VAR_3 = FUNC_0(VAR_1, VAR_6, VAR_3);
 *VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_4);
 *VAR_5 = FUNC_0(VAR_1, VAR_6, VAR_5);
}
