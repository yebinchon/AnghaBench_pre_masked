
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_srq_table {int tree; } ;
struct mlx4_srq {int free; int refcount; int (* event ) (struct mlx4_srq*,int) ;} ;
struct TYPE_3__ {int num_srqs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {struct mlx4_srq_table srq_table; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,char*,int) ;
 struct mlx4_srq* FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx4_srq*,int) ;

void FUNC_9(struct mlx4_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct mlx4_srq_table *VAR_3 = &FUNC_1(VAR_0)->srq_table;
 struct mlx4_srq *VAR_4;

 FUNC_4();
 VAR_4 = FUNC_3(&VAR_3->tree, VAR_1 & (VAR_0->caps.num_srqs - 1));
 FUNC_5();
 if (VAR_4)
  FUNC_7(&VAR_4->refcount);
 else {
  FUNC_2(VAR_0, "Async event for bogus SRQ %08x\n", VAR_1);
  return;
 }

 VAR_4->event(VAR_4, VAR_2);

 if (FUNC_6(&VAR_4->refcount))
  FUNC_0(&VAR_4->free);
}
