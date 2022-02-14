
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_20__ {scalar_t__ nArpCnt; } ;
struct TYPE_19__ {int bWiFiIsHighPriTask; scalar_t__ bC2hBtInquiryPage; } ;
struct TYPE_17__ {scalar_t__ bBtDisabled; } ;
struct TYPE_18__ {int (* fBtcGet ) (TYPE_2__*,int ,int*) ;TYPE_1__ btInfo; scalar_t__ bStopCoexDm; scalar_t__ bManualControl; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int,int,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 TYPE_7__* VAR_8 ;
 TYPE_6__* VAR_9 ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*,int ,int*) ;
 int FUNC_11 (TYPE_2__*,int ,int*) ;

void FUNC_12(PBTC_COEXIST VAR_10, u8 VAR_11)
{
 bool VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 bool VAR_16 = 0;
 u8 VAR_17 = 5;

 if (
  VAR_10->bManualControl ||
  VAR_10->bStopCoexDm ||
  VAR_10->btInfo.bBtDisabled
 )
  return;

 if (VAR_1 == VAR_11) {
  VAR_9->bWiFiIsHighPriTask = 1;
  FUNC_0(VAR_5, VAR_6, ("[BTCoex], CONNECT START notify\n"));
   VAR_8->nArpCnt = 0;
 } else {
  VAR_9->bWiFiIsHighPriTask = 0;
  FUNC_0(VAR_5, VAR_6, ("[BTCoex], CONNECT FINISH notify\n"));

 }

 VAR_10->fBtcGet(VAR_10, VAR_4, &VAR_14);
 VAR_15 = VAR_14>>16;
 if (VAR_15 >= 2) {
  FUNC_8(VAR_10, VAR_7, 0, 0, 0, 0);
  FUNC_7(VAR_10, VAR_7, 0, VAR_16, VAR_17);
  FUNC_4(VAR_10);
  return;
 }

 VAR_10->fBtcGet(VAR_10, VAR_2, &VAR_13);
 if (VAR_9->bC2hBtInquiryPage) {
  FUNC_1(VAR_10);
  return;
 } else if (VAR_13) {
  FUNC_2(VAR_10);
  return;
 }

 if (VAR_1 == VAR_11) {

  FUNC_6(VAR_10);
 } else if (VAR_0 == VAR_11) {


  VAR_10->fBtcGet(VAR_10, VAR_3, &VAR_12);
  if (!VAR_12)
   FUNC_5(VAR_10);
  else
   FUNC_3(VAR_10);
 }
}
