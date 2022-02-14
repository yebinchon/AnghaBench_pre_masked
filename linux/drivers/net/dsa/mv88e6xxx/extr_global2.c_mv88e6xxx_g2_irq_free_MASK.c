
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; } ;
struct mv88e6xxx_chip {int device_irq; TYPE_1__ g2_irq; } ;


 int FUNC_0 (int,struct mv88e6xxx_chip*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

void FUNC_5(struct mv88e6xxx_chip *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_4(VAR_0);

 FUNC_0(VAR_0->device_irq, VAR_0);
 FUNC_1(VAR_0->device_irq);

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  VAR_2 = FUNC_3(VAR_0->g2_irq.domain, VAR_1);
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_0->g2_irq.domain);
}
