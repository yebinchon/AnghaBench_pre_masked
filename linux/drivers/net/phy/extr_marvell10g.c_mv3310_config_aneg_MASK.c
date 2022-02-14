
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ autoneg; int advertising; int mdix_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct phy_device*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_6)
{
 bool VAR_7 = 0;
 u16 VAR_8;
 int VAR_9;


 VAR_6->mdix_ctrl = VAR_3;

 if (VAR_6->autoneg == VAR_2)
  return FUNC_2(VAR_6);

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 > 0)
  VAR_7 = 1;




 VAR_8 = FUNC_3(VAR_6->advertising);
 VAR_9 = FUNC_4(VAR_6, VAR_4, VAR_5,
        VAR_0 | VAR_1, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 > 0)
  VAR_7 = 1;

 return FUNC_1(VAR_6, VAR_7);
}
