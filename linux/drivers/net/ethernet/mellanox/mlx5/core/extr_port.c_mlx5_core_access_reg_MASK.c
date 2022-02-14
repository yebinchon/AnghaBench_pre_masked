
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_7(struct mlx5_core_dev *VAR_10, void *VAR_11,
    int VAR_12, void *VAR_13, int VAR_14,
    u16 VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18 = FUNC_2(VAR_4) + VAR_14;
 int VAR_19 = FUNC_2(VAR_3) + VAR_12;
 int VAR_20 = -VAR_0;
 u32 *VAR_21 = ((void*)0);
 u32 *VAR_22 = ((void*)0);
 void *VAR_23;

 VAR_22 = FUNC_4(VAR_19, VAR_1);
 VAR_21 = FUNC_4(VAR_18, VAR_1);
 if (!VAR_22 || !VAR_21)
  goto out;

 VAR_23 = FUNC_0(VAR_3, VAR_22, VAR_8);
 FUNC_5(VAR_23, VAR_11, VAR_12);

 FUNC_1(VAR_3, VAR_22, VAR_7, VAR_2);
 FUNC_1(VAR_3, VAR_22, VAR_6, !VAR_17);
 FUNC_1(VAR_3, VAR_22, VAR_5, VAR_16);
 FUNC_1(VAR_3, VAR_22, VAR_9, VAR_15);

 VAR_20 = FUNC_6(VAR_10, VAR_22, VAR_19, VAR_21, VAR_18);
 if (VAR_20)
  goto out;

 VAR_23 = FUNC_0(VAR_4, VAR_21, VAR_8);
 FUNC_5(VAR_13, VAR_23, VAR_14);

out:
 FUNC_3(VAR_21);
 FUNC_3(VAR_22);
 return VAR_20;
}
