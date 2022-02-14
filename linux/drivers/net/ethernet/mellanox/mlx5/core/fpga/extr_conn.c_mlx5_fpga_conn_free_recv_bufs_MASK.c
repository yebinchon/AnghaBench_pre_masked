
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ** bufs; } ;
struct TYPE_4__ {TYPE_1__ rq; } ;
struct mlx5_fpga_conn {TYPE_2__ qp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_fpga_conn*,int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_fpga_conn *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->qp.rq.size; VAR_1++) {
  if (!VAR_0->qp.rq.bufs[VAR_1])
   continue;
  FUNC_1(VAR_0, VAR_0->qp.rq.bufs[VAR_1]);
  FUNC_0(VAR_0->qp.rq.bufs[VAR_1]);
  VAR_0->qp.rq.bufs[VAR_1] = ((void*)0);
 }
}
