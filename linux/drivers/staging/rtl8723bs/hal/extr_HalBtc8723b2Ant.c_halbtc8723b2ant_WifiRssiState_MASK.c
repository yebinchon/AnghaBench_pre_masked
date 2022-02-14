
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t s32 ;
struct TYPE_6__ {size_t* preWifiRssiState; } ;
struct TYPE_5__ {int (* fBtcGet ) (TYPE_1__*,int ,size_t*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ,size_t*) ;

__attribute__((used)) static u8 FUNC_2(
 PBTC_COEXIST VAR_11,
 u8 VAR_12,
 u8 VAR_13,
 u8 VAR_14,
 u8 VAR_15
)
{
 s32 VAR_16 = 0;
 u8 VAR_17 = VAR_10->preWifiRssiState[VAR_12];

 VAR_11->fBtcGet(VAR_11, VAR_1, &VAR_16);

 if (VAR_13 == 2) {
  if (
   (VAR_10->preWifiRssiState[VAR_12] == VAR_5) ||
   (VAR_10->preWifiRssiState[VAR_12] == VAR_8)
  ) {
   if (VAR_16 >= (VAR_14+VAR_3)) {
    VAR_17 = VAR_4;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state switch to High\n"));
   } else {
    VAR_17 = VAR_8;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state stay at Low\n"));
   }
  } else {
   if (VAR_16 < VAR_14) {
    VAR_17 = VAR_5;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state switch to Low\n"));
   } else {
    VAR_17 = VAR_7;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state stay at High\n"));
   }
  }
 } else if (VAR_13 == 3) {
  if (VAR_14 > VAR_15) {
   FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI thresh error!!\n"));
   return VAR_10->preWifiRssiState[VAR_12];
  }

  if (
   (VAR_10->preWifiRssiState[VAR_12] == VAR_5) ||
   (VAR_10->preWifiRssiState[VAR_12] == VAR_8)
  ) {
   if (VAR_16 >= (VAR_14+VAR_3)) {
    VAR_17 = VAR_6;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state switch to Medium\n"));
   } else {
    VAR_17 = VAR_8;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state stay at Low\n"));
   }
  } else if (
   (VAR_10->preWifiRssiState[VAR_12] == VAR_6) ||
   (VAR_10->preWifiRssiState[VAR_12] == VAR_9)
  ) {
   if (VAR_16 >= (VAR_15+VAR_3)) {
    VAR_17 = VAR_4;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state switch to High\n"));
   } else if (VAR_16 < VAR_14) {
    VAR_17 = VAR_5;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state switch to Low\n"));
   } else {
    VAR_17 = VAR_9;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state stay at Medium\n"));
   }
  } else {
   if (VAR_16 < VAR_15) {
    VAR_17 = VAR_6;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state switch to Medium\n"));
   } else {
    VAR_17 = VAR_7;
    FUNC_0(VAR_2, VAR_0, ("[BTCoex], wifi RSSI state stay at High\n"));
   }
  }
 }

 VAR_10->preWifiRssiState[VAR_12] = VAR_17;

 return VAR_17;
}
