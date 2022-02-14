
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int q_tx_num; } ;
struct TYPE_5__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {int ah_txq_status; TYPE_3__* ah_txq; TYPE_2__ ah_capabilities; } ;
struct TYPE_6__ {int tqi_type; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(struct ath5k_hw *VAR_1, unsigned int VAR_2)
{
 if (FUNC_1(VAR_2 >= VAR_1->ah_capabilities.cap_queues.q_tx_num))
  return;


 VAR_1->ah_txq[VAR_2].tqi_type = VAR_0;

 FUNC_0(VAR_1->ah_txq_status, VAR_2);
}
