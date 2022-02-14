
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; struct mii_bus* bus; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_bus*,int,int ) ;
 int FUNC_1 (struct mii_bus*,int,int ,int) ;
 int FUNC_2 (struct phy_device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_2, int VAR_3, u16 VAR_4)
{
 struct mii_bus *VAR_5 = VAR_2->mdio.bus;
 int VAR_6 = VAR_2->mdio.addr;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_1,
         VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_5, VAR_6, VAR_0);
}
