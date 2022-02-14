
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_riscmem {int dma; scalar_t__ cpu; int size; } ;
struct cx88_audio_dev {TYPE_1__* buf; int pci; int dma_size; } ;
struct TYPE_3__ {struct cx88_riscmem risc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct cx88_audio_dev*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct cx88_audio_dev *VAR_0)
{
 struct cx88_riscmem *VAR_1 = &VAR_0->buf->risc;

 FUNC_0(!VAR_0->dma_size);

 FUNC_3(2, "Freeing buffer\n");
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->buf);
 if (VAR_1->cpu)
  FUNC_5(VAR_0->pci, VAR_1->size,
        VAR_1->cpu, VAR_1->dma);
 FUNC_4(VAR_0->buf);

 VAR_0->buf = ((void*)0);

 return 0;
}
