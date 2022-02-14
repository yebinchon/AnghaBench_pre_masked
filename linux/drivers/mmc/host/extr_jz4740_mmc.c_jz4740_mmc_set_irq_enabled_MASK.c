
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4740_mmc_host {unsigned int irq_mask; int lock; } ;


 int FUNC_0 (struct jz4740_mmc_host*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct jz4740_mmc_host *VAR_0,
 unsigned int VAR_1, bool VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 if (VAR_2)
  VAR_0->irq_mask &= ~VAR_1;
 else
  VAR_0->irq_mask |= VAR_1;

 FUNC_0(VAR_0, VAR_0->irq_mask);
 FUNC_2(&VAR_0->lock, VAR_3);
}
