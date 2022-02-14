
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* txd_tx_tail; TYPE_3__* txd_tx_pipe; int queued_txd_mb; } ;
struct TYPE_6__ {TYPE_2__ hwm; } ;
struct s_smc {TYPE_1__ os; } ;
struct TYPE_8__ {struct TYPE_8__* sm_next; } ;
typedef TYPE_3__ SMbuf ;


 int FUNC_0 (int,char*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_0, SMbuf *VAR_1)
{
 FUNC_0(4, "_rx: queue_txd_mb = %p", VAR_1);
 VAR_0->os.hwm.queued_txd_mb++ ;
 VAR_1->sm_next = (SMbuf *)((void*)0) ;
 if (VAR_0->os.hwm.txd_tx_pipe == ((void*)0)) {
  VAR_0->os.hwm.txd_tx_pipe = VAR_1 ;
 }
 else {
  VAR_0->os.hwm.txd_tx_tail->sm_next = VAR_1 ;
 }
 VAR_0->os.hwm.txd_tx_tail = VAR_1 ;
}
