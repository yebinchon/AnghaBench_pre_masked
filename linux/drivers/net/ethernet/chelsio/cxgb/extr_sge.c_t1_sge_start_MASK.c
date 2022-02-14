
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sge {scalar_t__ espibug_timeout; int espibug_timer; TYPE_1__* adapter; int tx_reclaim_timer; int sge_control; int * freelQ; } ;
struct TYPE_3__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sge*,int *) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct sge *VAR_5)
{
 FUNC_4(VAR_5, &VAR_5->freelQ[0]);
 FUNC_4(VAR_5, &VAR_5->freelQ[1]);

 FUNC_5(VAR_5->sge_control, VAR_5->adapter->regs + VAR_0);
 FUNC_0(VAR_5->adapter, VAR_1 | VAR_2);
 FUNC_3(VAR_5->adapter->regs + VAR_0);

 FUNC_2(&VAR_5->tx_reclaim_timer, VAR_4 + VAR_3);

 if (FUNC_1(VAR_5->adapter))
  FUNC_2(&VAR_5->espibug_timer, VAR_4 + VAR_5->espibug_timeout);
}
