
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct bnad_rx_info {struct bnad_rx_ctrl* rx_ctrl; int rx; } ;
struct bnad_rx_ctrl {int ccb; } ;
struct bnad {int num_rx; int num_rxp_per_rx; int bna_lock; int dim_timer; int run_flags; struct bnad_rx_info* rx_info; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct bnad* VAR_2 ;
 int VAR_3 ;
 struct bnad* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct timer_list *VAR_5)
{
 struct bnad *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_3);
 struct bnad_rx_info *VAR_7;
 struct bnad_rx_ctrl *VAR_8;
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 if (!FUNC_4(VAR_6->netdev))
  return;

 FUNC_5(&VAR_6->bna_lock, VAR_11);
 for (VAR_9 = 0; VAR_9 < VAR_6->num_rx; VAR_9++) {
  VAR_7 = &VAR_6->rx_info[VAR_9];
  if (!VAR_7->rx)
   continue;
  for (VAR_10 = 0; VAR_10 < VAR_6->num_rxp_per_rx; VAR_10++) {
   VAR_8 = &VAR_7->rx_ctrl[VAR_10];
   if (!VAR_8->ccb)
    continue;
   FUNC_0(VAR_8->ccb);
  }
 }


 if (FUNC_7(VAR_1, &VAR_6->run_flags))
  FUNC_2(&VAR_6->dim_timer,
     VAR_4 + FUNC_3(VAR_0));
 FUNC_6(&VAR_6->bna_lock, VAR_11);
}
