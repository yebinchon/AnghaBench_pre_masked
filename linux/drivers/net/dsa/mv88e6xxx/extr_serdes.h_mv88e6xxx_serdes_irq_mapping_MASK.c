
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {unsigned int (* serdes_irq_mapping ) (struct mv88e6xxx_chip*,int) ;} ;


 unsigned int FUNC_0 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct mv88e6xxx_chip *VAR_0, int VAR_1)
{
 if (!VAR_0->info->ops->serdes_irq_mapping)
  return 0;

 return VAR_0->info->ops->serdes_irq_mapping(VAR_0, VAR_1);
}
