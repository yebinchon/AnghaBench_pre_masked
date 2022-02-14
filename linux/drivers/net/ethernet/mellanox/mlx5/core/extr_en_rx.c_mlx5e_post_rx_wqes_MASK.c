
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ wqe_bulk; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct TYPE_5__ {TYPE_3__ info; struct mlx5_wq_cyc wq; } ;
struct mlx5e_rq {TYPE_1__* stats; TYPE_2__ wqe; int state; } ;
struct TYPE_4__ {int buff_alloc_err; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mlx5_wq_cyc*) ;
 scalar_t__ FUNC_2 (struct mlx5_wq_cyc*) ;
 int FUNC_3 (struct mlx5_wq_cyc*,scalar_t__) ;
 int FUNC_4 (struct mlx5_wq_cyc*) ;
 int FUNC_5 (struct mlx5e_rq*,int ,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

bool FUNC_8(struct mlx5e_rq *VAR_1)
{
 struct mlx5_wq_cyc *VAR_2 = &VAR_1->wqe.wq;
 u8 VAR_3;
 int VAR_4;

 if (FUNC_7(!FUNC_6(VAR_0, &VAR_1->state)))
  return 0;

 VAR_3 = VAR_1->wqe.info.wqe_bulk;

 if (FUNC_2(VAR_2) < VAR_3)
  return 0;

 do {
  u16 VAR_5 = FUNC_1(VAR_2);

  VAR_4 = FUNC_5(VAR_1, VAR_5, VAR_3);
  if (FUNC_7(VAR_4)) {
   VAR_1->stats->buff_alloc_err++;
   break;
  }

  FUNC_3(VAR_2, VAR_3);
 } while (FUNC_2(VAR_2) >= VAR_3);


 FUNC_0();

 FUNC_4(VAR_2);

 return !!VAR_4;
}
