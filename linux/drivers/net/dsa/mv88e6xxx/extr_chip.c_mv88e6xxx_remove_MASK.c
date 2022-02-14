
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {scalar_t__ irq; TYPE_1__* info; } ;
struct mdio_device {int dev; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {scalar_t__ g2_irqs; scalar_t__ ptp_support; } ;


 struct dsa_switch* FUNC_0 (int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;
 int FUNC_6 (struct mv88e6xxx_chip*) ;
 int FUNC_7 (struct mv88e6xxx_chip*) ;
 int FUNC_8 (struct mv88e6xxx_chip*) ;
 int FUNC_9 (struct mv88e6xxx_chip*) ;
 int FUNC_10 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_11(struct mdio_device *VAR_0)
{
 struct dsa_switch *VAR_1 = FUNC_0(&VAR_0->dev);
 struct mv88e6xxx_chip *VAR_2 = VAR_1->priv;

 if (VAR_2->info->ptp_support) {
  FUNC_5(VAR_2);
  FUNC_9(VAR_2);
 }

 FUNC_8(VAR_2);
 FUNC_10(VAR_2);
 FUNC_7(VAR_2);

 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_2->info->g2_irqs > 0)
  FUNC_4(VAR_2);

 if (VAR_2->irq > 0)
  FUNC_2(VAR_2);
 else
  FUNC_6(VAR_2);
}
