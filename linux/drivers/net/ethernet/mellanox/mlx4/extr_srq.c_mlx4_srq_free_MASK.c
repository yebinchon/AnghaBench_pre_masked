
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_srq_table {int lock; int tree; } ;
struct mlx4_srq {int srqn; int free; int refcount; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq_table srq_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int *,int ) ;
 TYPE_1__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ) ;
 int FUNC_4 (struct mlx4_dev*,char*,int,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct mlx4_dev *VAR_0, struct mlx4_srq *VAR_1)
{
 struct mlx4_srq_table *VAR_2 = &FUNC_2(VAR_0)->srq_table;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, ((void*)0), VAR_1->srqn);
 if (VAR_3)
  FUNC_4(VAR_0, "HW2SW_SRQ failed (%d) for SRQN %06x\n", VAR_3, VAR_1->srqn);

 FUNC_7(&VAR_2->lock);
 FUNC_5(&VAR_2->tree, VAR_1->srqn);
 FUNC_8(&VAR_2->lock);

 if (FUNC_6(&VAR_1->refcount))
  FUNC_0(&VAR_1->free);
 FUNC_9(&VAR_1->free);

 FUNC_3(VAR_0, VAR_1->srqn);
}
