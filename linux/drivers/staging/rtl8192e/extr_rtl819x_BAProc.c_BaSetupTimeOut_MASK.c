
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bValid; } ;
struct tx_ts_record {int bAddBaReqInProgress; int bAddBaReqDelayed; TYPE_1__ TxPendingBARecord; } ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int Timer; } ;


 TYPE_2__ VAR_0 ;
 struct tx_ts_record* FUNC_0 (int ,struct timer_list*,int ) ;
 struct tx_ts_record* VAR_1 ;

void FUNC_1(struct timer_list *VAR_2)
{
 struct tx_ts_record *VAR_3 = FUNC_0(VAR_3, VAR_2,
           VAR_0.Timer);

 VAR_3->bAddBaReqInProgress = 0;
 VAR_3->bAddBaReqDelayed = 1;
 VAR_3->TxPendingBARecord.bValid = 0;
}
