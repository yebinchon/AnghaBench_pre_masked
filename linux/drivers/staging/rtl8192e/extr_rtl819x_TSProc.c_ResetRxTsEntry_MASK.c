
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ts_record {int RxIndicateSeq; int RxTimeoutIndicateSeq; int RxAdmittedBARecord; int TsCommonInfo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rx_ts_record *VAR_0)
{
 FUNC_1(&VAR_0->TsCommonInfo);
 VAR_0->RxIndicateSeq = 0xffff;
 VAR_0->RxTimeoutIndicateSeq = 0xffff;
 FUNC_0(&VAR_0->RxAdmittedBARecord);
}
