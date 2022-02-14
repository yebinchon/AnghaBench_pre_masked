
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_lock; } ;
struct ath10k {int hw; int tx_paused; TYPE_1__ htt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ath10k *VAR_1, int VAR_2)
{
 FUNC_3(&VAR_1->htt.tx_lock);

 FUNC_1(VAR_2 >= VAR_0);
 VAR_1->tx_paused |= FUNC_0(VAR_2);
 FUNC_2(VAR_1->hw);
}
