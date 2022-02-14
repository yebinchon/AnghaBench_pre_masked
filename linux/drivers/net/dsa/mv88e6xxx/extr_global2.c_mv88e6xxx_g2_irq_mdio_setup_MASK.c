
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int domain; } ;
struct mv88e6xxx_chip {TYPE_2__* info; TYPE_1__ g2_irq; } ;
struct mii_bus {int* irq; } ;
struct TYPE_4__ {int num_internal_phys; int phy_base_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_0,
    struct mii_bus *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->num_internal_phys; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0->g2_irq.domain, VAR_2);
  if (VAR_3 < 0) {
   VAR_4 = VAR_3;
   goto out;
  }
  VAR_1->irq[VAR_0->info->phy_base_addr + VAR_2] = VAR_3;
 }
 return 0;
out:
 VAR_5 = VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++)
  FUNC_0(VAR_1->irq[VAR_2]);

 return VAR_4;
}
