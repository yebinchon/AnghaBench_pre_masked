
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; } ;
struct mlx4_cq_table {int lock; int tree; } ;
struct mlx4_priv {TYPE_2__ eq_table; struct mlx4_cq_table cq_table; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cq {int cqn; int free; int refcount; int vector; } ;
struct TYPE_3__ {scalar_t__ irq; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int *,int ) ;
 int FUNC_3 (struct mlx4_dev*,int ) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,char*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct mlx4_dev *VAR_1, struct mlx4_cq *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_4(VAR_1);
 struct mlx4_cq_table *VAR_4 = &VAR_3->cq_table;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, ((void*)0), VAR_2->cqn);
 if (VAR_5)
  FUNC_5(VAR_1, "HW2SW_CQ failed (%d) for CQN %06x\n", VAR_5, VAR_2->cqn);

 FUNC_8(&VAR_4->lock);
 FUNC_6(&VAR_4->tree, VAR_2->cqn);
 FUNC_9(&VAR_4->lock);

 FUNC_10(VAR_3->eq_table.eq[FUNC_0(VAR_2->vector)].irq);
 if (VAR_3->eq_table.eq[FUNC_0(VAR_2->vector)].irq !=
     VAR_3->eq_table.eq[VAR_0].irq)
  FUNC_10(VAR_3->eq_table.eq[VAR_0].irq);

 if (FUNC_7(&VAR_2->refcount))
  FUNC_1(&VAR_2->free);
 FUNC_11(&VAR_2->free);

 FUNC_3(VAR_1, VAR_2->cqn);
}
