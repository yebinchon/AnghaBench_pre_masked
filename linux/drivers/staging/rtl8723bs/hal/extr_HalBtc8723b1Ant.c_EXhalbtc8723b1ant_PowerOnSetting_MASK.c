
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_16__ {int singleAntPath; void* btdmAntPos; } ;
struct TYPE_15__ {int (* fBtcRead2Byte ) (TYPE_1__*,int) ;scalar_t__ chipInterface; int (* fBtcWriteLocalReg1Byte ) (TYPE_1__*,int,int) ;int (* fBtcWrite4Byte ) (TYPE_1__*,int,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;int (* fBtcWrite2Byte ) (TYPE_1__*,int,int) ;TYPE_2__ boardInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BOARD_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,int,int) ;

void FUNC_11(PBTC_COEXIST VAR_7)
{
 PBTC_BOARD_INFO VAR_8 = &VAR_7->boardInfo;
 u8 VAR_9 = 0x0;
 u16 VAR_10 = 0x0;

 VAR_7->fBtcWrite1Byte(VAR_7, 0x67, 0x20);


 VAR_10 = VAR_7->fBtcRead2Byte(VAR_7, 0x2);
 VAR_7->fBtcWrite2Byte(VAR_7, 0x2, VAR_10|VAR_0|VAR_1);


 VAR_7->fBtcWrite1Byte(VAR_7, 0x765, 0x18);

 VAR_7->fBtcWrite1Byte(VAR_7, 0x76e, 0x4);
 if (VAR_7->chipInterface == VAR_6) {

  VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x0);

  VAR_9 |= 0x1;
  VAR_7->fBtcWriteLocalReg1Byte(VAR_7, 0xfe08, VAR_9);

  VAR_8->btdmAntPos = VAR_2;
 } else {

  if (VAR_8->singleAntPath == 0) {

   VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x280);
   VAR_8->btdmAntPos = VAR_3;
  } else if (VAR_8->singleAntPath == 1) {

   VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x0);
   VAR_9 |= 0x1;
   VAR_8->btdmAntPos = VAR_2;
  }

  if (VAR_7->chipInterface == VAR_4)
   VAR_7->fBtcWriteLocalReg1Byte(VAR_7, 0x384, VAR_9);
  else if (VAR_7->chipInterface == VAR_5)
   VAR_7->fBtcWriteLocalReg1Byte(VAR_7, 0x60, VAR_9);
 }
}
