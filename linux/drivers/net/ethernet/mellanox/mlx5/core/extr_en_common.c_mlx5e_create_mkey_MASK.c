
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_mkey {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int*,int ) ;
 int VAR_2 ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_core_mkey*,int*,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_11, u32 VAR_12,
        struct mlx5_core_mkey *VAR_13)
{
 int VAR_14 = FUNC_2(VAR_4);
 void *VAR_15;
 u32 *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_4(VAR_14, VAR_1);
 if (!VAR_16)
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_4, VAR_16, VAR_8);
 FUNC_1(VAR_15, VAR_15, VAR_3, VAR_2);
 FUNC_1(VAR_15, VAR_15, VAR_7, 1);
 FUNC_1(VAR_15, VAR_15, VAR_6, 1);

 FUNC_1(VAR_15, VAR_15, VAR_9, VAR_12);
 FUNC_1(VAR_15, VAR_15, VAR_5, 1);
 FUNC_1(VAR_15, VAR_15, VAR_10, 0xffffff);

 VAR_17 = FUNC_5(VAR_11, VAR_13, VAR_16, VAR_14);

 FUNC_3(VAR_16);
 return VAR_17;
}
