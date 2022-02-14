
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_qp_table {int lock; } ;
struct mlx4_qp {int free; int refcount; int (* event ) (struct mlx4_qp*,int) ;} ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_qp_table qp_table; } ;


 struct mlx4_qp* FUNC_0 (struct mlx4_dev*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,char*,int ) ;
 TYPE_1__* FUNC_3 (struct mlx4_dev*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx4_qp*,int) ;

void FUNC_9(struct mlx4_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct mlx4_qp_table *VAR_3 = &FUNC_3(VAR_0)->qp_table;
 struct mlx4_qp *VAR_4;

 FUNC_6(&VAR_3->lock);

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  FUNC_5(&VAR_4->refcount);

 FUNC_7(&VAR_3->lock);

 if (!VAR_4) {
  FUNC_2(VAR_0, "Async event for none existent QP %08x\n", VAR_1);
  return;
 }

 VAR_4->event(VAR_4, VAR_2);

 if (FUNC_4(&VAR_4->refcount))
  FUNC_1(&VAR_4->free);
}
