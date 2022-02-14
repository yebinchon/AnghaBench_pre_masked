
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hal_com_data {int CurrentChannelBW; int nCur40MhzPrimeSC; int nCur80MhzPrimeSC; int bSwChnl; int bSetChnlBW; void* CurrentCenterFrequencyIndex1; void* CurrentChannel; } ;
struct adapter {int bSurpriseRemoved; int bDriverStopped; } ;
typedef enum EXTCHNL_OFFSET { ____Placeholder_EXTCHNL_OFFSET } EXTCHNL_OFFSET ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 int FUNC_0 (char*) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*,void*) ;
 int FUNC_3 (struct adapter*) ;

__attribute__((used)) static void FUNC_4(
 struct adapter *VAR_0,
 bool VAR_1,
 bool VAR_2,
 u8 VAR_3,
 enum CHANNEL_WIDTH VAR_4,
 enum EXTCHNL_OFFSET VAR_5,
 enum EXTCHNL_OFFSET VAR_6,
 u8 VAR_7
)
{

 struct hal_com_data *VAR_8 = FUNC_1(VAR_0);
 u8 VAR_9 = VAR_8->CurrentChannel;
 enum CHANNEL_WIDTH VAR_10 = VAR_8->CurrentChannelBW;
 u8 VAR_11 = VAR_8->nCur40MhzPrimeSC;
 u8 VAR_12 = VAR_8->nCur80MhzPrimeSC;
 u8 VAR_13 = VAR_8->CurrentCenterFrequencyIndex1;




 if (!VAR_1 && !VAR_2) {
  FUNC_0("PHY_HandleSwChnlAndSetBW8812:  not switch channel and not set bandwidth\n");
  return;
 }


 if (VAR_1) {

  {
   if (FUNC_2(VAR_0, VAR_3))
    VAR_8->bSwChnl = 1;
  }
 }

 if (VAR_2)
  VAR_8->bSetChnlBW = 1;

 if (!VAR_8->bSetChnlBW && !VAR_8->bSwChnl) {

  return;
 }


 if (VAR_8->bSwChnl) {
  VAR_8->CurrentChannel = VAR_3;
  VAR_8->CurrentCenterFrequencyIndex1 = VAR_3;
 }


 if (VAR_8->bSetChnlBW) {
  VAR_8->CurrentChannelBW = VAR_4;
  VAR_8->nCur40MhzPrimeSC = VAR_5;
  VAR_8->nCur80MhzPrimeSC = VAR_6;
  VAR_8->CurrentCenterFrequencyIndex1 = VAR_7;
 }


 if ((!VAR_0->bDriverStopped) && (!VAR_0->bSurpriseRemoved)) {
  FUNC_3(VAR_0);
 } else {
  if (VAR_8->bSwChnl) {
   VAR_8->CurrentChannel = VAR_9;
   VAR_8->CurrentCenterFrequencyIndex1 = VAR_9;
  }

  if (VAR_8->bSetChnlBW) {
   VAR_8->CurrentChannelBW = VAR_10;
   VAR_8->nCur40MhzPrimeSC = VAR_11;
   VAR_8->nCur80MhzPrimeSC = VAR_12;
   VAR_8->CurrentCenterFrequencyIndex1 = VAR_13;
  }
 }
}
