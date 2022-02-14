
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mlx5_core_mkey {int dummy; } ;
struct TYPE_2__ {int pdn; } ;
struct mlx5_core_dev {TYPE_1__ mlx5e_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct mlx5_core_dev*,struct mlx5_core_mkey*,int *,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_8(struct mlx5_core_dev *VAR_15,
     u64 VAR_16, u8 VAR_17,
     struct mlx5_core_mkey *VAR_18)
{
 int VAR_19 = FUNC_4(VAR_4);
 void *VAR_20;
 u32 *VAR_21;
 int VAR_22;

 VAR_21 = FUNC_6(VAR_19, VAR_1);
 if (!VAR_21)
  return -VAR_0;

 VAR_20 = FUNC_0(VAR_4, VAR_21, VAR_10);

 FUNC_2(VAR_20, VAR_20, VAR_5, 1);
 FUNC_2(VAR_20, VAR_20, VAR_14, 1);
 FUNC_2(VAR_20, VAR_20, VAR_9, 1);
 FUNC_2(VAR_20, VAR_20, VAR_8, 1);
 FUNC_2(VAR_20, VAR_20, VAR_3, VAR_2);

 FUNC_2(VAR_20, VAR_20, VAR_12, 0xffffff);
 FUNC_2(VAR_20, VAR_20, VAR_11, VAR_15->mlx5e_res.pdn);
 FUNC_3(VAR_20, VAR_20, VAR_6, VAR_16 << VAR_17);
 FUNC_2(VAR_20, VAR_20, VAR_13,
   FUNC_1(VAR_16));
 FUNC_2(VAR_20, VAR_20, VAR_7, VAR_17);

 VAR_22 = FUNC_7(VAR_15, VAR_18, VAR_21, VAR_19);

 FUNC_5(VAR_21);
 return VAR_22;
}
