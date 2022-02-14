
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int rx_pending; int tx_pending; int ani_tasklet; int beacontq; int txtq; int rxtq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ath5k_hw *VAR_0)
{
 VAR_0->rx_pending = 0;
 VAR_0->tx_pending = 0;
 FUNC_0(&VAR_0->rxtq);
 FUNC_0(&VAR_0->txtq);
 FUNC_0(&VAR_0->beacontq);
 FUNC_0(&VAR_0->ani_tasklet);
}
