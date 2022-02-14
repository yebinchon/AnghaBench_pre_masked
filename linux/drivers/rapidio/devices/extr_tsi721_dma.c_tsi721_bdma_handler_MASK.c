
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_bdma_chan {int tasklet; scalar_t__ active; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct tsi721_bdma_chan *VAR_1)
{

 FUNC_0(0, VAR_1->regs + VAR_0);
 if (VAR_1->active)
  FUNC_1(&VAR_1->tasklet);
}
