
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx25821_dev {int pci; } ;
struct TYPE_2__ {scalar_t__ size; int dma; int cpu; } ;
struct cx25821_buffer {TYPE_1__ risc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;

void FUNC_5(struct cx25821_dev *VAR_0, struct cx25821_buffer *VAR_1)
{
 FUNC_0(FUNC_2());
 if (FUNC_1(VAR_1->risc.size == 0))
  return;
 FUNC_4(VAR_0->pci,
   VAR_1->risc.size, VAR_1->risc.cpu, VAR_1->risc.dma);
 FUNC_3(&VAR_1->risc, 0, sizeof(VAR_1->risc));
}
