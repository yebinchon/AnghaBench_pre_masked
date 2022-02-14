
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * nfval; scalar_t__ index; } ;
struct ath5k_hw {TYPE_1__ ah_nfcal_hist; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct ath5k_hw *VAR_2)
{
 int VAR_3;

 VAR_2->ah_nfcal_hist.index = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->ah_nfcal_hist.nfval[VAR_3] = VAR_0;
}
