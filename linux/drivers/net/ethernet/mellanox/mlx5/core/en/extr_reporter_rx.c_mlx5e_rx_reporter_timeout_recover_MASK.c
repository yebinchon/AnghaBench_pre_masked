
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct mlx5_eq_comp* eq; } ;
struct TYPE_5__ {TYPE_1__ mcq; } ;
struct mlx5e_rq {TYPE_3__* channel; TYPE_2__ cq; } ;
struct mlx5e_icosq {int state; } ;
struct mlx5_eq_comp {int dummy; } ;
struct TYPE_6__ {struct mlx5e_icosq icosq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5_eq_comp*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct mlx5e_icosq *VAR_2;
 struct mlx5_eq_comp *VAR_3;
 struct mlx5e_rq *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1;
 VAR_2 = &VAR_4->channel->icosq;
 VAR_3 = VAR_4->cq.mcq.eq;
 VAR_5 = FUNC_1(VAR_3, VAR_4->channel);
 if (VAR_5)
  FUNC_0(VAR_0, &VAR_2->state);

 return VAR_5;
}
