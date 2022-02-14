
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_13__ {int bAutoTdmaAdjust; } ;
struct TYPE_12__ {int lowPriorityRx; } ;
struct TYPE_11__ {int bSlaveRole; scalar_t__ bPanExist; scalar_t__ bA2dpExist; scalar_t__ bHidExist; scalar_t__ bPanOnly; scalar_t__ bA2dpOnly; scalar_t__ bHidOnly; } ;
struct TYPE_10__ {TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void FUNC_5(
 PBTC_COEXIST VAR_4, u8 VAR_5
)
{
 u8 VAR_6;

 PBTC_BT_LINK_INFO VAR_7 = &VAR_4->btLinkInfo;
 VAR_6 = FUNC_1(2, 28, 0);

 if ((VAR_3->lowPriorityRx >= 1000) && (VAR_3->lowPriorityRx != 65535))
  VAR_7->bSlaveRole = 1;
 else
  VAR_7->bSlaveRole = 0;

 if (VAR_7->bHidOnly) {
  FUNC_0(VAR_4, VAR_5);
  VAR_2->bAutoTdmaAdjust = 0;
  return;
 } else if (VAR_7->bA2dpOnly) {
  if (VAR_0 == VAR_5) {
   FUNC_3(VAR_4, VAR_1, 1, 32);
   FUNC_2(VAR_4, VAR_1, 4);
   VAR_2->bAutoTdmaAdjust = 0;
  } else {
   FUNC_4(VAR_4, VAR_5);
   FUNC_2(VAR_4, VAR_1, 4);
   VAR_2->bAutoTdmaAdjust = 1;
  }
 } else if (VAR_7->bHidExist && VAR_7->bA2dpExist) {
  FUNC_3(VAR_4, VAR_1, 1, 14);
  VAR_2->bAutoTdmaAdjust = 0;

  FUNC_2(VAR_4, VAR_1, 4);
 } else if (
  VAR_7->bPanOnly ||
  (VAR_7->bHidExist && VAR_7->bPanExist)
 ) {
  FUNC_3(VAR_4, VAR_1, 1, 3);
  FUNC_2(VAR_4, VAR_1, 4);
  VAR_2->bAutoTdmaAdjust = 0;
 } else if (
  (VAR_7->bA2dpExist && VAR_7->bPanExist) ||
  (VAR_7->bHidExist && VAR_7->bA2dpExist && VAR_7->bPanExist)
 ) {
  FUNC_3(VAR_4, VAR_1, 1, 13);
  FUNC_2(VAR_4, VAR_1, 4);
  VAR_2->bAutoTdmaAdjust = 0;
 } else {

  FUNC_3(VAR_4, VAR_1, 1, 32);
  FUNC_2(VAR_4, VAR_1, 4);
  VAR_2->bAutoTdmaAdjust = 0;
 }
}
