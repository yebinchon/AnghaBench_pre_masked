
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct xgbe_prv_data {scalar_t__ num_tcs; unsigned int tx_q_count; scalar_t__* q2tc_map; TYPE_1__* ets; int netdev; } ;
struct TYPE_2__ {int * prio_tc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (int ,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,char*,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 u8 VAR_6;

 FUNC_0(VAR_2->netdev);
 if (!VAR_2->num_tcs)
  return;

 FUNC_1(VAR_2->netdev, VAR_2->num_tcs);

 for (VAR_6 = 0, VAR_4 = 0, VAR_3 = 0; VAR_6 < VAR_2->num_tcs; VAR_6++) {
  while ((VAR_4 < VAR_2->tx_q_count) &&
         (VAR_2->q2tc_map[VAR_4] == VAR_6))
   VAR_4++;

  FUNC_4(VAR_2, VAR_1, VAR_2->netdev, "TC%u using TXq%u-%u\n",
     VAR_6, VAR_3, VAR_4 - 1);
  FUNC_3(VAR_2->netdev, VAR_6, VAR_4 - VAR_3, VAR_3);
  VAR_3 = VAR_4;
 }

 if (!VAR_2->ets)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(VAR_2->netdev, VAR_5,
           VAR_2->ets->prio_tc[VAR_5]);
}
