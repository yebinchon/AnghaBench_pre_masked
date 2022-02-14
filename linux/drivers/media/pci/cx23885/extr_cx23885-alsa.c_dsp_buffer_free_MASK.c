
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx23885_riscmem {int dma; int cpu; int size; } ;
struct cx23885_audio_dev {scalar_t__ dma_size; TYPE_1__* buf; int pci; } ;
struct TYPE_3__ {struct cx23885_riscmem risc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct cx23885_audio_dev*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cx23885_audio_dev *VAR_0)
{
 struct cx23885_riscmem *VAR_1;

 FUNC_0(!VAR_0->dma_size);

 FUNC_3(2, "Freeing buffer\n");
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->buf);
 VAR_1 = &VAR_0->buf->risc;
 FUNC_5(VAR_0->pci, VAR_1->size, VAR_1->cpu, VAR_1->dma);
 FUNC_4(VAR_0->buf);

 VAR_0->buf = ((void*)0);
 VAR_0->dma_size = 0;

 return 0;
}
