
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(struct mlx5_core_dev *VAR_4, bool *VAR_5,
    bool *VAR_6)
{
 u32 VAR_7[FUNC_2(VAR_2)];

 *VAR_5 = 0;
 *VAR_6 = 1;

 if (!FUNC_0(VAR_4, VAR_3))
  return;

 if (FUNC_3(VAR_4, VAR_7, sizeof(VAR_7)))
  return;

 *VAR_5 = !!(FUNC_1(VAR_2, VAR_7, VAR_0));
 *VAR_6 = !!(FUNC_1(VAR_2, VAR_7, VAR_1));
}
