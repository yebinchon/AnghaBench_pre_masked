
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_controller {int pio_poll_mode; int irq; int dma_irq; scalar_t__ flash_dma_base; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct brcmnand_controller*) ;

__attribute__((used)) static inline void FUNC_2(struct brcmnand_controller *VAR_0)
{
 if (VAR_0->pio_poll_mode)
  return;

 if (FUNC_1(VAR_0)) {
  VAR_0->flash_dma_base = 0;
  FUNC_0(VAR_0->dma_irq);
 }

 FUNC_0(VAR_0->irq);
 VAR_0->pio_poll_mode = 1;
}
