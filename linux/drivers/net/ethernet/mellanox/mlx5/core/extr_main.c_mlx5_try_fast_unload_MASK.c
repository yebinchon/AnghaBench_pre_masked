
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*,int) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_3)
{
 bool VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = 1;

 VAR_4 = FUNC_0(VAR_3, VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_5);

 FUNC_3(VAR_3, "force teardown firmware support=%d\n", VAR_5);
 FUNC_3(VAR_3, "fast teardown firmware support=%d\n", VAR_4);

 if (!VAR_4 && !VAR_5)
  return -VAR_1;

 if (VAR_3->state == VAR_2) {
  FUNC_3(VAR_3, "Device in internal error state, giving up\n");
  return -VAR_0;
 }




 FUNC_5(VAR_3);
 FUNC_8(VAR_3, 0);

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  goto succeed;

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  goto succeed;

 FUNC_3(VAR_3, "Firmware couldn't do fast unload error: %d\n", VAR_6);
 FUNC_7(VAR_3);
 return VAR_6;

succeed:
 FUNC_6(VAR_3, 1);






 FUNC_4(VAR_3);

 return 0;
}
