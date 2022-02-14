
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; int bus; } ;
struct phy_device {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1, u16 VAR_2)
{
 return FUNC_0(VAR_1->mdio.bus, VAR_1->mdio.addr,
       VAR_0 | VAR_2);
}
