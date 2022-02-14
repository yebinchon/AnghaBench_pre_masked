
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ crdump_size; } ;
struct mlx5_priv {TYPE_1__ health; } ;
struct mlx5_core_dev {struct mlx5_priv priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,scalar_t__*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;

int FUNC_7(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_priv *VAR_3 = &VAR_2->priv;
 u32 VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_2) || !FUNC_3(VAR_2) ||
     FUNC_2(VAR_2))
  return 0;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_5(VAR_2, VAR_1,
        &VAR_4);
 if (VAR_5) {

  FUNC_6(VAR_2);
  return 0;
 }

 if (!VAR_4) {
  FUNC_1(VAR_2, "Invalid Crspace size, zero\n");
  FUNC_6(VAR_2);
  return -VAR_0;
 }

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3->health.crdump_size = VAR_4;
 return 0;
}
