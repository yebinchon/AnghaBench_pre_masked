
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vsc8531_private {int base_addr; } ;
struct TYPE_3__ {TYPE_2__* bus; int dev; } ;
struct phy_device {TYPE_1__ mdio; struct vsc8531_private* priv; } ;
struct TYPE_4__ {int mdio_lock; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_0, u32 VAR_1)
{
 struct vsc8531_private *VAR_2 = VAR_0->priv;

 if (FUNC_4(!FUNC_3(&VAR_0->mdio.bus->mdio_lock))) {
  FUNC_1(&VAR_0->mdio.dev, "MDIO bus lock not held!\n");
  FUNC_2();
 }

 return FUNC_0(VAR_0->mdio.bus, VAR_2->base_addr, VAR_1);
}
