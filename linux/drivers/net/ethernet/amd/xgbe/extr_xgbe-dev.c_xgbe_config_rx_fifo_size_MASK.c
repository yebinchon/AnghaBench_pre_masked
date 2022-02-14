
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int rx_q_count; int netdev; TYPE_1__* pfc; scalar_t__ ets; scalar_t__ pfc_rfa; int pfcq; } ;
struct TYPE_2__ {scalar_t__ pfc_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,char*,unsigned int,...) ;
 int FUNC_4 (struct xgbe_prv_data*,unsigned int,unsigned int*) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int*) ;
 int FUNC_6 (struct xgbe_prv_data*,unsigned int*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 unsigned int FUNC_8 (struct xgbe_prv_data*) ;
 unsigned int FUNC_9 (unsigned int,unsigned int,unsigned int*) ;

__attribute__((used)) static void FUNC_10(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7[VAR_2];
 unsigned int VAR_8;
 unsigned int VAR_9;


 FUNC_2(VAR_5->pfcq, 0, sizeof(VAR_5->pfcq));
 VAR_5->pfc_rfa = 0;

 VAR_6 = FUNC_8(VAR_5);
 VAR_8 = FUNC_1(VAR_5->rx_q_count);


 VAR_6 = FUNC_9(VAR_6, VAR_5->rx_q_count, VAR_7);

 if (VAR_5->pfc && VAR_5->ets)
  FUNC_4(VAR_5, VAR_6, VAR_7);
 else
  FUNC_5(VAR_6, VAR_8, VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_5->rx_q_count; VAR_9++)
  FUNC_0(VAR_5, VAR_9, VAR_0, VAR_1, VAR_7[VAR_9]);

 FUNC_6(VAR_5, VAR_7);
 FUNC_7(VAR_5);

 if (VAR_5->pfc && VAR_5->ets && VAR_5->pfc->pfc_en) {
  FUNC_3(VAR_5, VAR_4, VAR_5->netdev,
      "%u Rx hardware queues\n", VAR_5->rx_q_count);
  for (VAR_9 = 0; VAR_9 < VAR_5->rx_q_count; VAR_9++)
   FUNC_3(VAR_5, VAR_4, VAR_5->netdev,
       "RxQ%u, %u byte fifo queue\n", VAR_9,
       ((VAR_7[VAR_9] + 1) * VAR_3));
 } else {
  FUNC_3(VAR_5, VAR_4, VAR_5->netdev,
      "%u Rx hardware queues, %u byte fifo per queue\n",
      VAR_5->rx_q_count,
      ((VAR_7[0] + 1) * VAR_3));
 }
}
