
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int finish_tasklet; int timeout_tasklet; int crc_tasklet; int fifo_tasklet; int card_tasklet; scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct wbsd_host*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wbsd_host *VAR_0)
{
 if (!VAR_0->irq)
  return;

 FUNC_0(VAR_0->irq, VAR_0);

 VAR_0->irq = 0;

 FUNC_1(&VAR_0->card_tasklet);
 FUNC_1(&VAR_0->fifo_tasklet);
 FUNC_1(&VAR_0->crc_tasklet);
 FUNC_1(&VAR_0->timeout_tasklet);
 FUNC_1(&VAR_0->finish_tasklet);
}
