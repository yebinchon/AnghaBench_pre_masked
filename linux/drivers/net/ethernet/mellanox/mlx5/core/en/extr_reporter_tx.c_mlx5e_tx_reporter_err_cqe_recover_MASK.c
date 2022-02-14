
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {int state; TYPE_1__* stats; int sqn; TYPE_2__* channel; int txq; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {struct net_device* netdev; struct mlx5_core_dev* mdev; } ;
struct TYPE_3__ {int recover; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct mlx5e_txqsq*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct mlx5e_txqsq*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5e_txqsq*) ;
 int FUNC_7 (struct net_device*,char*,int ,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_2)
{
 struct mlx5_core_dev *VAR_3;
 struct net_device *VAR_4;
 struct mlx5e_txqsq *VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_5 = VAR_2;
 VAR_3 = VAR_5->channel->mdev;
 VAR_4 = VAR_5->channel->netdev;

 if (!FUNC_8(VAR_0, &VAR_5->state))
  return 0;

 VAR_7 = FUNC_1(VAR_3, VAR_5->sqn, &VAR_6);
 if (VAR_7) {
  FUNC_7(VAR_4, "Failed to query SQ 0x%x state. err = %d\n",
      VAR_5->sqn, VAR_7);
  goto out;
 }

 if (VAR_6 != VAR_1)
  goto out;

 FUNC_5(VAR_5->txq);

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  goto out;






 VAR_7 = FUNC_3(VAR_5->channel, VAR_5->sqn);
 if (VAR_7)
  goto out;

 FUNC_4(VAR_5);
 VAR_5->stats->recover++;
 FUNC_0(VAR_0, &VAR_5->state);
 FUNC_2(VAR_5);

 return 0;
out:
 FUNC_0(VAR_0, &VAR_5->state);
 return VAR_7;
}
