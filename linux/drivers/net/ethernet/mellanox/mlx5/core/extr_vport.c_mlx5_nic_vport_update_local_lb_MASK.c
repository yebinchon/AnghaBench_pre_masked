
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int disable_uc_local_lb; int disable_mc_local_lb; } ;
struct TYPE_3__ {int disable_uc_local_lb; int disable_mc_local_lb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,char*) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

int FUNC_7(struct mlx5_core_dev *VAR_7, bool VAR_8)
{
 int VAR_9 = FUNC_2(VAR_5);
 void *VAR_10;
 int VAR_11;

 if (!FUNC_0(VAR_7, VAR_2) &&
     !FUNC_0(VAR_7, VAR_3))
  return 0;

 VAR_10 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_10,
   VAR_6.disable_mc_local_lb, !VAR_8);
 FUNC_1(VAR_5, VAR_10,
   VAR_6.disable_uc_local_lb, !VAR_8);

 if (FUNC_0(VAR_7, VAR_2))
  FUNC_1(VAR_5, VAR_10,
    VAR_4.disable_mc_local_lb, 1);

 if (FUNC_0(VAR_7, VAR_3))
  FUNC_1(VAR_5, VAR_10,
    VAR_4.disable_uc_local_lb, 1);

 VAR_11 = FUNC_6(VAR_7, VAR_10, VAR_9);

 if (!VAR_11)
  FUNC_5(VAR_7, "%s local_lb\n",
         VAR_8 ? "enable" : "disable");

 FUNC_3(VAR_10);
 return VAR_11;
}
