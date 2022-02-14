
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; void* name; } ;
struct TYPE_7__ {int base; int parent; void* label; int ngpio; } ;
struct intel_pinctrl {int irq; int ncommunities; TYPE_3__ irqchip; TYPE_1__ chip; int dev; struct intel_community* communities; } ;
struct intel_community {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,struct intel_pinctrl*) ;
 int FUNC_3 (int ,int,int ,int,void*,struct intel_pinctrl*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct intel_pinctrl*,struct intel_community*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct intel_pinctrl*) ;

__attribute__((used)) static int FUNC_8(struct intel_pinctrl *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;

 VAR_12->chip = VAR_5;


 VAR_12->chip.ngpio = FUNC_7(VAR_12);
 VAR_12->chip.label = FUNC_1(VAR_12->dev);
 VAR_12->chip.parent = VAR_12->dev;
 VAR_12->chip.base = -1;
 VAR_12->irq = VAR_13;


 VAR_12->irqchip.name = FUNC_1(VAR_12->dev);
 VAR_12->irqchip.irq_ack = VAR_7;
 VAR_12->irqchip.irq_mask = VAR_8;
 VAR_12->irqchip.irq_unmask = VAR_10;
 VAR_12->irqchip.irq_set_type = VAR_9;
 VAR_12->irqchip.irq_set_wake = VAR_11;
 VAR_12->irqchip.flags = VAR_0;

 VAR_14 = FUNC_2(VAR_12->dev, &VAR_12->chip, VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_12->dev, "failed to register gpiochip\n");
  return VAR_14;
 }

 for (VAR_15 = 0; VAR_15 < VAR_12->ncommunities; VAR_15++) {
  struct intel_community *VAR_16 = &VAR_12->communities[VAR_15];

  VAR_14 = FUNC_6(VAR_12, VAR_16);
  if (VAR_14) {
   FUNC_0(VAR_12->dev, "failed to add GPIO pin range\n");
   return VAR_14;
  }
 }






 VAR_14 = FUNC_3(VAR_12->dev, VAR_13, VAR_6,
          VAR_2 | VAR_1,
          FUNC_1(VAR_12->dev), VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_12->dev, "failed to request interrupt\n");
  return VAR_14;
 }

 VAR_14 = FUNC_4(&VAR_12->chip, &VAR_12->irqchip, 0,
       VAR_4, VAR_3);
 if (VAR_14) {
  FUNC_0(VAR_12->dev, "failed to add irqchip\n");
  return VAR_14;
 }

 FUNC_5(&VAR_12->chip, &VAR_12->irqchip, VAR_13, ((void*)0));
 return 0;
}
