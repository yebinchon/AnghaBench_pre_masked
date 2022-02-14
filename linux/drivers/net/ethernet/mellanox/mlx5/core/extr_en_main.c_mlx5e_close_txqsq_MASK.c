
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct mlx5e_txqsq {scalar_t__ rate_limit; int sqn; int recover_work; TYPE_1__ dim; struct mlx5e_channel* channel; } ;
struct mlx5e_channel {struct mlx5_core_dev* mdev; } ;
struct mlx5_rate_limit {scalar_t__ rate; int member_0; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_rate_limit*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5e_txqsq*) ;
 int FUNC_4 (struct mlx5e_txqsq*) ;

__attribute__((used)) static void FUNC_5(struct mlx5e_txqsq *VAR_0)
{
 struct mlx5e_channel *VAR_1 = VAR_0->channel;
 struct mlx5_core_dev *VAR_2 = VAR_1->mdev;
 struct mlx5_rate_limit VAR_3 = {0};

 FUNC_0(&VAR_0->dim.work);
 FUNC_0(&VAR_0->recover_work);
 FUNC_2(VAR_2, VAR_0->sqn);
 if (VAR_0->rate_limit) {
  VAR_3.rate = VAR_0->rate_limit;
  FUNC_1(VAR_2, &VAR_3);
 }
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
}
