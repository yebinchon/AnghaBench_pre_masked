
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct npcm7xx_gpio {scalar_t__ base; int gc; } ;
struct irq_data {TYPE_1__* chip; int irq; int hwirq; } ;
struct TYPE_2__ {int parent_device; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 struct npcm7xx_gpio* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;
 int FUNC_5 (int *,scalar_t__,unsigned int) ;
 int FUNC_6 (int *,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_6, unsigned int VAR_7)
{
 struct npcm7xx_gpio *VAR_8 =
  FUNC_2(FUNC_3(VAR_6));
 unsigned int VAR_9 = FUNC_0(VAR_6->hwirq);

 FUNC_1(VAR_6->chip->parent_device, "setirqtype: %u.%u = %u\n", VAR_9,
  VAR_6->irq, VAR_7);
 switch (VAR_7) {
 case 130:
  FUNC_1(VAR_6->chip->parent_device, "edge.rising\n");
  FUNC_5(&VAR_8->gc, VAR_8->base + VAR_1, VAR_9);
  FUNC_5(&VAR_8->gc, VAR_8->base + VAR_3, VAR_9);
  break;
 case 131:
  FUNC_1(VAR_6->chip->parent_device, "edge.falling\n");
  FUNC_5(&VAR_8->gc, VAR_8->base + VAR_1, VAR_9);
  FUNC_6(&VAR_8->gc, VAR_8->base + VAR_3, VAR_9);
  break;
 case 132:
  FUNC_1(VAR_6->chip->parent_device, "edge.both\n");
  FUNC_6(&VAR_8->gc, VAR_8->base + VAR_1, VAR_9);
  break;
 case 128:
  FUNC_1(VAR_6->chip->parent_device, "level.low\n");
  FUNC_6(&VAR_8->gc, VAR_8->base + VAR_3, VAR_9);
  break;
 case 129:
  FUNC_1(VAR_6->chip->parent_device, "level.high\n");
  FUNC_5(&VAR_8->gc, VAR_8->base + VAR_3, VAR_9);
  break;
 default:
  FUNC_1(VAR_6->chip->parent_device, "invalid irq type\n");
  return -VAR_0;
 }

 if (VAR_7 & (129 | 128)) {
  FUNC_5(&VAR_8->gc, VAR_8->base + VAR_2, VAR_9);
  FUNC_4(VAR_6, VAR_5);
 } else if (VAR_7 & (132 | 130
      | 131)) {
  FUNC_6(&VAR_8->gc, VAR_8->base + VAR_2, VAR_9);
  FUNC_4(VAR_6, VAR_4);
 }

 return 0;
}
