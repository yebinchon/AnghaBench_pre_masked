
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_bdma_chan {int lock; scalar_t__ regs; int active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tsi721_bdma_chan*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct tsi721_bdma_chan *VAR_2)
{
 if (!VAR_2->active)
  return;
 FUNC_1(&VAR_2->lock);
 if (!FUNC_3(VAR_2)) {
  int VAR_3 = 100000;


  FUNC_0(VAR_1,
     VAR_2->regs + VAR_0);


  while (!FUNC_3(VAR_2) && --VAR_3)
   FUNC_4(1);
 }

 FUNC_2(&VAR_2->lock);
}
