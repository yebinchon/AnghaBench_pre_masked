
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mlx5_core_dev*,char*,scalar_t__) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct mlx5_core_dev *VAR_4,
        int VAR_5,
        bool *VAR_6)
{
 u32 VAR_7[FUNC_1(VAR_3)];
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_7, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_8);

 if (VAR_8 == VAR_2) {
  *VAR_6 = 0;
 } else if (VAR_8 == VAR_1) {
  *VAR_6 = 1;
 } else {
  FUNC_2(VAR_4,
          "mcqs: can't read pending fw version while fw state is %d\n",
          VAR_8);
  return -VAR_0;
 }
 return 0;
}
