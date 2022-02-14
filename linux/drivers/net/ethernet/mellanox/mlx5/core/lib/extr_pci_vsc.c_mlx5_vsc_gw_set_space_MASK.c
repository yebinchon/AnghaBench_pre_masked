
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,scalar_t__*) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,scalar_t__) ;

int FUNC_6(struct mlx5_core_dev *VAR_11, u16 VAR_12,
     u32 *VAR_13)
{
 int VAR_14;
 u32 VAR_15 = 0;

 if (!FUNC_3(VAR_11))
  return -VAR_0;

 if (VAR_13)
  *VAR_13 = 0;


 VAR_14 = FUNC_4(VAR_11, VAR_4, &VAR_15);
 if (VAR_14)
  goto out;


 VAR_15 = FUNC_1(VAR_15, VAR_12, VAR_8, VAR_7);
 VAR_14 = FUNC_5(VAR_11, VAR_4, VAR_15);
 if (VAR_14)
  goto out;


 VAR_14 = FUNC_4(VAR_11, VAR_4, &VAR_15);
 if (VAR_14)
  goto out;

 if (FUNC_0(VAR_15, VAR_10, VAR_9) == 0)
  return -VAR_0;


 if (VAR_13 &&
     FUNC_0(VAR_15, VAR_6, VAR_5)) {
  VAR_14 = FUNC_4(VAR_11, VAR_3, &VAR_15);
  if (VAR_14) {
   FUNC_2(VAR_11, "Failed to get max space size\n");
   goto out;
  }
  *VAR_13 = FUNC_0(VAR_15, VAR_2,
            VAR_1);
 }
 return 0;

out:
 return VAR_14;
}
