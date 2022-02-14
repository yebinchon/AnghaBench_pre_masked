
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct dp83640_clock {int chosen; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dp83640_clock *VAR_1,
      struct phy_device *VAR_2)
{
 if (VAR_0 == -1 && !VAR_1->chosen)
  return 1;

 if (VAR_0 == VAR_2->mdio.addr)
  return 1;

 return 0;
}
