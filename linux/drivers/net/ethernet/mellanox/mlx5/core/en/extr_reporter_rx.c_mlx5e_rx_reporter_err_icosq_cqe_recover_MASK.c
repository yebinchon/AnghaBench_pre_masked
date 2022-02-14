
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct mlx5e_rq {TYPE_1__* stats; } ;
struct mlx5e_icosq {int state; int sqn; TYPE_2__* channel; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {struct net_device* netdev; struct mlx5_core_dev* mdev; struct mlx5e_rq rq; } ;
struct TYPE_3__ {int recover; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct mlx5e_icosq*) ;
 int FUNC_3 (struct mlx5e_rq*) ;
 int FUNC_4 (struct mlx5e_icosq*) ;
 int FUNC_5 (struct mlx5e_rq*) ;
 int FUNC_6 (struct mlx5e_rq*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct mlx5e_icosq*) ;
 int FUNC_9 (struct mlx5e_icosq*) ;
 int FUNC_10 (struct net_device*,char*,int ,int) ;

__attribute__((used)) static int FUNC_11(void *VAR_2)
{
 struct mlx5_core_dev *VAR_3;
 struct mlx5e_icosq *VAR_4;
 struct net_device *VAR_5;
 struct mlx5e_rq *VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_4 = VAR_2;
 VAR_6 = &VAR_4->channel->rq;
 VAR_3 = VAR_4->channel->mdev;
 VAR_5 = VAR_4->channel->netdev;
 VAR_8 = FUNC_1(VAR_3, VAR_4->sqn, &VAR_7);
 if (VAR_8) {
  FUNC_10(VAR_5, "Failed to query ICOSQ 0x%x state. err = %d\n",
      VAR_4->sqn, VAR_8);
  goto out;
 }

 if (VAR_7 != VAR_1)
  goto out;

 FUNC_5(VAR_6);
 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8)
  goto out;

 FUNC_4(VAR_4);



 VAR_8 = FUNC_7(VAR_4->channel, VAR_4->sqn);
 if (VAR_8)
  goto out;

 FUNC_8(VAR_4);
 FUNC_6(VAR_6);
 FUNC_0(VAR_0, &VAR_4->state);
 FUNC_2(VAR_4);
 FUNC_3(VAR_6);

 VAR_6->stats->recover++;
 return 0;
out:
 FUNC_0(VAR_0, &VAR_4->state);
 return VAR_8;
}
