
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_20__ {scalar_t__ bBtDisabled; } ;
struct TYPE_21__ {int (* fBtcFillH2c ) (TYPE_2__*,int,int,scalar_t__*) ;int (* fBtcGet ) (TYPE_2__*,int ,scalar_t__*) ;int (* fBtcWrite1Byte ) (TYPE_2__*,int,int) ;int (* fBtcRead1Byte ) (TYPE_2__*,int) ;int (* fBtcRead2Byte ) (TYPE_2__*,int) ;int (* fBtcRead4Byte ) (TYPE_2__*,int) ;TYPE_1__ btInfo; scalar_t__ bStopCoexDm; scalar_t__ bManualControl; } ;
struct TYPE_19__ {scalar_t__* wifiChnlInfo; scalar_t__ nArpCnt; int backupAmpduMaxTime; int backupRetryLimit; int backupArfrCnt2; int backupArfrCnt1; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_17__* VAR_9 ;
 int FUNC_1 (TYPE_2__*,int ,int*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_2__*,int,int,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_2__*,int,int) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;

void FUNC_15(PBTC_COEXIST VAR_10, u8 VAR_11)
{
 u8 VAR_12[3] = {0};
 u32 VAR_13;
 u8 VAR_14;
 bool VAR_15 = 0;

 if (
  VAR_10->bManualControl ||
  VAR_10->bStopCoexDm ||
  VAR_10->btInfo.bBtDisabled
 )
  return;

 if (VAR_4 == VAR_11) {
  FUNC_0(VAR_6, VAR_8, ("[BTCoex], MEDIA connect notify\n"));

  VAR_10->fBtcGet(VAR_10, VAR_1, &VAR_15);


  if (VAR_15) {
   VAR_10->fBtcWrite1Byte(VAR_10, 0x6cd, 0x00);
   VAR_10->fBtcWrite1Byte(VAR_10, 0x6cf, 0x00);
  } else {
   VAR_10->fBtcWrite1Byte(VAR_10, 0x6cd, 0x10);
   VAR_10->fBtcWrite1Byte(VAR_10, 0x6cf, 0x10);
  }

  VAR_9->backupArfrCnt1 = VAR_10->fBtcRead4Byte(VAR_10, 0x430);
  VAR_9->backupArfrCnt2 = VAR_10->fBtcRead4Byte(VAR_10, 0x434);
  VAR_9->backupRetryLimit = VAR_10->fBtcRead2Byte(VAR_10, 0x42a);
  VAR_9->backupAmpduMaxTime = VAR_10->fBtcRead1Byte(VAR_10, 0x456);
 } else {
  FUNC_0(VAR_6, VAR_8, ("[BTCoex], MEDIA disconnect notify\n"));
  VAR_9->nArpCnt = 0;

  VAR_10->fBtcWrite1Byte(VAR_10, 0x6cd, 0x0);
  VAR_10->fBtcWrite1Byte(VAR_10, 0x6cf, 0x0);
 }


 VAR_10->fBtcGet(VAR_10, VAR_2, &VAR_14);
 if ((VAR_4 == VAR_11) && (VAR_14 <= 14)) {

  VAR_12[0] = 0x0;
  VAR_12[1] = VAR_14;
  VAR_10->fBtcGet(VAR_10, VAR_3, &VAR_13);

  if (VAR_7 == VAR_13)
   VAR_12[2] = 0x30;
  else
   VAR_12[2] = 0x20;
 }

 VAR_9->wifiChnlInfo[0] = VAR_12[0];
 VAR_9->wifiChnlInfo[1] = VAR_12[1];
 VAR_9->wifiChnlInfo[2] = VAR_12[2];

 FUNC_0(
  VAR_5,
  VAR_0,
  (
   "[BTCoex], FW write 0x66 = 0x%x\n",
   VAR_12[0]<<16 | VAR_12[1]<<8 | VAR_12[2]
  )
 );

 VAR_10->fBtcFillH2c(VAR_10, 0x66, 3, VAR_12);
}
