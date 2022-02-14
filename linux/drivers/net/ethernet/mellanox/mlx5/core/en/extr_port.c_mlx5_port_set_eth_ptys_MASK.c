
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int*,int,int*,int,int ,int ,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(struct mlx5_core_dev *VAR_8, bool VAR_9,
      u32 VAR_10, bool VAR_11)
{
 u32 VAR_12[FUNC_1(VAR_7)];
 u32 VAR_13[FUNC_1(VAR_7)];
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16;

 FUNC_4(VAR_8, &VAR_16, &VAR_15,
        &VAR_14);
 if (!VAR_15 && VAR_9)
  return -VAR_0;

 FUNC_2(VAR_13, 0, sizeof(VAR_13));

 FUNC_0(VAR_7, VAR_13, VAR_5, 1);
 FUNC_0(VAR_7, VAR_13, VAR_14, VAR_9);
 FUNC_0(VAR_7, VAR_13, VAR_6, VAR_1);
 if (VAR_11)
  FUNC_0(VAR_7, VAR_13, VAR_4, VAR_10);
 else
  FUNC_0(VAR_7, VAR_13, VAR_3, VAR_10);

 return FUNC_3(VAR_8, VAR_13, sizeof(VAR_13), VAR_12,
       sizeof(VAR_12), VAR_2, 0, 1);
}
