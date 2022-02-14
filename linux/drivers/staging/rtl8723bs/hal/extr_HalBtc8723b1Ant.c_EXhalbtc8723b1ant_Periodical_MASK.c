
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_13__ {scalar_t__ bAutoTdmaAdjust; } ;
struct TYPE_12__ {int specialPktPeriodCnt; } ;
struct TYPE_11__ {int (* fBtcGet ) (TYPE_1__*,int ,int *) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_5__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;

void FUNC_7(PBTC_COEXIST VAR_10)
{
 static u8 VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;

 FUNC_0(VAR_3, VAR_0, ("[BTCoex], ==========================Periodical ===========================\n"));

 if (VAR_11 <= 5) {
  VAR_11 += 1;
  FUNC_0(VAR_4, VAR_7, ("[BTCoex], ****************************************************************\n"));
  VAR_10->fBtcGet(VAR_10, VAR_1, &VAR_13);
  VAR_10->fBtcGet(VAR_10, VAR_2, &VAR_12);
  FUNC_0(VAR_4, VAR_7, ("[BTCoex], CoexVer/ FwVer/ PatchVer = %d_%x/ 0x%x/ 0x%x(%d)\n", VAR_6, VAR_5, VAR_12, VAR_13, VAR_13));

  FUNC_0(VAR_4, VAR_7, ("[BTCoex], ****************************************************************\n"));
 }

 FUNC_2(VAR_10);
 FUNC_3(VAR_10);

 if (
  FUNC_1(VAR_10) ||
  VAR_8->bAutoTdmaAdjust
 )
  FUNC_4(VAR_10);

 VAR_9->specialPktPeriodCnt++;
}
