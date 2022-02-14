
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_11__ {int bAutoTdmaAdjust; int curPsTdma; int psTdmaDuAdjType; } ;
struct TYPE_10__ {int btRetryCnt; } ;
struct TYPE_9__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 TYPE_6__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_6(
 PBTC_COEXIST VAR_9, bool VAR_10, bool VAR_11, u8 VAR_12
)
{
 static s32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 s32 VAR_18;
 u8 VAR_19 = 0;

 FUNC_0(VAR_5, VAR_0, ("[BTCoex], TdmaDurationAdjust()\n"));

 if (!VAR_7->bAutoTdmaAdjust) {
  VAR_7->bAutoTdmaAdjust = 1;
  FUNC_0(VAR_5, VAR_1, ("[BTCoex], first run TdmaDurationAdjust()!!\n"));
  {
   if (VAR_10) {
    if (VAR_11) {
     if (VAR_12 == 1)
      FUNC_1(13);
     else if (VAR_12 == 2)
      FUNC_1(14);
     else if (VAR_12 == 3)
      FUNC_1(15);
     else
      FUNC_1(15);
    } else {
     if (VAR_12 == 1)
      FUNC_1(9);
     else if (VAR_12 == 2)
      FUNC_1(10);
     else if (VAR_12 == 3)
      FUNC_1(11);
     else
      FUNC_1(11);
    }
   } else {
    if (VAR_11) {
     if (VAR_12 == 1)
      FUNC_1(5);
     else if (VAR_12 == 2)
      FUNC_1(6);
     else if (VAR_12 == 3)
      FUNC_1(7);
     else
      FUNC_1(7);
    } else {
     if (VAR_12 == 1)
      FUNC_1(1);
     else if (VAR_12 == 2)
      FUNC_1(2);
     else if (VAR_12 == 3)
      FUNC_1(3);
     else
      FUNC_1(3);
    }
   }
  }

  VAR_13 = 0;
  VAR_14 = 0;
  VAR_15 = 1;
  VAR_16 = 3;
  VAR_18 = 0;
  VAR_17 = 0;
 } else {

  VAR_19 = VAR_8->btRetryCnt;
  FUNC_0(VAR_5, VAR_1, ("[BTCoex], retryCount = %d\n", VAR_19));
  FUNC_0(
   VAR_5,
   VAR_1,
   (
    "[BTCoex], up =%d, dn =%d, m =%d, n =%d, WaitCount =%d\n",
    VAR_13, VAR_14, VAR_15, VAR_16, VAR_17
   )
  );
  VAR_18 = 0;
  VAR_17++;

  if (VAR_19 == 0) {
   VAR_13++;
   VAR_14--;

   if (VAR_14 <= 0)
    VAR_14 = 0;

   if (VAR_13 >= VAR_16) {
    VAR_17 = 0;
    VAR_16 = 3;
    VAR_13 = 0;
    VAR_14 = 0;
    VAR_18 = 1;
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], Increase wifi duration!!\n"));
   }
  } else if (VAR_19 <= 3) {
   VAR_13--;
   VAR_14++;

   if (VAR_13 <= 0)
    VAR_13 = 0;

   if (VAR_14 == 2) {
    if (VAR_17 <= 2)
     VAR_15++;
    else
     VAR_15 = 1;

    if (VAR_15 >= 20)
     VAR_15 = 20;

    VAR_16 = 3*VAR_15;
    VAR_13 = 0;
    VAR_14 = 0;
    VAR_17 = 0;
    VAR_18 = -1;
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], Decrease wifi duration for retryCounter<3!!\n"));
   }
  } else {
   if (VAR_17 == 1)
    VAR_15++;
   else
    VAR_15 = 1;

   if (VAR_15 >= 20)
    VAR_15 = 20;

   VAR_16 = 3*VAR_15;
   VAR_13 = 0;
   VAR_14 = 0;
   VAR_17 = 0;
   VAR_18 = -1;
   FUNC_0(VAR_5, VAR_1, ("[BTCoex], Decrease wifi duration for retryCounter>3!!\n"));
  }

  FUNC_0(VAR_5, VAR_1, ("[BTCoex], max Interval = %d\n", VAR_12));
  if (VAR_12 == 1) {
   if (VAR_11) {
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], TxPause = 1\n"));

    if (VAR_7->curPsTdma == 71)
     FUNC_1(5);
    else if (VAR_7->curPsTdma == 1)
     FUNC_1(5);
    else if (VAR_7->curPsTdma == 2)
     FUNC_1(6);
    else if (VAR_7->curPsTdma == 3)
     FUNC_1(7);
    else if (VAR_7->curPsTdma == 4)
     FUNC_1(8);

    if (VAR_7->curPsTdma == 9)
     FUNC_1(13);
    else if (VAR_7->curPsTdma == 10)
     FUNC_1(14);
    else if (VAR_7->curPsTdma == 11)
     FUNC_1(15);
    else if (VAR_7->curPsTdma == 12)
     FUNC_1(16);

    if (VAR_18 == -1) {
     if (VAR_7->curPsTdma == 5)
      FUNC_1(6);
     else if (VAR_7->curPsTdma == 6)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 7)
      FUNC_1(8);
     else if (VAR_7->curPsTdma == 13)
      FUNC_1(14);
     else if (VAR_7->curPsTdma == 14)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 15)
      FUNC_1(16);
    } else if (VAR_18 == 1) {
     if (VAR_7->curPsTdma == 8)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 7)
      FUNC_1(6);
     else if (VAR_7->curPsTdma == 6)
      FUNC_1(5);
     else if (VAR_7->curPsTdma == 16)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 15)
      FUNC_1(14);
     else if (VAR_7->curPsTdma == 14)
      FUNC_1(13);
    }
   } else {
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], TxPause = 0\n"));
    if (VAR_7->curPsTdma == 5)
     FUNC_1(71);
    else if (VAR_7->curPsTdma == 6)
     FUNC_1(2);
    else if (VAR_7->curPsTdma == 7)
     FUNC_1(3);
    else if (VAR_7->curPsTdma == 8)
     FUNC_1(4);

    if (VAR_7->curPsTdma == 13)
     FUNC_1(9);
    else if (VAR_7->curPsTdma == 14)
     FUNC_1(10);
    else if (VAR_7->curPsTdma == 15)
     FUNC_1(11);
    else if (VAR_7->curPsTdma == 16)
     FUNC_1(12);

    if (VAR_18 == -1) {
     if (VAR_7->curPsTdma == 71)
      FUNC_1(1);
     else if (VAR_7->curPsTdma == 1)
      FUNC_1(2);
     else if (VAR_7->curPsTdma == 2)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 3)
      FUNC_1(4);
     else if (VAR_7->curPsTdma == 9)
      FUNC_1(10);
     else if (VAR_7->curPsTdma == 10)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 11)
      FUNC_1(12);
    } else if (VAR_18 == 1) {
     if (VAR_7->curPsTdma == 4)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 3)
      FUNC_1(2);
     else if (VAR_7->curPsTdma == 2)
      FUNC_1(1);
     else if (VAR_7->curPsTdma == 1)
      FUNC_1(71);
     else if (VAR_7->curPsTdma == 12)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 11)
      FUNC_1(10);
     else if (VAR_7->curPsTdma == 10)
      FUNC_1(9);
    }
   }
  } else if (VAR_12 == 2) {
   if (VAR_11) {
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], TxPause = 1\n"));
    if (VAR_7->curPsTdma == 1)
     FUNC_1(6);
    else if (VAR_7->curPsTdma == 2)
     FUNC_1(6);
    else if (VAR_7->curPsTdma == 3)
     FUNC_1(7);
    else if (VAR_7->curPsTdma == 4)
     FUNC_1(8);

    if (VAR_7->curPsTdma == 9)
     FUNC_1(14);
    else if (VAR_7->curPsTdma == 10)
     FUNC_1(14);
    else if (VAR_7->curPsTdma == 11)
     FUNC_1(15);
    else if (VAR_7->curPsTdma == 12)
     FUNC_1(16);

    if (VAR_18 == -1) {
     if (VAR_7->curPsTdma == 5)
      FUNC_1(6);
     else if (VAR_7->curPsTdma == 6)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 7)
      FUNC_1(8);
     else if (VAR_7->curPsTdma == 13)
      FUNC_1(14);
     else if (VAR_7->curPsTdma == 14)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 15)
      FUNC_1(16);
    } else if (VAR_18 == 1) {
     if (VAR_7->curPsTdma == 8)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 7)
      FUNC_1(6);
     else if (VAR_7->curPsTdma == 6)
      FUNC_1(6);
     else if (VAR_7->curPsTdma == 16)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 15)
      FUNC_1(14);
     else if (VAR_7->curPsTdma == 14)
      FUNC_1(14);
    }
   } else {
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], TxPause = 0\n"));
    if (VAR_7->curPsTdma == 5)
     FUNC_1(2);
    else if (VAR_7->curPsTdma == 6)
     FUNC_1(2);
    else if (VAR_7->curPsTdma == 7)
     FUNC_1(3);
    else if (VAR_7->curPsTdma == 8)
     FUNC_1(4);

    if (VAR_7->curPsTdma == 13)
     FUNC_1(10);
    else if (VAR_7->curPsTdma == 14)
     FUNC_1(10);
    else if (VAR_7->curPsTdma == 15)
     FUNC_1(11);
    else if (VAR_7->curPsTdma == 16)
     FUNC_1(12);

    if (VAR_18 == -1) {
     if (VAR_7->curPsTdma == 1)
      FUNC_1(2);
     else if (VAR_7->curPsTdma == 2)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 3)
      FUNC_1(4);
     else if (VAR_7->curPsTdma == 9)
      FUNC_1(10);
     else if (VAR_7->curPsTdma == 10)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 11)
      FUNC_1(12);
    } else if (VAR_18 == 1) {
     if (VAR_7->curPsTdma == 4)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 3)
      FUNC_1(2);
     else if (VAR_7->curPsTdma == 2)
      FUNC_1(2);
     else if (VAR_7->curPsTdma == 12)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 11)
      FUNC_1(10);
     else if (VAR_7->curPsTdma == 10)
      FUNC_1(10);
    }
   }
  } else if (VAR_12 == 3) {
   if (VAR_11) {
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], TxPause = 1\n"));
    if (VAR_7->curPsTdma == 1)
     FUNC_1(7);
    else if (VAR_7->curPsTdma == 2)
     FUNC_1(7);
    else if (VAR_7->curPsTdma == 3)
     FUNC_1(7);
    else if (VAR_7->curPsTdma == 4)
     FUNC_1(8);

    if (VAR_7->curPsTdma == 9)
     FUNC_1(15);
    else if (VAR_7->curPsTdma == 10)
     FUNC_1(15);
    else if (VAR_7->curPsTdma == 11)
     FUNC_1(15);
    else if (VAR_7->curPsTdma == 12)
     FUNC_1(16);

    if (VAR_18 == -1) {
     if (VAR_7->curPsTdma == 5)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 6)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 7)
      FUNC_1(8);
     else if (VAR_7->curPsTdma == 13)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 14)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 15)
      FUNC_1(16);
    } else if (VAR_18 == 1) {
     if (VAR_7->curPsTdma == 8)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 7)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 6)
      FUNC_1(7);
     else if (VAR_7->curPsTdma == 16)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 15)
      FUNC_1(15);
     else if (VAR_7->curPsTdma == 14)
      FUNC_1(15);
    }
   } else {
    FUNC_0(VAR_5, VAR_1, ("[BTCoex], TxPause = 0\n"));
    if (VAR_7->curPsTdma == 5)
     FUNC_1(3);
    else if (VAR_7->curPsTdma == 6)
     FUNC_1(3);
    else if (VAR_7->curPsTdma == 7)
     FUNC_1(3);
    else if (VAR_7->curPsTdma == 8)
     FUNC_1(4);

    if (VAR_7->curPsTdma == 13)
     FUNC_1(11);
    else if (VAR_7->curPsTdma == 14)
     FUNC_1(11);
    else if (VAR_7->curPsTdma == 15)
     FUNC_1(11);
    else if (VAR_7->curPsTdma == 16)
     FUNC_1(12);

    if (VAR_18 == -1) {
     if (VAR_7->curPsTdma == 1)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 2)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 3)
      FUNC_1(4);
     else if (VAR_7->curPsTdma == 9)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 10)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 11)
      FUNC_1(12);
    } else if (VAR_18 == 1) {
     if (VAR_7->curPsTdma == 4)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 3)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 2)
      FUNC_1(3);
     else if (VAR_7->curPsTdma == 12)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 11)
      FUNC_1(11);
     else if (VAR_7->curPsTdma == 10)
      FUNC_1(11);
    }
   }
  }
 }



 if (VAR_7->curPsTdma != VAR_7->psTdmaDuAdjType) {
  bool VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
  FUNC_0(
   VAR_5,
   VAR_1,
   (
    "[BTCoex], PsTdma type mismatch!!!, curPsTdma =%d, recordPsTdma =%d\n",
    VAR_7->curPsTdma,
    VAR_7->psTdmaDuAdjType
   )
  );

  VAR_9->fBtcGet(VAR_9, VAR_4, &VAR_20);
  VAR_9->fBtcGet(VAR_9, VAR_2, &VAR_21);
  VAR_9->fBtcGet(VAR_9, VAR_3, &VAR_22);

  if (!VAR_20 && !VAR_21 && !VAR_22)
   FUNC_2(VAR_9, VAR_6, 1, VAR_7->psTdmaDuAdjType);
  else {
   FUNC_0(VAR_5, VAR_1, ("[BTCoex], roaming/link/scan is under progress, will adjust next time!!!\n"));
  }
 }
}
