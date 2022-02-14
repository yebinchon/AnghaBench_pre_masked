
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx5_eq {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;





 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_eq*,int *,int) ;
 int FUNC_6 (struct mlx5_core_dev*,char*) ;
 int VAR_6 ;

__attribute__((used)) static u64 FUNC_7(struct mlx5_core_dev *VAR_7, struct mlx5_eq *VAR_8,
    int VAR_9)
{
 int VAR_10 = FUNC_2(VAR_6);
 u64 VAR_11 = 0;
 void *VAR_12;
 u32 *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(VAR_10, VAR_0);
 if (!VAR_13)
  return VAR_11;

 VAR_14 = FUNC_5(VAR_7, VAR_8, VAR_13, VAR_10);
 if (VAR_14) {
  FUNC_6(VAR_7, "failed to query eq\n");
  goto out;
 }
 VAR_12 = FUNC_0(VAR_6, VAR_13, VAR_1);

 switch (VAR_9) {
 case 128:
  VAR_11 = 1 << FUNC_1(VAR_2, VAR_12, VAR_4);
  break;
 case 130:
  VAR_11 = FUNC_1(VAR_2, VAR_12, VAR_3);
  break;
 case 129:
  VAR_11 = FUNC_1(VAR_2, VAR_12, VAR_5) + 12;
  break;
 }

out:
 FUNC_3(VAR_13);
 return VAR_11;
}
