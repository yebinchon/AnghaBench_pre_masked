
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_phy*,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_phy *VAR_3)
{
 u16 VAR_4;

 (void)FUNC_0(VAR_3, VAR_2);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if ((VAR_4 & VAR_1) == 0)
  return 0;
 if (VAR_3->autoneg && !(VAR_4 & VAR_0))
  return 0;
 return 1;
}
