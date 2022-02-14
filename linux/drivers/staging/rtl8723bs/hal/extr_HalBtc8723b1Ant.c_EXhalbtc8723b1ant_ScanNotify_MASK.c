
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_24__ {scalar_t__ bBtDisabled; } ;
struct TYPE_25__ {int (* fBtcRead4Byte ) (TYPE_2__*,int) ;scalar_t__ (* fBtcRead1Byte ) (TYPE_2__*,int) ;int (* fBtcGet ) (TYPE_2__*,int ,int*) ;TYPE_1__ btInfo; scalar_t__ bStopCoexDm; scalar_t__ bManualControl; } ;
struct TYPE_23__ {int bWiFiIsHighPriTask; int nScanAPNum; scalar_t__ bC2hBtInquiryPage; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int,int,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int,int) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_10__* VAR_10 ;
 int FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,int ,int*) ;
 int FUNC_16 (TYPE_2__*,int ,int*) ;
 int FUNC_17 (TYPE_2__*,int ,int*) ;
 int FUNC_18 (TYPE_2__*,int ,int*) ;

void FUNC_19(PBTC_COEXIST VAR_11, u8 VAR_12)
{
 bool VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 bool VAR_17 = 0;
 u8 VAR_18 = 5;

 u8 VAR_19, VAR_20;
 u32 VAR_21;

 if (VAR_11->bManualControl || VAR_11->bStopCoexDm)
  return;

 if (VAR_6 == VAR_12) {
  VAR_10->bWiFiIsHighPriTask = 1;
  FUNC_0(
   VAR_4, VAR_8, ("[BTCoex], SCAN START notify\n")
  );

  FUNC_10(VAR_11, VAR_7, 0, 8);
  VAR_21 = VAR_11->fBtcRead4Byte(VAR_11, 0x948);
  VAR_19 = VAR_11->fBtcRead1Byte(VAR_11, 0x765);
  VAR_20 = VAR_11->fBtcRead1Byte(VAR_11, 0x67);


  FUNC_0(
   VAR_4,
   VAR_8,
   (
    "[BTCoex], 0x948 = 0x%x, 0x765 = 0x%x, 0x67 = 0x%x\n",
    VAR_21,
    VAR_19,
    VAR_20
   )
  );
 } else {
  VAR_10->bWiFiIsHighPriTask = 0;
  FUNC_0(
   VAR_4, VAR_8, ("[BTCoex], SCAN FINISH notify\n")
  );

  VAR_11->fBtcGet(
   VAR_11, VAR_2, &VAR_10->nScanAPNum
  );
 }

 if (VAR_11->btInfo.bBtDisabled)
  return;

 VAR_11->fBtcGet(VAR_11, VAR_0, &VAR_14);
 VAR_11->fBtcGet(VAR_11, VAR_1, &VAR_13);

 FUNC_11(VAR_11);

 VAR_11->fBtcGet(VAR_11, VAR_3, &VAR_15);
 VAR_16 = VAR_15>>16;

 if (VAR_16 >= 2) {
  FUNC_9(VAR_11, VAR_9, 0, 0, 0, 0);
  FUNC_8(
   VAR_11, VAR_9, 0, VAR_17, VAR_18
  );
  FUNC_5(VAR_11);
  return;
 }

 if (VAR_10->bC2hBtInquiryPage) {
  FUNC_1(VAR_11);
  return;
 } else if (VAR_14) {
  FUNC_2(VAR_11);
  return;
 }

 if (VAR_6 == VAR_12) {

  if (!VAR_13)
   FUNC_7(VAR_11);
  else
   FUNC_4(VAR_11);
 } else if (VAR_5 == VAR_12) {

  if (!VAR_13)
   FUNC_6(VAR_11);
  else
   FUNC_3(VAR_11);
 }
}
