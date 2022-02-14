
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnad_rx_info {struct bnad_rx_ctrl* rx_ctrl; int rx; } ;
struct bnad_rx_ctrl {scalar_t__ ccb; } ;
struct bnad {int num_tx; int num_txq_per_tx; int num_rx; int num_rxp_per_rx; struct bnad_rx_info* rx_info; TYPE_1__* tx_info; int bna_lock; int bna; int run_flags; } ;
struct bna_tcb {int flags; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct bna_tcb** tcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct bnad*,scalar_t__) ;
 int FUNC_5 (struct bnad*,struct bna_tcb*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_10(int VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;
 struct bnad *VAR_10 = (struct bnad *)VAR_5;
 struct bnad_rx_info *VAR_11;
 struct bnad_rx_ctrl *VAR_12;
 struct bna_tcb *VAR_13 = ((void*)0);

 FUNC_6(&VAR_10->bna_lock, VAR_9);
 if (FUNC_9(FUNC_8(VAR_0, &VAR_10->run_flags))) {
  FUNC_7(&VAR_10->bna_lock, VAR_9);
  return VAR_3;
 }

 FUNC_2(&VAR_10->bna, VAR_8);

 if (FUNC_9(!VAR_8)) {
  FUNC_7(&VAR_10->bna_lock, VAR_9);
  return VAR_3;
 }

 if (FUNC_1(&VAR_10->bna, VAR_8))
  FUNC_3(&VAR_10->bna, VAR_8);

 FUNC_7(&VAR_10->bna_lock, VAR_9);

 if (!FUNC_0(VAR_8))
  return VAR_2;



 for (VAR_6 = 0; VAR_6 < VAR_10->num_tx; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_10->num_txq_per_tx; VAR_7++) {
   VAR_13 = VAR_10->tx_info[VAR_6].tcb[VAR_7];
   if (VAR_13 && FUNC_8(VAR_1, &VAR_13->flags))
    FUNC_5(VAR_10, VAR_10->tx_info[VAR_6].tcb[VAR_7]);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_10->num_rx; VAR_6++) {
  VAR_11 = &VAR_10->rx_info[VAR_6];
  if (!VAR_11->rx)
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_10->num_rxp_per_rx; VAR_7++) {
   VAR_12 = &VAR_11->rx_ctrl[VAR_7];
   if (VAR_12->ccb)
    FUNC_4(VAR_10,
           VAR_12->ccb);
  }
 }
 return VAR_2;
}
