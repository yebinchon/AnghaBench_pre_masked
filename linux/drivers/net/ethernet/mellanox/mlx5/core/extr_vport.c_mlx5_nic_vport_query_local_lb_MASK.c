
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int disable_uc_local_lb; int disable_mc_local_lb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,int *,int) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct mlx5_core_dev *VAR_6, bool *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_5);
 u32 *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_6, 0, VAR_9, VAR_8);
 if (VAR_11)
  goto out;

 VAR_10 = FUNC_0(VAR_5, VAR_9,
    VAR_4.disable_mc_local_lb) << VAR_2;

 VAR_10 |= FUNC_0(VAR_5, VAR_9,
     VAR_4.disable_uc_local_lb) << VAR_3;

 *VAR_7 = !VAR_10;

out:
 FUNC_2(VAR_9);
 return VAR_11;
}
