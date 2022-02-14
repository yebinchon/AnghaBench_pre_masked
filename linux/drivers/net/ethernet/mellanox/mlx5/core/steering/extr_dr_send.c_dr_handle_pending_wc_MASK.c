
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_send_ring {scalar_t__ pending_wqe; scalar_t__ signal_th; int cq; } ;
struct mlx5dr_domain {TYPE_1__* send_ring; } ;
struct TYPE_2__ {int signal_th; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_domain *VAR_1,
    struct mlx5dr_send_ring *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;

 if (VAR_2->pending_wqe < VAR_2->signal_th)
  return 0;


 if (VAR_2->pending_wqe >=
     VAR_1->send_ring->signal_th * VAR_0)
  VAR_3 = 1;

 do {
  VAR_4 = FUNC_0(VAR_2->cq, 1);
  if (VAR_4 < 0)
   return VAR_4;
  else if (VAR_4 == 1)
   VAR_2->pending_wqe -= VAR_2->signal_th;
 } while (VAR_3 && VAR_2->pending_wqe);

 return 0;
}
