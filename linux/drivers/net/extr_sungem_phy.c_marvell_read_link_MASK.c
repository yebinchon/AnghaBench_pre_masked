
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int pause; int duplex; int speed; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct mii_phy*,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_phy *VAR_13)
{
 u16 VAR_14, VAR_15;

 if (VAR_13->autoneg) {
  VAR_14 = FUNC_0(VAR_13, VAR_3);
  if ((VAR_14 & VAR_7) == 0)
   return -VAR_2;
  if (VAR_14 & VAR_5)
   VAR_13->speed = VAR_12;
  else if (VAR_14 & VAR_4)
   VAR_13->speed = VAR_11;
  else
   VAR_13->speed = VAR_10;
  if (VAR_14 & VAR_6)
   VAR_13->duplex = VAR_0;
  else
   VAR_13->duplex = VAR_1;
  VAR_15 = VAR_9 |
   VAR_8;
  VAR_13->pause = (VAR_14 & VAR_15) == VAR_15;
 }




 return 0;
}
