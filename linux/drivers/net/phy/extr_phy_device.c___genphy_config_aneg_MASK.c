
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*,int ) ;

int FUNC_5(struct phy_device *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_4))
  VAR_5 = 1;

 if (VAR_0 != VAR_4->autoneg)
  return FUNC_3(VAR_4);

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6)
  VAR_5 = 1;

 if (!VAR_5) {



  int VAR_7 = FUNC_4(VAR_4, VAR_3);

  if (VAR_7 < 0)
   return VAR_7;

  if (!(VAR_7 & VAR_1) || (VAR_7 & VAR_2))
   VAR_5 = 1;
 }




 return VAR_5 ? FUNC_2(VAR_4) : 0;
}
