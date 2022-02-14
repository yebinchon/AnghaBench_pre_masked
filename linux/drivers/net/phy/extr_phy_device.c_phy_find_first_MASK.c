
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (struct mii_bus*,int) ;

struct phy_device *FUNC_1(struct mii_bus *VAR_1)
{
 struct phy_device *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  if (VAR_2)
   return VAR_2;
 }
 return ((void*)0);
}
