
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int real_num_tx_queues; } ;
struct TYPE_4__ {int num_tc; } ;
struct mlx5e_channels {int num; TYPE_2__ params; } ;
struct mlx5e_priv {TYPE_1__* profile; struct mlx5e_channels channels; struct net_device* netdev; } ;
typedef int (* mlx5e_fp_hw_modify ) (struct mlx5e_priv*) ;
struct TYPE_3__ {int (* update_rx ) (struct mlx5e_priv*) ;} ;


 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_channels*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct mlx5e_priv*) ;

__attribute__((used)) static void FUNC_8(struct mlx5e_priv *VAR_0,
           struct mlx5e_channels *VAR_1,
           mlx5e_fp_hw_modify VAR_2)
{
 struct net_device *VAR_3 = VAR_0->netdev;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->num * VAR_1->params.num_tc;

 VAR_5 = FUNC_4(VAR_3);
 FUNC_3(VAR_3);

 if (VAR_4 < VAR_3->real_num_tx_queues)
  FUNC_6(VAR_3, VAR_4);

 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->channels);

 VAR_0->channels = *VAR_1;


 if (VAR_2)
  VAR_2(VAR_0);

 VAR_0->profile->update_rx(VAR_0);
 FUNC_0(VAR_0);


 if (VAR_5)
  FUNC_5(VAR_3);
}
