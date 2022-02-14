
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {int port_base_addr; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int,int ) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_0, int VAR_1, int VAR_2,
    u16 VAR_3)
{
 int VAR_4 = VAR_0->info->port_base_addr + VAR_1;

 return FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3);
}
