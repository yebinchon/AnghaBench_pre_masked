
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct mii_bus {int dummy; } ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 struct phy_device* FUNC_1 (struct mii_bus*,int,int) ;
 int FUNC_2 (struct phy_device*) ;
 scalar_t__ FUNC_3 (struct phy_device*) ;

struct phy_device *FUNC_4(struct mii_bus *VAR_0, int VAR_1)
{
 struct phy_device *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, 0);
 if (!VAR_2 || FUNC_0(VAR_2))
  return ((void*)0);

 if (FUNC_3(VAR_2))
  FUNC_2(VAR_2);

 return VAR_2;
}
