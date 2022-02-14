
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_supported_band {int band; void* n_bitrates; int * bitrates; } ;


 void* FUNC_0 (void*) ;


 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_1(struct ieee80211_supported_band *VAR_2)
{
 switch (VAR_2->band) {
 case 129:
  VAR_2->bitrates = VAR_0;
  VAR_2->n_bitrates = FUNC_0(VAR_0);
  break;
 case 128:
  VAR_2->bitrates = VAR_1;
  VAR_2->n_bitrates = FUNC_0(VAR_1);
  break;
 default:
  VAR_2->bitrates = ((void*)0);
  VAR_2->n_bitrates = 0;
  break;
 }
}
