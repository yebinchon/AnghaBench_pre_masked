
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

bool FUNC_3(struct mlx5_core_dev *VAR_5)
{
 bool VAR_6 = FUNC_1(VAR_5, VAR_3) &&
  FUNC_1(VAR_5, VAR_4) &&
  FUNC_0(VAR_5, VAR_2);
 u16 VAR_7 = FUNC_1(VAR_5, VAR_1);
 bool VAR_8 = VAR_0 <= VAR_7;

 if (!VAR_6)
  return 0;
 if (!VAR_8) {
  FUNC_2(VAR_5, "Cannot support Striding RQ: UMR WQE size (%d) exceeds maximum supported (%d).\n",
          (int)VAR_0, VAR_7);
  return 0;
 }
 return 1;
}
