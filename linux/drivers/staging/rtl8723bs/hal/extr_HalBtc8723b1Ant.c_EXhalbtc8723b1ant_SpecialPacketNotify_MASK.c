
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_17__ {int nArpCnt; } ;
struct TYPE_16__ {int bWiFiIsHighPriTask; scalar_t__ bC2hBtInquiryPage; scalar_t__ specialPktPeriodCnt; } ;
struct TYPE_14__ {scalar_t__ bBtDisabled; } ;
struct TYPE_15__ {int (* fBtcGet ) (TYPE_2__*,int ,int*) ;TYPE_1__ btInfo; scalar_t__ bStopCoexDm; scalar_t__ bManualControl; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int,int,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_7 (TYPE_2__*,int ,int*) ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;

void FUNC_9(PBTC_COEXIST VAR_10, u8 VAR_11)
{
 bool VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 bool VAR_15 = 0;
 u8 VAR_16 = 5;

 if (
  VAR_10->bManualControl ||
  VAR_10->bStopCoexDm ||
  VAR_10->btInfo.bBtDisabled
 )
  return;

 if (
  VAR_4 == VAR_11 ||
  VAR_5 == VAR_11 ||
  VAR_3 == VAR_11
 ) {
  if (VAR_3 == VAR_11) {
   FUNC_0(
    VAR_2,
    VAR_6,
    ("[BTCoex], special Packet ARP notify\n")
   );

   VAR_8->nArpCnt++;
   FUNC_0(
    VAR_2,
    VAR_6,
    ("[BTCoex], ARP Packet Count = %d\n", VAR_8->nArpCnt)
   );

   if (VAR_8->nArpCnt >= 10)
    VAR_9->bWiFiIsHighPriTask = 0;
   else
    VAR_9->bWiFiIsHighPriTask = 1;
  } else {
   VAR_9->bWiFiIsHighPriTask = 1;
   FUNC_0(
    VAR_2,
    VAR_6,
    ("[BTCoex], special Packet DHCP or EAPOL notify\n")
   );
  }
 } else {
  VAR_9->bWiFiIsHighPriTask = 0;
  FUNC_0(
   VAR_2,
   VAR_6,
   ("[BTCoex], special Packet [Type = %d] notify\n", VAR_11)
  );
 }

 VAR_9->specialPktPeriodCnt = 0;

 VAR_10->fBtcGet(
  VAR_10, VAR_1, &VAR_13
 );
 VAR_14 = VAR_13>>16;

 if (VAR_14 >= 2) {
  FUNC_6(VAR_10, VAR_7, 0, 0, 0, 0);
  FUNC_5(
   VAR_10, VAR_7, 0, VAR_15, VAR_16
  );
  FUNC_4(VAR_10);
  return;
 }

 VAR_10->fBtcGet(VAR_10, VAR_0, &VAR_12);
 if (VAR_9->bC2hBtInquiryPage) {
  FUNC_1(VAR_10);
  return;
 } else if (VAR_12) {
  FUNC_2(VAR_10);
  return;
 }

 if (
  VAR_4 == VAR_11 ||
  VAR_5 == VAR_11 ||
  ((VAR_3 == VAR_11) && (VAR_9->bWiFiIsHighPriTask))
 )
  FUNC_3(VAR_10);
}
