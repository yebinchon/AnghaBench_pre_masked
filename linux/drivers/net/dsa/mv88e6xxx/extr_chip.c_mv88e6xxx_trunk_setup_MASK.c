
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {scalar_t__ global2_addr; } ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_0)
{

 if (VAR_0->info->global2_addr)
  return FUNC_0(VAR_0);

 return 0;
}
