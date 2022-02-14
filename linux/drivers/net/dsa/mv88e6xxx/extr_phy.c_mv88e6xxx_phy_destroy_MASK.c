
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ ppu_disable; scalar_t__ ppu_enable; } ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;

void FUNC_1(struct mv88e6xxx_chip *VAR_0)
{
 if (VAR_0->info->ops->ppu_enable && VAR_0->info->ops->ppu_disable)
  FUNC_0(VAR_0);
}
