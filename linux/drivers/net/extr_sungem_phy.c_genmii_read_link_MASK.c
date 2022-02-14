
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {scalar_t__ pause; int speed; int duplex; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mii_phy*,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_phy *VAR_8)
{
 u16 VAR_9;

 if (VAR_8->autoneg) {
  VAR_9 = FUNC_0(VAR_8, VAR_5);

  if (VAR_9 & (VAR_4 | VAR_2))
   VAR_8->duplex = VAR_0;
  else
   VAR_8->duplex = VAR_1;
  if (VAR_9 & (VAR_2 | VAR_3))
   VAR_8->speed = VAR_7;
  else
   VAR_8->speed = VAR_6;
  VAR_8->pause = 0;
 }




  return 0;
}
