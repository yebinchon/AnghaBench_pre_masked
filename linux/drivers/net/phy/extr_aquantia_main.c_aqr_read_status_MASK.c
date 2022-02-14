
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int lp_advertising; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_7)
{
 int VAR_8;

 if (VAR_7->autoneg == VAR_0) {
  VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_3);
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_1(VAR_1,
     VAR_7->lp_advertising,
     VAR_8 & VAR_4);
  FUNC_1(VAR_2,
     VAR_7->lp_advertising,
     VAR_8 & VAR_5);
 }

 return FUNC_0(VAR_7);
}
