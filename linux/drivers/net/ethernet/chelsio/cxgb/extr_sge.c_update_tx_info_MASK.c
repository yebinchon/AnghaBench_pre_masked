
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {scalar_t__ stopped_tx_queues; TYPE_1__* tx_sched; struct cmdQ* cmdQ; } ;
struct cmdQ {scalar_t__ processed; scalar_t__ cleaned; scalar_t__ in_use; int status; } ;
struct adapter {scalar_t__ regs; struct sge* sge; } ;
struct TYPE_2__ {int sched_tsk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sge*) ;
 int FUNC_2 (struct sge*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_8(struct adapter *VAR_6,
       unsigned int VAR_7,
       unsigned int VAR_8)
{
 struct sge *VAR_9 = VAR_6->sge;
 struct cmdQ *VAR_10 = &VAR_9->cmdQ[0];

 VAR_10->processed += VAR_8;
 if (VAR_7 & (VAR_4 | VAR_5)) {
  FUNC_1(VAR_9);
  VAR_7 &= ~(VAR_4 | VAR_5);
 }
 if (VAR_7 & VAR_3) {
  FUNC_0(VAR_2, &VAR_10->status);

  if (VAR_10->cleaned + VAR_10->in_use != VAR_10->processed &&
      !FUNC_5(VAR_1, &VAR_10->status)) {
   FUNC_3(VAR_2, &VAR_10->status);
   FUNC_7(VAR_3, VAR_6->regs + VAR_0);
  }
  if (VAR_9->tx_sched)
   FUNC_4(&VAR_9->tx_sched->sched_tsk);

  VAR_7 &= ~VAR_3;
 }

 if (FUNC_6(VAR_9->stopped_tx_queues != 0))
  FUNC_2(VAR_9);

 return VAR_7;
}
