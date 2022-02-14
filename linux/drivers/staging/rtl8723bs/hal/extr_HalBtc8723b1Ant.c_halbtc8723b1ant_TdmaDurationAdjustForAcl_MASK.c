
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int s32 ;
struct TYPE_4__ {int curPsTdma; int psTdmaDuAdjType; int bAutoTdmaAdjust; } ;
struct TYPE_3__ {scalar_t__ btRetryCnt; scalar_t__ btInfoExt; int lowPriorityTx; int lowPriorityRx; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int,int) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_3(
 PBTC_COEXIST VAR_9, u8 VAR_10
)
{
 static s32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 s32 VAR_16;
 u8 VAR_17 = 0, VAR_18;

 FUNC_0(
  VAR_2,
  VAR_0,
  ("[BTCoex], TdmaDurationAdjustForAcl()\n")
 );

 if (
  (VAR_5 == VAR_10) ||
  (VAR_3 == VAR_10) ||
  (VAR_4 == VAR_10)
 ) {
  if (
   VAR_7->curPsTdma != 1 &&
   VAR_7->curPsTdma != 2 &&
   VAR_7->curPsTdma != 3 &&
   VAR_7->curPsTdma != 9
  ) {
   FUNC_2(VAR_9, VAR_6, 1, 9);
   VAR_7->psTdmaDuAdjType = 9;

   VAR_11 = 0;
   VAR_12 = 0;
   VAR_13 = 1;
   VAR_14 = 3;
   VAR_16 = 0;
   VAR_15 = 0;
  }
  return;
 }

 if (!VAR_7->bAutoTdmaAdjust) {
  VAR_7->bAutoTdmaAdjust = 1;
  FUNC_0(
   VAR_2,
   VAR_1,
   ("[BTCoex], first run TdmaDurationAdjust()!!\n")
  );

  FUNC_2(VAR_9, VAR_6, 1, 2);
  VAR_7->psTdmaDuAdjType = 2;

  VAR_11 = 0;
  VAR_12 = 0;
  VAR_13 = 1;
  VAR_14 = 3;
  VAR_16 = 0;
  VAR_15 = 0;
 } else {

  VAR_17 = VAR_8->btRetryCnt;
  VAR_18 = VAR_8->btInfoExt;




  if (VAR_8->lowPriorityTx > 1050 || VAR_8->lowPriorityRx > 1250)
   VAR_17++;

  VAR_16 = 0;
  VAR_15++;

  if (VAR_17 == 0) {
   VAR_11++;
   VAR_12--;

   if (VAR_12 <= 0)
    VAR_12 = 0;

   if (VAR_11 >= VAR_14) {
    VAR_15 = 0;
    VAR_14 = 3;
    VAR_11 = 0;
    VAR_12 = 0;
    VAR_16 = 1;
    FUNC_0(
     VAR_2,
     VAR_1,
     ("[BTCoex], Increase wifi duration!!\n")
    );
   }
  } else if (VAR_17 <= 3) {
   VAR_11--;
   VAR_12++;

   if (VAR_11 <= 0)
    VAR_11 = 0;

   if (VAR_12 == 2) {
    if (VAR_15 <= 2)
     VAR_13++;
    else
     VAR_13 = 1;

    if (VAR_13 >= 20)
     VAR_13 = 20;

    VAR_14 = 3*VAR_13;
    VAR_11 = 0;
    VAR_12 = 0;
    VAR_15 = 0;
    VAR_16 = -1;
    FUNC_0(VAR_2, VAR_1, ("[BTCoex], Decrease wifi duration for retryCounter<3!!\n"));
   }
  } else {
   if (VAR_15 == 1)
    VAR_13++;
   else
    VAR_13 = 1;

   if (VAR_13 >= 20)
    VAR_13 = 20;

   VAR_14 = 3*VAR_13;
   VAR_11 = 0;
   VAR_12 = 0;
   VAR_15 = 0;
   VAR_16 = -1;
   FUNC_0(
    VAR_2,
    VAR_1,
    ("[BTCoex], Decrease wifi duration for retryCounter>3!!\n")
   );
  }

  if (VAR_16 == -1) {
   if (
    FUNC_1(VAR_18) &&
    ((VAR_7->curPsTdma == 1) || (VAR_7->curPsTdma == 2))
   ) {
    FUNC_2(VAR_9, VAR_6, 1, 9);
    VAR_7->psTdmaDuAdjType = 9;
   } else if (VAR_7->curPsTdma == 1) {
    FUNC_2(VAR_9, VAR_6, 1, 2);
    VAR_7->psTdmaDuAdjType = 2;
   } else if (VAR_7->curPsTdma == 2) {
    FUNC_2(VAR_9, VAR_6, 1, 9);
    VAR_7->psTdmaDuAdjType = 9;
   } else if (VAR_7->curPsTdma == 9) {
    FUNC_2(VAR_9, VAR_6, 1, 11);
    VAR_7->psTdmaDuAdjType = 11;
   }
  } else if (VAR_16 == 1) {
   if (
    FUNC_1(VAR_18) &&
    ((VAR_7->curPsTdma == 1) || (VAR_7->curPsTdma == 2))
   ) {
    FUNC_2(VAR_9, VAR_6, 1, 9);
    VAR_7->psTdmaDuAdjType = 9;
   } else if (VAR_7->curPsTdma == 11) {
    FUNC_2(VAR_9, VAR_6, 1, 9);
    VAR_7->psTdmaDuAdjType = 9;
   } else if (VAR_7->curPsTdma == 9) {
    FUNC_2(VAR_9, VAR_6, 1, 2);
    VAR_7->psTdmaDuAdjType = 2;
   } else if (VAR_7->curPsTdma == 2) {
    FUNC_2(VAR_9, VAR_6, 1, 1);
    VAR_7->psTdmaDuAdjType = 1;
   }
  } else {
   FUNC_0(
    VAR_2,
    VAR_1,
    (
     "[BTCoex], ********** TDMA(on, %d) **********\n",
     VAR_7->curPsTdma
    )
   );
  }

  if (
   VAR_7->curPsTdma != 1 &&
   VAR_7->curPsTdma != 2 &&
   VAR_7->curPsTdma != 9 &&
   VAR_7->curPsTdma != 11
  )
   FUNC_2(
    VAR_9, VAR_6, 1, VAR_7->psTdmaDuAdjType
   );
 }
}
