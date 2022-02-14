
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int masked; } ;
struct mv88e6xxx_chip {int dev; TYPE_1__ g2_irq; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct mv88e6xxx_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct mv88e6xxx_chip *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, ~VAR_1->g2_irq.masked);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "failed to mask interrupts\n");

 FUNC_3(VAR_1);
}
