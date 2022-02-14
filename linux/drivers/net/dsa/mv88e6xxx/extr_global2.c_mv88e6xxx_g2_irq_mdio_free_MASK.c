
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct mii_bus {int * irq; } ;
struct TYPE_2__ {int num_internal_phys; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mv88e6xxx_chip *VAR_0,
    struct mii_bus *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->num_internal_phys; VAR_2++)
  FUNC_0(VAR_1->irq[VAR_2]);
}
