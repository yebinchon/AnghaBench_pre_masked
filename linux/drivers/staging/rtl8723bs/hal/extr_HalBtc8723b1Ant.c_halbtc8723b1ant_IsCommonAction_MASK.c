
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ btStatus; } ;
struct TYPE_6__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static bool FUNC_3(PBTC_COEXIST VAR_7)
{
 bool VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 VAR_7->fBtcGet(VAR_7, VAR_2, &VAR_9);
 VAR_7->fBtcGet(VAR_7, VAR_1, &VAR_10);

 if (
  !VAR_9 &&
  VAR_5 == VAR_6->btStatus
 ) {
  FUNC_0(
   VAR_3,
   VAR_0,
   ("[BTCoex], Wifi non connected-idle + BT non connected-idle!!\n")
  );



  VAR_8 = 1;
 } else if (
  VAR_9 &&
  (VAR_5 == VAR_6->btStatus)
 ) {
  FUNC_0(
   VAR_3,
   VAR_0,
   ("[BTCoex], Wifi connected + BT non connected-idle!!\n")
  );



  VAR_8 = 1;
 } else if (
  !VAR_9 &&
  (VAR_4 == VAR_6->btStatus)
 ) {
  FUNC_0(
   VAR_3,
   VAR_0,
   ("[BTCoex], Wifi non connected-idle + BT connected-idle!!\n")
  );



  VAR_8 = 1;
 } else if (
  VAR_9 &&
  (VAR_4 == VAR_6->btStatus)
 ) {
  FUNC_0(VAR_3, VAR_0, ("[BTCoex], Wifi connected + BT connected-idle!!\n"));



  VAR_8 = 1;
 } else if (
  !VAR_9 &&
  (VAR_4 != VAR_6->btStatus)
 ) {
  FUNC_0(
   VAR_3,
   VAR_0,
   ("[BTCoex], Wifi non connected-idle + BT Busy!!\n")
  );



  VAR_8 = 1;
 } else {
  if (VAR_10) {
   FUNC_0(
    VAR_3,
    VAR_0,
    ("[BTCoex], Wifi Connected-Busy + BT Busy!!\n")
   );
  } else {
   FUNC_0(
    VAR_3,
    VAR_0,
    ("[BTCoex], Wifi Connected-Idle + BT Busy!!\n")
   );
  }

  VAR_8 = 0;
 }

 return VAR_8;
}
