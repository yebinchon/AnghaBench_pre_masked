
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int core; int irq_nb; } ;
struct TYPE_7__ {int core; int irq_nb; } ;
struct TYPE_6__ {int core; int irq_nb; } ;
struct mlx5_eq_table {int cq_err_nb; TYPE_4__ cmd_eq; TYPE_3__ async_eq; TYPE_2__ pages_eq; } ;
struct TYPE_5__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,int *) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_eq_table *VAR_1 = VAR_0->priv.eq_table;
 int VAR_2;

 FUNC_3(VAR_0, &VAR_1->pages_eq.core, &VAR_1->pages_eq.irq_nb);
 VAR_2 = FUNC_0(VAR_0, &VAR_1->pages_eq.core);
 if (VAR_2)
  FUNC_2(VAR_0, "failed to destroy pages eq, err(%d)\n",
         VAR_2);

 FUNC_3(VAR_0, &VAR_1->async_eq.core, &VAR_1->async_eq.irq_nb);
 VAR_2 = FUNC_0(VAR_0, &VAR_1->async_eq.core);
 if (VAR_2)
  FUNC_2(VAR_0, "failed to destroy async eq, err(%d)\n",
         VAR_2);

 FUNC_1(VAR_0);

 FUNC_3(VAR_0, &VAR_1->cmd_eq.core, &VAR_1->cmd_eq.irq_nb);
 VAR_2 = FUNC_0(VAR_0, &VAR_1->cmd_eq.core);
 if (VAR_2)
  FUNC_2(VAR_0, "failed to destroy command eq, err(%d)\n",
         VAR_2);

 FUNC_4(VAR_0, &VAR_1->cq_err_nb);
}
