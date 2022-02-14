
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct mlx5_core_dev*,int *,size_t,void*,size_t,int ,int ,int ) ;
 int VAR_6 ;

int FUNC_4(struct mlx5_core_dev *VAR_7,
        u8 VAR_8, void *VAR_9, size_t VAR_10)
{
 u32 *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  return VAR_12;
 }

 FUNC_0(VAR_6, VAR_11, VAR_5, VAR_8);

 FUNC_0(VAR_6, VAR_11, VAR_4, VAR_2);
 VAR_12 = FUNC_3(VAR_7, VAR_11, VAR_10, VAR_9,
       VAR_10, VAR_3, 0, 0);

 FUNC_1(VAR_11);
 return VAR_12;
}
