
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bus; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct phy_device *VAR_0)
{
 FUNC_1(&VAR_0->mdio.bus->mdio_lock);
 return FUNC_0(VAR_0);
}
