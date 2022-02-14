
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cq; } ;
struct TYPE_6__ {int cq; } ;
struct TYPE_5__ {int cq; } ;
struct mlx5e_channel {TYPE_1__ xsksq; TYPE_3__ xskicosq; TYPE_2__ xskrq; int napi; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlx5e_channel *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->state);
 FUNC_5(&VAR_1->napi);

 FUNC_3(&VAR_1->xskrq);
 FUNC_1(&VAR_1->xskrq.cq);
 FUNC_2(&VAR_1->xskicosq);
 FUNC_1(&VAR_1->xskicosq.cq);
 FUNC_4(&VAR_1->xsksq);
 FUNC_1(&VAR_1->xsksq.cq);
}
