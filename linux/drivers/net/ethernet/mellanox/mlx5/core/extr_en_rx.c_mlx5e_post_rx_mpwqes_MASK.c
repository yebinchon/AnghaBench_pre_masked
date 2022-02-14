
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct mlx5_wq_ll {int dummy; } ;
struct TYPE_6__ {scalar_t__ umr_completed; scalar_t__ umr_in_progress; scalar_t__ umr_last_bulk; int actual_wq_head; struct mlx5_wq_ll wq; } ;
struct mlx5e_rq {scalar_t__ umem; TYPE_3__ mpwqe; TYPE_2__* stats; int state; TYPE_1__* channel; } ;
struct mlx5e_icosq {int * doorbell_cseg; int uar_map; int pc; int wq; } ;
struct TYPE_5__ {int congst_umr; } ;
struct TYPE_4__ {struct mlx5e_icosq icosq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_wq_ll*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_wq_ll*) ;
 int FUNC_3 (struct mlx5e_rq*,int ) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (struct mlx5e_rq*,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

bool FUNC_8(struct mlx5e_rq *VAR_3)
{
 struct mlx5e_icosq *VAR_4 = &VAR_3->channel->icosq;
 struct mlx5_wq_ll *VAR_5 = &VAR_3->mpwqe.wq;
 u8 VAR_6 = VAR_3->mpwqe.umr_completed;
 int VAR_7 = 0;
 u8 VAR_8, VAR_9;
 u16 VAR_10;

 if (FUNC_7(!FUNC_6(VAR_1, &VAR_3->state)))
  return 0;

 if (VAR_6) {
  FUNC_5(VAR_3, VAR_6);
  VAR_3->mpwqe.umr_in_progress -= VAR_6;
  VAR_3->mpwqe.umr_completed = 0;
 }

 VAR_8 = FUNC_2(VAR_5) - VAR_3->mpwqe.umr_in_progress;

 if (FUNC_7(VAR_3->mpwqe.umr_in_progress > VAR_3->mpwqe.umr_last_bulk))
  VAR_3->stats->congst_umr++;


 if (FUNC_0(VAR_8 < (2)))
  return 0;

 VAR_10 = VAR_3->mpwqe.actual_wq_head;
 VAR_9 = VAR_8;
 do {
  VAR_7 = FUNC_3(VAR_3, VAR_10);

  if (FUNC_7(VAR_7))
   break;
  VAR_10 = FUNC_1(VAR_5, VAR_10);
 } while (--VAR_9);

 VAR_3->mpwqe.umr_last_bulk = VAR_8 - VAR_9;
 if (VAR_4->doorbell_cseg) {
  FUNC_4(&VAR_4->wq, VAR_4->pc, VAR_4->uar_map, VAR_4->doorbell_cseg);
  VAR_4->doorbell_cseg = ((void*)0);
 }

 VAR_3->mpwqe.umr_in_progress += VAR_3->mpwqe.umr_last_bulk;
 VAR_3->mpwqe.actual_wq_head = VAR_10;







 if (FUNC_7(VAR_7 == -VAR_0 && VAR_3->umem))
  return 1;

 return 0;
}
