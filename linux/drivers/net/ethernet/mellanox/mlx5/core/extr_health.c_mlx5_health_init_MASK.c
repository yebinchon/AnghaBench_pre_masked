
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int report_work; int fatal_report_work; int wq_lock; int wq; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {int device; TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char*) ;

int FUNC_10(struct mlx5_core_dev *VAR_4)
{
 struct mlx5_core_health *VAR_5;
 char *VAR_6;

 FUNC_5(VAR_4);

 VAR_5 = &VAR_4->priv.health;
 VAR_6 = FUNC_4(64, VAR_1);
 if (!VAR_6)
  goto out_err;

 FUNC_9(VAR_6, "mlx5_health");
 FUNC_8(VAR_6, FUNC_2(VAR_4->device));
 VAR_5->wq = FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 if (!VAR_5->wq)
  goto out_err;
 FUNC_7(&VAR_5->wq_lock);
 FUNC_0(&VAR_5->fatal_report_work, VAR_2);
 FUNC_0(&VAR_5->report_work, VAR_3);

 return 0;

out_err:
 FUNC_6(VAR_4);
 return -VAR_0;
}
