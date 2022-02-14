
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct phy_device {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1)
{


 return FUNC_0(VAR_1, VAR_0, 0x0180 | VAR_1->mdio.addr);
}
