
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int mdix_ctrl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_3->mdix_ctrl);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_1,
   VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3->autoneg != VAR_0 || VAR_4) {




  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
