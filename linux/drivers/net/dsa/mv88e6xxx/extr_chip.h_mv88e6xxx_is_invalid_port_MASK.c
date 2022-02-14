
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {int invalid_port_mask; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct mv88e6xxx_chip *VAR_0, int VAR_1)
{
 return (VAR_0->info->invalid_port_mask & FUNC_0(VAR_1)) != 0;
}
