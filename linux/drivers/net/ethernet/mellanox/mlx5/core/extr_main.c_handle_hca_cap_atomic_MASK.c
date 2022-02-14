
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (int ,void*,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,int (*) (struct mlx5_core_dev*,int )) ;
 int FUNC_8 (struct mlx5_core_dev*,void*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_10)
{
 void *VAR_11;
 void *VAR_12;
 int VAR_13 = FUNC_4(VAR_8);
 int VAR_14;
 int VAR_15;

 if (FUNC_2(VAR_10, VAR_4)) {
  VAR_15 = FUNC_7(VAR_10, FUNC_1);
  if (VAR_15)
   return VAR_15;
 } else {
  return 0;
 }

 VAR_14 =
  FUNC_1(VAR_10,
    VAR_9);

 if (VAR_14 != VAR_2)
  return 0;

 VAR_11 = FUNC_6(VAR_13, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_8, VAR_11, VAR_7);


 FUNC_3(VAR_5, VAR_12, VAR_6,
   VAR_2);

 VAR_15 = FUNC_8(VAR_10, VAR_11, VAR_13, VAR_3);

 FUNC_5(VAR_11);
 return VAR_15;
}
