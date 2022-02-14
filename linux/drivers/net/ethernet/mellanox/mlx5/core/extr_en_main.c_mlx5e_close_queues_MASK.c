
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cq; } ;
struct TYPE_4__ {int cq; } ;
struct TYPE_5__ {int cq; } ;
struct mlx5e_channel {TYPE_3__ icosq; TYPE_1__ xdpsq; TYPE_2__ rq; TYPE_1__ rq_xdpsq; scalar_t__ xdp; int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mlx5e_channel*) ;
 int FUNC_4 (struct mlx5e_channel*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mlx5e_channel *VAR_0)
{
 FUNC_5(&VAR_0->xdpsq);
 FUNC_2(&VAR_0->rq);
 if (VAR_0->xdp)
  FUNC_5(&VAR_0->rq_xdpsq);
 FUNC_3(VAR_0);
 FUNC_1(&VAR_0->icosq);
 FUNC_6(&VAR_0->napi);
 if (VAR_0->xdp)
  FUNC_0(&VAR_0->rq_xdpsq.cq);
 FUNC_0(&VAR_0->rq.cq);
 FUNC_0(&VAR_0->xdpsq.cq);
 FUNC_4(VAR_0);
 FUNC_0(&VAR_0->icosq.cq);
}
