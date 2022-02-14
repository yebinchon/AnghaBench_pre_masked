
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3cmci_host {int dma_complete; int complete_lock; int pio_tasklet; int complete_what; TYPE_1__* mrq; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct s3cmci_host*,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct s3cmci_host *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_0(!VAR_3->mrq);
 FUNC_0(!VAR_3->mrq->data);

 FUNC_2(&VAR_3->complete_lock, VAR_4);

 FUNC_1(VAR_3, VAR_1, "DMA FINISHED\n");

 VAR_3->dma_complete = 1;
 VAR_3->complete_what = VAR_0;

 FUNC_4(&VAR_3->pio_tasklet);
 FUNC_3(&VAR_3->complete_lock, VAR_4);

}
