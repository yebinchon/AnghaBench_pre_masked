
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*) ;

int FUNC_3(struct phy_device *VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3;

 if (VAR_1->autoneg == VAR_0)
  return FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 > 0)
  VAR_2 = 1;

 return FUNC_1(VAR_1, VAR_2);
}
