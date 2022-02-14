
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_nfcal_hist {int index; int * nfval; } ;
struct ath5k_hw {struct ath5k_nfcal_hist ah_nfcal_hist; } ;
typedef int s16 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ath5k_hw *VAR_1, s16 VAR_2)
{
 struct ath5k_nfcal_hist *VAR_3 = &VAR_1->ah_nfcal_hist;
 VAR_3->index = (VAR_3->index + 1) & (VAR_0 - 1);
 VAR_3->nfval[VAR_3->index] = VAR_2;
}
