
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int s8 ;
struct TYPE_13__ {int bCurPsTdmaOn; int curPsTdma; int bPrePsTdmaOn; scalar_t__ prePsTdma; } ;
struct TYPE_12__ {int nScanAPNum; int bForceLpsOn; } ;
struct TYPE_11__ {scalar_t__ bSlaveRole; } ;
struct TYPE_10__ {int (* fBtcSet ) (TYPE_1__*,int ,int*) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int) ;
 TYPE_6__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_5(
 PBTC_COEXIST VAR_9, bool VAR_10, bool VAR_11, u8 VAR_12
)
{
 PBTC_BT_LINK_INFO VAR_13 = &VAR_9->btLinkInfo;
 bool VAR_14 = 0;
 u8 VAR_15 = 0;
 u8 VAR_16 = 0x50, VAR_17 = 0x51, VAR_18 = 0x10;
 s8 VAR_19 = 0x0;




 VAR_7->bCurPsTdmaOn = VAR_11;
 VAR_7->curPsTdma = VAR_12;

 VAR_9->fBtcGet(VAR_9, VAR_4, &VAR_14);

 if (VAR_7->bCurPsTdmaOn) {
  FUNC_0(
   VAR_5,
   VAR_0,
   (
    "[BTCoex], ********** TDMA(on, %d) **********\n",
    VAR_7->curPsTdma
   )
  );
 } else {
  FUNC_0(
   VAR_5,
   VAR_0,
   (
    "[BTCoex], ********** TDMA(off, %d) **********\n",
    VAR_7->curPsTdma
   )
  );
 }

 if (!VAR_10) {
  if (
   (VAR_7->bPrePsTdmaOn == VAR_7->bCurPsTdmaOn) &&
   (VAR_7->prePsTdma == VAR_7->curPsTdma)
  )
   return;
 }

 if (VAR_8->nScanAPNum <= 5)
  VAR_19 = 5;
 else if (VAR_8->nScanAPNum >= 40)
  VAR_19 = -15;
 else if (VAR_8->nScanAPNum >= 20)
  VAR_19 = -10;

 if (!VAR_8->bForceLpsOn) {
  VAR_17 = 0x61;
  VAR_18 = 0x11;
  VAR_16 = 0x10;
 }


 if (VAR_11) {
  if (VAR_13->bSlaveRole)
   VAR_16 = VAR_16 | 0x1;


  switch (VAR_12) {
  default:
   FUNC_2(
    VAR_9, 0x51, 0x1a, 0x1a, 0x0, VAR_16
   );
   break;
  case 1:
   FUNC_2(
    VAR_9,
    VAR_17,
    0x3a+VAR_19,
    0x03,
    VAR_18,
    VAR_16
   );
   break;
  case 2:
   FUNC_2(
    VAR_9,
    VAR_17,
    0x2d+VAR_19,
    0x03,
    VAR_18,
    VAR_16
   );
   break;
  case 3:
   FUNC_2(
    VAR_9, 0x51, 0x1d, 0x1d, 0x0, 0x10
   );
   break;
  case 4:
   FUNC_2(
    VAR_9, 0x93, 0x15, 0x3, 0x14, 0x0
   );
   break;
  case 5:
   FUNC_2(
    VAR_9, 0x61, 0x15, 0x3, 0x11, 0x10
   );
   break;
  case 6:
   FUNC_2(
    VAR_9, 0x61, 0x20, 0x3, 0x11, 0x11
   );
   break;
  case 7:
   FUNC_2(VAR_9, 0x13, 0xc, 0x5, 0x0, 0x0);
   break;
  case 8:
   FUNC_2(
    VAR_9, 0x93, 0x25, 0x3, 0x10, 0x0
   );
   break;
  case 9:
   FUNC_2(
    VAR_9,
    VAR_17,
    0x21,
    0x3,
    VAR_18,
    VAR_16
   );
   break;
  case 10:
   FUNC_2(VAR_9, 0x13, 0xa, 0xa, 0x0, 0x40);
   break;
  case 11:
   FUNC_2(
    VAR_9,
    VAR_17,
    0x21,
    0x03,
    VAR_18,
    VAR_16
   );
   break;
  case 12:
   FUNC_2(
    VAR_9, 0x51, 0x0a, 0x0a, 0x0, 0x50
   );
   break;
  case 13:
   FUNC_2(
    VAR_9, 0x51, 0x12, 0x12, 0x0, 0x10
   );
   break;
  case 14:
   FUNC_2(
    VAR_9, 0x51, 0x21, 0x3, 0x10, VAR_16
   );
   break;
  case 15:
   FUNC_2(
    VAR_9, 0x13, 0xa, 0x3, 0x8, 0x0
   );
   break;
  case 16:
   FUNC_2(
    VAR_9, 0x93, 0x15, 0x3, 0x10, 0x0
   );
   break;
  case 18:
   FUNC_2(
    VAR_9, 0x93, 0x25, 0x3, 0x10, 0x0
   );
   break;
  case 20:
   FUNC_2(
    VAR_9, 0x61, 0x3f, 0x03, 0x11, 0x10

   );
   break;
  case 21:
   FUNC_2(
    VAR_9, 0x61, 0x25, 0x03, 0x11, 0x11
   );
   break;
  case 22:
   FUNC_2(
    VAR_9, 0x61, 0x25, 0x03, 0x11, 0x10
   );
   break;
  case 23:
   FUNC_2(
    VAR_9, 0xe3, 0x25, 0x3, 0x31, 0x18
   );
   break;
  case 24:
   FUNC_2(
    VAR_9, 0xe3, 0x15, 0x3, 0x31, 0x18
   );
   break;
  case 25:
   FUNC_2(
    VAR_9, 0xe3, 0xa, 0x3, 0x31, 0x18
   );
   break;
  case 26:
   FUNC_2(
    VAR_9, 0xe3, 0xa, 0x3, 0x31, 0x18
   );
   break;
  case 27:
   FUNC_2(
    VAR_9, 0xe3, 0x25, 0x3, 0x31, 0x98
   );
   break;
  case 28:
   FUNC_2(
    VAR_9, 0x69, 0x25, 0x3, 0x31, 0x0
   );
   break;
  case 29:
   FUNC_2(
    VAR_9, 0xab, 0x1a, 0x1a, 0x1, 0x10
   );
   break;
  case 30:
   FUNC_2(
    VAR_9, 0x51, 0x30, 0x3, 0x10, 0x10
   );
   break;
  case 31:
   FUNC_2(
    VAR_9, 0xd3, 0x1a, 0x1a, 0x0, 0x58
   );
   break;
  case 32:
   FUNC_2(
    VAR_9, 0x61, 0x35, 0x3, 0x11, 0x11
   );
   break;
  case 33:
   FUNC_2(
    VAR_9, 0xa3, 0x25, 0x3, 0x30, 0x90
   );
   break;
  case 34:
   FUNC_2(
    VAR_9, 0x53, 0x1a, 0x1a, 0x0, 0x10
   );
   break;
  case 35:
   FUNC_2(
    VAR_9, 0x63, 0x1a, 0x1a, 0x0, 0x10
   );
   break;
  case 36:
   FUNC_2(
    VAR_9, 0xd3, 0x12, 0x3, 0x14, 0x50
   );
   break;
  case 40:

   FUNC_2(
    VAR_9, 0x23, 0x18, 0x00, 0x10, 0x24
   );
   break;
  }
 } else {


  switch (VAR_12) {
  case 8:
   FUNC_2(VAR_9, 0x8, 0x0, 0x0, 0x0, 0x0);
   FUNC_1(
    VAR_9, VAR_2, 0, 0
   );
   break;
  case 0:
  default:
   FUNC_2(VAR_9, 0x0, 0x0, 0x0, 0x0, 0x0);
   FUNC_1(
    VAR_9, VAR_1, 0, 0
   );
   break;
  case 9:
   FUNC_2(VAR_9, 0x0, 0x0, 0x0, 0x0, 0x0);
   FUNC_1(
    VAR_9, VAR_3, 0, 0
   );
   break;
  }
 }

 VAR_15 = 0;
 VAR_9->fBtcSet(
  VAR_9, VAR_6, &VAR_15
 );


 VAR_7->bPrePsTdmaOn = VAR_7->bCurPsTdmaOn;
 VAR_7->prePsTdma = VAR_7->curPsTdma;
}
