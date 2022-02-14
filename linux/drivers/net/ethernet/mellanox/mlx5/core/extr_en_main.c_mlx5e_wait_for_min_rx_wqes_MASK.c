
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5e_rq {int rqn; int wq_type; struct mlx5e_channel* channel; } ;
struct mlx5e_channel {int ix; int netdev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_rq*) ;
 scalar_t__ FUNC_2 (struct mlx5e_rq*) ;
 int FUNC_3 (struct mlx5e_rq*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct mlx5e_rq *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = VAR_1 + FUNC_4(VAR_3);
 struct mlx5e_channel *VAR_5 = VAR_2->channel;

 u16 VAR_6 = FUNC_0(VAR_2->wq_type, FUNC_3(VAR_2));

 do {
  if (FUNC_2(VAR_2) >= VAR_6)
   return 0;

  FUNC_5(20);
 } while (FUNC_7(VAR_1, VAR_4));

 FUNC_6(VAR_5->netdev, "Failed to get min RX wqes on Channel[%d] RQN[0x%x] wq cur_sz(%d) min_rx_wqes(%d)\n",
      VAR_5->ix, VAR_2->rqn, FUNC_2(VAR_2), VAR_6);

 FUNC_1(VAR_2);
 return -VAR_0;
}
