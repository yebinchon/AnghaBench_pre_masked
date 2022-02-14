
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int advertising; int adv_old; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct phy_device*) ;

int FUNC_6(struct phy_device *VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_2->autoneg != VAR_0)
  return 0;

 if (FUNC_2(VAR_2->adv_old))
  return 0;

 FUNC_1(VAR_1, VAR_2->advertising);
 FUNC_1(VAR_2->advertising, VAR_2->adv_old);
 FUNC_4(VAR_2->adv_old);

 if (FUNC_3(VAR_2->advertising, VAR_1))
  return 0;

 return FUNC_5(VAR_2);
}
