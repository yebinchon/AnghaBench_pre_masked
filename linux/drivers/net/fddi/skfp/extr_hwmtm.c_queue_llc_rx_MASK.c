
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int isr_flag; TYPE_3__* llc_rx_tail; TYPE_3__* llc_rx_pipe; int queued_rx_frames; } ;
struct TYPE_7__ {TYPE_1__ hwm; } ;
struct s_smc {TYPE_2__ os; } ;
struct TYPE_8__ {struct TYPE_8__* sm_next; } ;
typedef TYPE_3__ SMbuf ;


 int FUNC_0 (int,char*,TYPE_3__*) ;
 int FUNC_1 (struct s_smc*) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_0, SMbuf *VAR_1)
{
 FUNC_0(4, "queue_llc_rx: mb = %p", VAR_1);
 VAR_0->os.hwm.queued_rx_frames++ ;
 VAR_1->sm_next = (SMbuf *)((void*)0) ;
 if (VAR_0->os.hwm.llc_rx_pipe == ((void*)0)) {
  VAR_0->os.hwm.llc_rx_pipe = VAR_1 ;
 }
 else {
  VAR_0->os.hwm.llc_rx_tail->sm_next = VAR_1 ;
 }
 VAR_0->os.hwm.llc_rx_tail = VAR_1 ;




 if (!VAR_0->os.hwm.isr_flag) {
  FUNC_1(VAR_0) ;
 }
}
