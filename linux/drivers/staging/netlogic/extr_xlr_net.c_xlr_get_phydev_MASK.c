
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int phy_addr; int mii_bus; } ;
struct phy_device {int dummy; } ;


 struct phy_device* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct phy_device *FUNC_1(struct xlr_net_priv *VAR_0)
{
 return FUNC_0(VAR_0->mii_bus, VAR_0->phy_addr);
}
