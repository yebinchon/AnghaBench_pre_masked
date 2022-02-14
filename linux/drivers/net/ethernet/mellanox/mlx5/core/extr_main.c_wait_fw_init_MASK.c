
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*) ;
 unsigned long VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_5, u32 VAR_6,
   u32 VAR_7)
{
 unsigned long VAR_8 = VAR_4 + FUNC_4(VAR_7);
 unsigned long VAR_9 = VAR_4 + FUNC_4(VAR_6);
 int VAR_10 = 0;

 FUNC_0(VAR_3 < VAR_2);

 while (FUNC_1(VAR_5)) {
  if (FUNC_6(VAR_4, VAR_9)) {
   VAR_10 = -VAR_0;
   break;
  }
  if (VAR_7 && FUNC_6(VAR_4, VAR_8)) {
   FUNC_3(VAR_5, "Waiting for FW initialization, timeout abort in %ds\n",
           FUNC_2(VAR_9 - VAR_8) / 1000);
   VAR_8 = VAR_4 + FUNC_4(VAR_7);
  }
  FUNC_5(VAR_1);
 }

 return VAR_10;
}
