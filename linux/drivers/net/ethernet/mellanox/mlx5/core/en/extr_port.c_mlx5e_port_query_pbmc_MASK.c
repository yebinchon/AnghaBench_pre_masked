
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_5(struct mlx5_core_dev *VAR_5, void *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_4);
 void *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_8, VAR_3, 1);
 VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_7, VAR_6, VAR_7, VAR_2, 0, 0);

 FUNC_2(VAR_8);
 return VAR_9;
}
