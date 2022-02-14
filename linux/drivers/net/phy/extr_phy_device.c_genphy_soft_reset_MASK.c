
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ,int ,int ) ;
 int FUNC_2 (struct phy_device*) ;

int FUNC_3(struct phy_device *VAR_6)
{
 u16 VAR_7 = VAR_4;
 int VAR_8;

 if (VAR_6->autoneg == VAR_1)
  VAR_7 |= VAR_2;

 VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_3, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  return VAR_8;


 if (VAR_6->autoneg == VAR_0)
  VAR_8 = FUNC_0(VAR_6);

 return VAR_8;
}
