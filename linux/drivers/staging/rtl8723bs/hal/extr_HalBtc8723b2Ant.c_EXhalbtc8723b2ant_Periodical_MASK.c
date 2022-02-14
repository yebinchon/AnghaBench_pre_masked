
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {scalar_t__ bAutoTdmaAdjust; } ;
struct TYPE_8__ {int (* fBtcGet ) (TYPE_1__*,int ,int *) ;} ;
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
 TYPE_4__* VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;

void FUNC_5(PBTC_COEXIST VAR_9)
{
 static u8 VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0;

 FUNC_0(VAR_3, VAR_0, ("[BTCoex], ==========================Periodical ===========================\n"));

 if (VAR_10 <= 5) {
  VAR_10 += 1;
  FUNC_0(VAR_4, VAR_7, ("[BTCoex], ****************************************************************\n"));
  VAR_9->fBtcGet(VAR_9, VAR_1, &VAR_12);
  VAR_9->fBtcGet(VAR_9, VAR_2, &VAR_11);
  FUNC_0(VAR_4, VAR_7, ("[BTCoex], CoexVer/ FwVer/ PatchVer = %d_%x/ 0x%x/ 0x%x(%d)\n", VAR_6, VAR_5, VAR_11, VAR_12, VAR_12));

  FUNC_0(VAR_4, VAR_7, ("[BTCoex], ****************************************************************\n"));
 }

 if (
  FUNC_1(VAR_9) ||
  VAR_8->bAutoTdmaAdjust
 )
  FUNC_2(VAR_9);
}
