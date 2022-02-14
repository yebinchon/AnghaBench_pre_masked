
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mlx5_eq_comp* eq; } ;
struct TYPE_4__ {TYPE_1__ mcq; } ;
struct mlx5e_txqsq {int state; int channel; TYPE_2__ cq; } ;
struct mlx5_eq_comp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5_eq_comp*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct mlx5_eq_comp *VAR_2;
 struct mlx5e_txqsq *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1;
 VAR_2 = VAR_3->cq.mcq.eq;
 VAR_4 = FUNC_1(VAR_2, VAR_3->channel);
 if (VAR_4)
  FUNC_0(VAR_0, &VAR_3->state);

 return VAR_4;
}
