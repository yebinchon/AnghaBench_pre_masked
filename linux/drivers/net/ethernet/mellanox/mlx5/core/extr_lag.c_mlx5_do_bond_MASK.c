
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lag_tracker {scalar_t__ is_bonded; } ;
struct mlx5_lag {struct lag_tracker tracker; TYPE_1__* pf; } ;
struct TYPE_6__ {TYPE_2__* eswitch; } ;
struct mlx5_core_dev {TYPE_3__ priv; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {struct mlx5_core_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx5_lag*) ;
 int FUNC_1 (struct mlx5_lag*) ;
 int VAR_4 ;
 int FUNC_2 (struct mlx5_lag*,struct lag_tracker*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (struct mlx5_lag*) ;
 int FUNC_5 (struct mlx5_lag*) ;
 scalar_t__ FUNC_6 (struct mlx5_lag*) ;
 int FUNC_7 (struct mlx5_lag*) ;
 int FUNC_8 (struct mlx5_lag*,struct lag_tracker*) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*,int ) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct mlx5_lag *VAR_5)
{
 struct mlx5_core_dev *VAR_6 = VAR_5->pf[0].dev;
 struct mlx5_core_dev *VAR_7 = VAR_5->pf[1].dev;
 struct lag_tracker VAR_8;
 bool VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_6 || !VAR_7)
  return;

 FUNC_13(&VAR_4);
 VAR_8 = VAR_5->tracker;
 FUNC_14(&VAR_4);

 VAR_9 = VAR_8.is_bonded && FUNC_6(VAR_5);

 if (VAR_9 && !FUNC_0(VAR_5)) {
  VAR_10 = !FUNC_12(VAR_6) &&
      !FUNC_12(VAR_7);






  if (VAR_10)
   FUNC_7(VAR_5);

  VAR_11 = FUNC_2(VAR_5, &VAR_8,
     VAR_10 ? VAR_2 :
     VAR_3);
  if (VAR_11) {
   if (VAR_10)
    FUNC_5(VAR_5);

   return;
  }

  if (VAR_10) {
   FUNC_3(VAR_6, VAR_1);
   FUNC_10(VAR_7);
  }
 } else if (VAR_9 && FUNC_0(VAR_5)) {
  FUNC_8(VAR_5, &VAR_8);
 } else if (!VAR_9 && FUNC_0(VAR_5)) {
  VAR_10 = FUNC_1(VAR_5);

  if (VAR_10) {
   FUNC_11(VAR_6, VAR_1);
   FUNC_9(VAR_7);
  }

  VAR_11 = FUNC_4(VAR_5);
  if (VAR_11)
   return;

  if (VAR_10)
   FUNC_5(VAR_5);
 }
}
