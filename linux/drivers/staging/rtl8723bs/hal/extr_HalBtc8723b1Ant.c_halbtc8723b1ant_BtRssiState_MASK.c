
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_2__ {int preBtRssiState; int btRssi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static u8 FUNC_1(
 u8 VAR_10, u8 VAR_11, u8 VAR_12
)
{
 s32 VAR_13 = 0;
 u8 VAR_14 = VAR_9->preBtRssiState;

 VAR_13 = VAR_9->btRssi;

 if (VAR_10 == 2) {
  if (
   (VAR_9->preBtRssiState == VAR_4) ||
   (VAR_9->preBtRssiState == VAR_7)
  ) {
   if (VAR_13 >= (VAR_11+VAR_2)) {

    VAR_14 = VAR_3;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state switch to High\n")
    );
   } else {
    VAR_14 = VAR_7;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state stay at Low\n")
    );
   }
  } else {
   if (VAR_13 < VAR_11) {
    VAR_14 = VAR_4;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state switch to Low\n")
    );
   } else {
    VAR_14 = VAR_6;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state stay at High\n")
    );
   }
  }
 } else if (VAR_10 == 3) {
  if (VAR_11 > VAR_12) {
   FUNC_0(
    VAR_1,
    VAR_0,
    ("[BTCoex], BT Rssi thresh error!!\n")
   );
   return VAR_9->preBtRssiState;
  }

  if (
   (VAR_9->preBtRssiState == VAR_4) ||
   (VAR_9->preBtRssiState == VAR_7)
  ) {
   if (VAR_13 >= (VAR_11+VAR_2)) {
    VAR_14 = VAR_5;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state switch to Medium\n")
    );
   } else {
    VAR_14 = VAR_7;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state stay at Low\n")
    );
   }
  } else if (
   (VAR_9->preBtRssiState == VAR_5) ||
   (VAR_9->preBtRssiState == VAR_8)
  ) {
   if (VAR_13 >= (VAR_12+VAR_2)) {
    VAR_14 = VAR_3;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state switch to High\n")
    );
   } else if (VAR_13 < VAR_11) {
    VAR_14 = VAR_4;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state switch to Low\n")
    );
   } else {
    VAR_14 = VAR_8;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state stay at Medium\n")
    );
   }
  } else {
   if (VAR_13 < VAR_12) {
    VAR_14 = VAR_5;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state switch to Medium\n")
    );
   } else {
    VAR_14 = VAR_6;
    FUNC_0(
     VAR_1,
     VAR_0,
     ("[BTCoex], BT Rssi state stay at High\n")
    );
   }
  }
 }

 VAR_9->preBtRssiState = VAR_14;

 return VAR_14;
}
