
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int num_internal_phys; } ;



__attribute__((used)) static int FUNC_0(struct dsa_switch *VAR_0, int VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = VAR_0->priv;

 return VAR_1 < VAR_2->info->num_internal_phys;
}
