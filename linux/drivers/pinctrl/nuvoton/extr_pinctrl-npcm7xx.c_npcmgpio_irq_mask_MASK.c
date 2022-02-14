
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct npcm7xx_gpio {scalar_t__ base; } ;
struct irq_data {unsigned int hwirq; int irq; TYPE_1__* chip; } ;
struct TYPE_2__ {int parent_device; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int,int ) ;
 struct npcm7xx_gpio* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct npcm7xx_gpio *VAR_2 =
  FUNC_2(FUNC_4(VAR_1));
 unsigned int VAR_3 = VAR_1->hwirq;


 FUNC_1(VAR_1->chip->parent_device, "irq_mask: %u.%u\n", VAR_3, VAR_1->irq);
 FUNC_3(FUNC_0(VAR_3), VAR_2->base + VAR_0);
}
