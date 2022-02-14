
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ts_record {int bAddBaReqInProgress; int bAddBaReqDelayed; int bUsingBa; int bDisable_AddBa; int TxPendingBARecord; int TxAdmittedBARecord; scalar_t__ TxCurSeq; int TsCommonInfo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tx_ts_record *VAR_0)
{
 FUNC_1(&VAR_0->TsCommonInfo);
 VAR_0->TxCurSeq = 0;
 VAR_0->bAddBaReqInProgress = 0;
 VAR_0->bAddBaReqDelayed = 0;
 VAR_0->bUsingBa = 0;
 VAR_0->bDisable_AddBa = 0;
 FUNC_0(&VAR_0->TxAdmittedBARecord);
 FUNC_0(&VAR_0->TxPendingBARecord);
}
