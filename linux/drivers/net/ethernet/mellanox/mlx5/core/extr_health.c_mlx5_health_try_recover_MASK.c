
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int intf_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(VAR_4, "handling bad device here\n");
 FUNC_3(VAR_4);
 VAR_5 = VAR_3 + FUNC_5(VAR_2);
 while (FUNC_7(VAR_4)) {
  if (FUNC_9(VAR_3, VAR_5)) {
   FUNC_1(VAR_4,
          "health recovery flow aborted, PCI reads still not working\n");
   return -VAR_0;
  }
  FUNC_6(100);
 }

 FUNC_1(VAR_4, "starting health recovery flow\n");
 FUNC_4(VAR_4);
 if (!FUNC_8(VAR_1, &VAR_4->intf_state) ||
     FUNC_0(VAR_4)) {
  FUNC_1(VAR_4, "health recovery failed\n");
  return -VAR_0;
 }
 return 0;
}
