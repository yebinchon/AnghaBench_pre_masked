
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_cqs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cq_table {int tree; } ;
struct mlx4_cq {int (* event ) (struct mlx4_cq*,int) ;} ;
struct TYPE_4__ {struct mlx4_cq_table cq_table; } ;


 int FUNC_0 (struct mlx4_dev*,char*,int) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;
 struct mlx4_cq* FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct mlx4_cq*,int) ;

void FUNC_6(struct mlx4_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct mlx4_cq_table *VAR_3 = &FUNC_1(VAR_0)->cq_table;
 struct mlx4_cq *VAR_4;

 FUNC_3();
 VAR_4 = FUNC_2(&VAR_3->tree, VAR_1 & (VAR_0->caps.num_cqs - 1));
 FUNC_4();

 if (!VAR_4) {
  FUNC_0(VAR_0, "Async event for bogus CQ %08x\n", VAR_1);
  return;
 }




 VAR_4->event(VAR_4, VAR_2);
}
