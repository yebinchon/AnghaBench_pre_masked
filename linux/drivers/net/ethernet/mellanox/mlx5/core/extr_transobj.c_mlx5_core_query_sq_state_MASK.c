
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,void*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,void*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_6(struct mlx5_core_dev *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 void *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_2);
 VAR_7 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_7);
 if (VAR_10)
  goto out;

 VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_3);
 *VAR_6 = FUNC_1(VAR_8, VAR_8, VAR_6);

out:
 FUNC_3(VAR_7);
 return VAR_10;
}
