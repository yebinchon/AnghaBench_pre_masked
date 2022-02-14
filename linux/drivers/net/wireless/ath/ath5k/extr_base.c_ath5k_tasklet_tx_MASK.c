
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_hw {int ah_txq_isr_txok_all; int tx_pending; TYPE_1__* txqs; } ;
struct TYPE_2__ {scalar_t__ setup; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(unsigned long VAR_1)
{
 int VAR_2;
 struct ath5k_hw *VAR_3 = (void *)VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_3->txqs[VAR_2].setup && (VAR_3->ah_txq_isr_txok_all & FUNC_0(VAR_2)))
   FUNC_2(VAR_3, &VAR_3->txqs[VAR_2]);

 VAR_3->tx_pending = 0;
 FUNC_1(VAR_3);
}
