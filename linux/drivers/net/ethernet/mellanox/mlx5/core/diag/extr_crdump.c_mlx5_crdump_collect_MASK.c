
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,int *) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*,int ,int ) ;

int FUNC_7(struct mlx5_core_dev *VAR_5, u32 *VAR_6)
{
 int VAR_7;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_5, "crdump: failed to lock vsc gw err %d\n",
          VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_6(VAR_5, VAR_1,
         VAR_2);
 if (VAR_7) {
  FUNC_0(VAR_5, "Failed to lock SW reset semaphore\n");
  goto unlock_gw;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_3, ((void*)0));
 if (VAR_7)
  goto unlock_sem;

 VAR_7 = FUNC_2(VAR_5, VAR_6);

unlock_sem:
 FUNC_6(VAR_5, VAR_1, VAR_4);
unlock_gw:
 FUNC_5(VAR_5);
 return VAR_7;
}
