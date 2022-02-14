
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_vsc_state { ____Placeholder_mlx5_vsc_state } mlx5_vsc_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,scalar_t__*) ;

int FUNC_5(struct mlx5_core_dev *VAR_5, u16 VAR_6,
      enum mlx5_vsc_state VAR_7)
{
 u32 VAR_8, VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_2, ((void*)0));
 if (VAR_10) {
  FUNC_0(VAR_5, "Failed to set gw space %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_7 == VAR_3) {

  VAR_10 = FUNC_4(VAR_5, VAR_4, &VAR_9);
  if (VAR_10)
   return VAR_10;
 }


 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_9);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_5, VAR_6, &VAR_8);
 if (VAR_10)
  return -VAR_1;

 if (VAR_8 != VAR_9)
  return -VAR_0;

 return 0;
}
