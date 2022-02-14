
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbe_slave {TYPE_1__* phy; } ;
struct TYPE_2__ {scalar_t__ link; } ;



__attribute__((used)) static bool FUNC_0(struct gbe_slave *VAR_0)
{
  return !VAR_0->phy || VAR_0->phy->link;
}
