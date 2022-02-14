
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_rq_stats {int bytes; int packets; } ;
struct TYPE_2__ {int event_ctr; } ;
struct mlx5e_rq {int dim; TYPE_1__ cq; int state; struct mlx5e_rq_stats* stats; } ;
struct dim_sample {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct dim_sample*) ;
 int FUNC_1 (int *,struct dim_sample) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_rq *VAR_1)
{
 struct mlx5e_rq_stats *VAR_2 = VAR_1->stats;
 struct dim_sample VAR_3 = {};

 if (FUNC_3(!FUNC_2(VAR_0, &VAR_1->state)))
  return;

 FUNC_0(VAR_1->cq.event_ctr, VAR_2->packets, VAR_2->bytes, &VAR_3);
 FUNC_1(&VAR_1->dim, VAR_3);
}
