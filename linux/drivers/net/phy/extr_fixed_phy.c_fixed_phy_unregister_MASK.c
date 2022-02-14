
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {int addr; TYPE_1__ dev; } ;
struct phy_device {TYPE_2__ mdio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*) ;

void FUNC_3(struct phy_device *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mdio.dev.of_node);
 FUNC_0(VAR_0->mdio.addr);
}
