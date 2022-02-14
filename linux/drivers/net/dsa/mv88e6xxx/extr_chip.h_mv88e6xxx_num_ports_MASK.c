
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int num_ports; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct mv88e6xxx_chip *VAR_0)
{
 return VAR_0->info->num_ports;
}
