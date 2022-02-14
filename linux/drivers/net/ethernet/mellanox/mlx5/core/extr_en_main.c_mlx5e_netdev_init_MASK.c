
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int num_rx_queues; int rx_cpu_rmap; } ;
struct mlx5e_profile {int rq_groups; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; int wq; int update_stats_work; int tx_timeout_work; int set_rx_mode_work; int update_carrier_work; int state_lock; int msglevel; void* ppriv; struct mlx5e_profile const* profile; struct net_device* netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_6 ;

int FUNC_6(struct net_device *VAR_7,
        struct mlx5e_priv *VAR_8,
        struct mlx5_core_dev *VAR_9,
        const struct mlx5e_profile *VAR_10,
        void *VAR_11)
{

 VAR_8->mdev = VAR_9;
 VAR_8->netdev = VAR_7;
 VAR_8->profile = VAR_10;
 VAR_8->ppriv = VAR_11;
 VAR_8->msglevel = VAR_1;
 VAR_8->max_nch = VAR_7->num_rx_queues / FUNC_2(VAR_6, VAR_10->rq_groups, 1);
 VAR_8->max_opened_tc = 1;

 FUNC_4(&VAR_8->state_lock);
 FUNC_0(&VAR_8->update_carrier_work, VAR_4);
 FUNC_0(&VAR_8->set_rx_mode_work, VAR_2);
 FUNC_0(&VAR_8->tx_timeout_work, VAR_3);
 FUNC_0(&VAR_8->update_stats_work, VAR_5);

 VAR_8->wq = FUNC_1("mlx5e");
 if (!VAR_8->wq)
  return -VAR_0;


 FUNC_5(VAR_7);





 return 0;
}
