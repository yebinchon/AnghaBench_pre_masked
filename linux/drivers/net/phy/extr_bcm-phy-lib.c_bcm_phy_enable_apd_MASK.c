
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

int FUNC_2(struct phy_device *VAR_8, bool VAR_9)
{
 int VAR_10;

 if (VAR_9) {
  VAR_10 = FUNC_0(VAR_8, VAR_3);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 |= VAR_4;
  FUNC_1(VAR_8, VAR_3, VAR_10);
 }

 VAR_10 = FUNC_0(VAR_8, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 &= VAR_5;

 if (VAR_8->autoneg == VAR_0)
  VAR_10 |= VAR_2;
 else
  VAR_10 |= VAR_7;


 VAR_10 |= VAR_6;


 return FUNC_1(VAR_8, VAR_1, VAR_10);
}
