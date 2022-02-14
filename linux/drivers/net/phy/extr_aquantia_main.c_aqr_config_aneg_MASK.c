
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ autoneg; int advertising; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct phy_device*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_7)
{
 bool VAR_8 = 0;
 u16 VAR_9;
 int VAR_10;

 if (VAR_7->autoneg == VAR_0)
  return FUNC_2(VAR_7);

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 > 0)
  VAR_8 = 1;




 VAR_9 = 0;
 if (FUNC_3(VAR_1,
         VAR_7->advertising))
  VAR_9 |= VAR_4;

 if (FUNC_3(VAR_2,
         VAR_7->advertising))
  VAR_9 |= VAR_5;

 VAR_10 = FUNC_4(VAR_7, VAR_6, VAR_3,
         VAR_5 |
         VAR_4, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 > 0)
  VAR_8 = 1;

 return FUNC_1(VAR_7, VAR_8);
}
