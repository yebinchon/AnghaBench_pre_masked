
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_xdpsq {TYPE_1__* stats; int pc; int cc; int wq; } ;
struct TYPE_2__ {int full; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct mlx5e_xdpsq*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_xdpsq *VAR_2)
{
 if (FUNC_2(!FUNC_0(&VAR_2->wq, VAR_2->cc, VAR_2->pc, 1))) {

  FUNC_1(VAR_2);
  VAR_2->stats->full++;
  return -VAR_0;
 }

 return VAR_1;
}
