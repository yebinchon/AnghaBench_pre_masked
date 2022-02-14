
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp_upstream_ops {int (* connect_phy ) (int ,struct phy_device*) ;} ;
struct sfp_bus {struct phy_device* phydev; int upstream; } ;
struct phy_device {int dummy; } ;


 struct sfp_upstream_ops* FUNC_0 (struct sfp_bus*) ;
 int FUNC_1 (int ,struct phy_device*) ;

int FUNC_2(struct sfp_bus *VAR_0, struct phy_device *VAR_1)
{
 const struct sfp_upstream_ops *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 if (VAR_2 && VAR_2->connect_phy)
  VAR_3 = VAR_2->connect_phy(VAR_0->upstream, VAR_1);

 if (VAR_3 == 0)
  VAR_0->phydev = VAR_1;

 return VAR_3;
}
