
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_22__ {scalar_t__ nScanAPNum; int highPriorityTx; int highPriorityRx; int bHidExist; int bA2dpExist; int bPanExist; } ;
struct TYPE_20__ {scalar_t__ bA2dpOnly; int bHidOnly; } ;
struct TYPE_21__ {TYPE_1__ btLinkInfo; int (* fBtcGet ) (TYPE_2__*,int ,int*) ;} ;
struct TYPE_19__ {scalar_t__ btStatus; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int) ;
 TYPE_10__* VAR_17 ;
 TYPE_9__* VAR_18 ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*,int ,int*) ;
 int FUNC_11 (TYPE_2__*,int ,int*) ;
 int FUNC_12 (TYPE_2__*,int ,int*) ;
 int FUNC_13 (TYPE_2__*,int ,int*) ;

__attribute__((used)) static void FUNC_14(PBTC_COEXIST VAR_19)
{
 bool VAR_20 = 0;
 bool VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 bool VAR_24 = 0, VAR_25 = 0;

 FUNC_0(
  VAR_7,
  VAR_0,
  ("[BTCoex], CoexForWifiConnect() ===>\n")
 );

 VAR_19->fBtcGet(VAR_19, VAR_1, &VAR_24);
 if (VAR_24) {
  FUNC_4(VAR_19);
  FUNC_0(
   VAR_7,
   VAR_0,
   ("[BTCoex], CoexForWifiConnect(), return for wifi is under 4way<===\n")
  );
  return;
 }

 VAR_19->fBtcGet(VAR_19, VAR_6, &VAR_21);
 VAR_19->fBtcGet(VAR_19, VAR_4, &VAR_22);
 VAR_19->fBtcGet(VAR_19, VAR_5, &VAR_23);
 if (VAR_21 || VAR_22 || VAR_23) {
  if (VAR_21)
   FUNC_3(VAR_19);
  else
   FUNC_4(VAR_19);
  FUNC_0(
   VAR_7,
   VAR_0,
   ("[BTCoex], CoexForWifiConnect(), return for wifi is under scan<===\n")
  );
  return;
 }

 VAR_19->fBtcGet(VAR_19, VAR_2, &VAR_25);
 VAR_19->fBtcGet(VAR_19, VAR_3, &VAR_20);


 if (
  !VAR_25 &&
  VAR_10 == VAR_17->btStatus &&
  !VAR_19->btLinkInfo.bHidOnly
 ) {
  if (VAR_19->btLinkInfo.bA2dpOnly) {
   if (!VAR_20)
    FUNC_6(
     VAR_19, VAR_9, 0x0, 0x0
    );
   else {
    if (VAR_18->nScanAPNum >= VAR_13)
     FUNC_6(
      VAR_19, VAR_9, 0x0, 0x0
     );
    else
     FUNC_6(
      VAR_19, VAR_8, 0x50, 0x4
     );
   }
  } else if (
   (!VAR_18->bPanExist) &&
   (!VAR_18->bA2dpExist) &&
   (!VAR_18->bHidExist)
  )
   FUNC_6(VAR_19, VAR_9, 0x0, 0x0);
  else
   FUNC_6(VAR_19, VAR_8, 0x50, 0x4);
 } else
  FUNC_6(VAR_19, VAR_9, 0x0, 0x0);


 if (!VAR_20) {
  if (VAR_10 == VAR_17->btStatus) {
   FUNC_2(
    VAR_19,
    VAR_15
   );
  } else if (
   (VAR_12 == VAR_17->btStatus) ||
   (VAR_11 == VAR_17->btStatus)
  ) {
   FUNC_1(VAR_19,
    VAR_15);
  } else {
   FUNC_7(VAR_19, VAR_16, 0, 8);

   if ((VAR_18->highPriorityTx) + (VAR_18->highPriorityRx) <= 60)
    FUNC_5(VAR_19, VAR_16, 2);
   else
    FUNC_5(VAR_19, VAR_16, 7);
  }
 } else {
  if (VAR_10 == VAR_17->btStatus) {
   FUNC_2(
    VAR_19,
    VAR_14
   );
  } else if (
   (VAR_12 == VAR_17->btStatus) ||
   (VAR_11 == VAR_17->btStatus)
  ) {
   FUNC_1(
    VAR_19,
    VAR_14
   );
  } else {
   FUNC_7(VAR_19, VAR_16, 0, 8);

   if ((VAR_18->highPriorityTx) + (VAR_18->highPriorityRx) <= 60)
    FUNC_5(VAR_19, VAR_16, 2);
   else
    FUNC_5(VAR_19, VAR_16, 7);
  }
 }
}
