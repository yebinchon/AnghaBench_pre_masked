
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wqe; } ;
struct mlx5e_xdpsq {TYPE_2__* stats; int pc; int cc; int wq; TYPE_1__ mpwqe; } ;
struct TYPE_4__ {int full; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct mlx5e_xdpsq*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_xdpsq *VAR_4)
{
 if (FUNC_2(!VAR_4->mpwqe.wqe)) {
  if (FUNC_2(!FUNC_0(&VAR_4->wq, VAR_4->cc, VAR_4->pc,
           VAR_1))) {

   FUNC_1(VAR_4);
   VAR_4->stats->full++;
   return -VAR_0;
  }

  return VAR_3;
 }

 return VAR_2;
}
