
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;




 if (VAR_3 == VAR_1)
  VAR_4 = 1;
 else
  VAR_4 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_2->autoneg == VAR_0)
  VAR_5 = FUNC_0(VAR_2, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_2);

 return VAR_5;
}
