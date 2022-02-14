
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bCurPsTdmaOn; int curPsTdma; int bPrePsTdmaOn; scalar_t__ prePsTdma; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int,int,int,int,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_4, bool VAR_5, bool VAR_6, u8 VAR_7
)
{
 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "[BTCoex], %s turn %s PS TDMA, type =%d\n",
   (VAR_5 ? "force to" : ""),
   (VAR_6 ? "ON" : "OFF"),
   VAR_7
  )
 );
 VAR_3->bCurPsTdmaOn = VAR_6;
 VAR_3->curPsTdma = VAR_7;

 if (!VAR_5) {
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], bPrePsTdmaOn = %d, bCurPsTdmaOn = %d!!\n",
    VAR_3->bPrePsTdmaOn,
    VAR_3->bCurPsTdmaOn
   )
  );
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], prePsTdma = %d, curPsTdma = %d!!\n",
    VAR_3->prePsTdma, VAR_3->curPsTdma
   )
  );

  if (
   (VAR_3->bPrePsTdmaOn == VAR_3->bCurPsTdmaOn) &&
   (VAR_3->prePsTdma == VAR_3->curPsTdma)
  )
   return;
 }

 if (VAR_6) {
  switch (VAR_7) {
  case 1:
  default:
   FUNC_1(VAR_4, 0xe3, 0x1a, 0x1a, 0xe1, 0x90);
   break;
  case 2:
   FUNC_1(VAR_4, 0xe3, 0x12, 0x12, 0xe1, 0x90);
   break;
  case 3:
   FUNC_1(VAR_4, 0xe3, 0x1c, 0x3, 0xf1, 0x90);
   break;
  case 4:
   FUNC_1(VAR_4, 0xe3, 0x10, 0x03, 0xf1, 0x90);
   break;
  case 5:
   FUNC_1(VAR_4, 0xe3, 0x1a, 0x1a, 0x60, 0x90);
   break;
  case 6:
   FUNC_1(VAR_4, 0xe3, 0x12, 0x12, 0x60, 0x90);
   break;
  case 7:
   FUNC_1(VAR_4, 0xe3, 0x1c, 0x3, 0x70, 0x90);
   break;
  case 8:
   FUNC_1(VAR_4, 0xa3, 0x10, 0x3, 0x70, 0x90);
   break;
  case 9:
   FUNC_1(VAR_4, 0xe3, 0x1a, 0x1a, 0xe1, 0x90);
   break;
  case 10:
   FUNC_1(VAR_4, 0xe3, 0x12, 0x12, 0xe1, 0x90);
   break;
  case 11:
   FUNC_1(VAR_4, 0xe3, 0xa, 0xa, 0xe1, 0x90);
   break;
  case 12:
   FUNC_1(VAR_4, 0xe3, 0x5, 0x5, 0xe1, 0x90);
   break;
  case 13:
   FUNC_1(VAR_4, 0xe3, 0x1a, 0x1a, 0x60, 0x90);
   break;
  case 14:
   FUNC_1(VAR_4, 0xe3, 0x12, 0x12, 0x60, 0x90);
   break;
  case 15:
   FUNC_1(VAR_4, 0xe3, 0xa, 0xa, 0x60, 0x90);
   break;
  case 16:
   FUNC_1(VAR_4, 0xe3, 0x5, 0x5, 0x60, 0x90);
   break;
  case 17:
   FUNC_1(VAR_4, 0xa3, 0x2f, 0x2f, 0x60, 0x90);
   break;
  case 18:
   FUNC_1(VAR_4, 0xe3, 0x5, 0x5, 0xe1, 0x90);
   break;
  case 19:
   FUNC_1(VAR_4, 0xe3, 0x25, 0x25, 0xe1, 0x90);
   break;
  case 20:
   FUNC_1(VAR_4, 0xe3, 0x25, 0x25, 0x60, 0x90);
   break;
  case 21:
   FUNC_1(VAR_4, 0xe3, 0x15, 0x03, 0x70, 0x90);
   break;
  case 71:
   FUNC_1(VAR_4, 0xe3, 0x1a, 0x1a, 0xe1, 0x90);
   break;
  }
 } else {

  switch (VAR_7) {
  case 0:
   FUNC_1(VAR_4, 0x0, 0x0, 0x0, 0x40, 0x0);
   break;
  case 1:
   FUNC_1(VAR_4, 0x0, 0x0, 0x0, 0x48, 0x0);
   break;
  default:
   FUNC_1(VAR_4, 0x0, 0x0, 0x0, 0x40, 0x0);
   break;
  }
 }


 VAR_3->bPrePsTdmaOn = VAR_3->bCurPsTdmaOn;
 VAR_3->prePsTdma = VAR_3->curPsTdma;
}
