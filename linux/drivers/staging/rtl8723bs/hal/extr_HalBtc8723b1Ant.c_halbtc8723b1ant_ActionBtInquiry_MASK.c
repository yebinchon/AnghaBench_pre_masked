
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int bWiFiIsHighPriTask; } ;
struct TYPE_13__ {scalar_t__ bPanExist; scalar_t__ bA2dpExist; scalar_t__ bHidExist; scalar_t__ bScoExist; } ;
struct TYPE_12__ {int (* fBtcSet ) (TYPE_1__*,int ,int*) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 TYPE_7__* VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_7(PBTC_COEXIST VAR_7)
{
 PBTC_BT_LINK_INFO VAR_8 = &VAR_7->btLinkInfo;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;

 VAR_7->fBtcGet(VAR_7, VAR_0, &VAR_10);
 VAR_7->fBtcGet(VAR_7, VAR_2, &VAR_9);
 VAR_7->fBtcGet(VAR_7, VAR_1, &VAR_11);
 VAR_7->fBtcSet(VAR_7, VAR_4, &VAR_12);

 if (!VAR_9 && !VAR_6->bWiFiIsHighPriTask) {
  FUNC_1(VAR_7, VAR_3, 0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 0, 8);

  FUNC_0(VAR_7, VAR_5, 0);
 } else if (
  VAR_8->bScoExist ||
  VAR_8->bHidExist ||
  VAR_8->bA2dpExist
 ) {

  FUNC_1(VAR_7, VAR_3, 0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 1, 32);

  FUNC_0(VAR_7, VAR_5, 4);
 } else if (VAR_8->bPanExist || VAR_11) {
  FUNC_1(VAR_7, VAR_3, 0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 1, 20);

  FUNC_0(VAR_7, VAR_5, 4);
 } else {
  FUNC_1(VAR_7, VAR_3, 0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 0, 8);

  FUNC_0(VAR_7, VAR_5, 7);
 }
}
