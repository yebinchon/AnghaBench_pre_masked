
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_qcounter_stats {void* rx_if_down_packets; void* rx_out_of_buffer; } ;
struct TYPE_2__ {struct mlx5e_qcounter_stats qcnt; } ;
struct mlx5e_priv {scalar_t__ drop_rq_q_counter; int mdev; scalar_t__ q_counter; TYPE_1__ stats; } ;
typedef int out ;


 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_2)
{
 struct mlx5e_qcounter_stats *VAR_3 = &VAR_2->stats.qcnt;
 u32 VAR_4[FUNC_1(VAR_1)];

 if (VAR_2->q_counter &&
     !FUNC_2(VAR_2->mdev, VAR_2->q_counter, 0, VAR_4,
           sizeof(VAR_4)))
  VAR_3->rx_out_of_buffer = FUNC_0(VAR_1,
        VAR_4, VAR_0);
 if (VAR_2->drop_rq_q_counter &&
     !FUNC_2(VAR_2->mdev, VAR_2->drop_rq_q_counter, 0,
           VAR_4, sizeof(VAR_4)))
  VAR_3->rx_if_down_packets = FUNC_0(VAR_1, VAR_4,
          VAR_0);
}
