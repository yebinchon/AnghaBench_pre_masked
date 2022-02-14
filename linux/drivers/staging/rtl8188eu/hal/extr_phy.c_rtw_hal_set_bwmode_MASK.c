
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_data_8188e {int CurrentChannelBW; unsigned char nCur40MhzPrimeSC; } ;
struct adapter {int bSurpriseRemoved; int bDriverStopped; struct hal_data_8188e* HalData; } ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;


 int FUNC_0 (struct adapter*) ;

void FUNC_1(struct adapter *VAR_0, enum ht_channel_width VAR_1,
       unsigned char VAR_2)
{
 struct hal_data_8188e *VAR_3 = VAR_0->HalData;
 enum ht_channel_width VAR_4 = VAR_3->CurrentChannelBW;

 VAR_3->CurrentChannelBW = VAR_1;
 VAR_3->nCur40MhzPrimeSC = VAR_2;

 if ((!VAR_0->bDriverStopped) && (!VAR_0->bSurpriseRemoved))
  FUNC_0(VAR_0);
 else
  VAR_3->CurrentChannelBW = VAR_4;
}
