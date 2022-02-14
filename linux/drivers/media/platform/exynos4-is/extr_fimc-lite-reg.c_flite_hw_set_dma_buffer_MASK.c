
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct flite_buffer {unsigned int index; int paddr; } ;
struct fimc_lite {scalar_t__ regs; TYPE_1__* dd; } ;
struct TYPE_2__ {int max_dma_bufs; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct fimc_lite *VAR_2, struct flite_buffer *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;

 if (VAR_2->dd->max_dma_bufs == 1)
  VAR_4 = 0;
 else
  VAR_4 = VAR_3->index;

 if (VAR_4 == 0)
  FUNC_3(VAR_3->paddr, VAR_2->regs + VAR_1);
 else
  FUNC_3(VAR_3->paddr, VAR_2->regs + FUNC_1(VAR_4 - 1));

 VAR_5 = FUNC_2(VAR_2->regs + VAR_0);
 VAR_5 |= FUNC_0(VAR_4);
 FUNC_3(VAR_5, VAR_2->regs + VAR_0);
}
