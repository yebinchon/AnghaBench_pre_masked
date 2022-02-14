
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int tx_failed; int tx_lock; } ;
struct ath9k_htc_priv {TYPE_1__ tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned long VAR_1)
{
 struct ath9k_htc_priv *VAR_2 = (struct ath9k_htc_priv *)VAR_1;

 FUNC_1(&VAR_2->tx.tx_lock);
 if (VAR_2->tx.flags & VAR_0) {
  FUNC_2(&VAR_2->tx.tx_lock);
  return;
 }
 FUNC_2(&VAR_2->tx.tx_lock);

 FUNC_0(VAR_2, &VAR_2->tx.tx_failed);
}
