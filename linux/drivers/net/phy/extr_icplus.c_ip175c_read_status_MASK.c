
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct phy_device {int irq; TYPE_1__ mdio; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1)
{
 if (VAR_1->mdio.addr == 4)
  FUNC_0(VAR_1);
 else

  VAR_1->irq = VAR_0;

 return 0;
}
