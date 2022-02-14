
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int speed; int duplex; scalar_t__ pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_7, int VAR_8, int VAR_9)
{
 u16 VAR_10;

 VAR_7->autoneg = 0;
 VAR_7->speed = VAR_8;
 VAR_7->duplex = VAR_9;
 VAR_7->pause = 0;

 VAR_10 = FUNC_0(VAR_7, VAR_6);
 VAR_10 &= ~(VAR_1|VAR_4|VAR_3|VAR_0);


 FUNC_1(VAR_7, VAR_6, VAR_10 | VAR_2);


 switch(VAR_8) {
 case 130:
  break;
 case 129:
  VAR_10 |= VAR_4;
  break;
 case 128:
  VAR_10 |= VAR_3;
 }
 if (VAR_9 == VAR_5)
  VAR_10 |= VAR_1;



 FUNC_1(VAR_7, VAR_6, VAR_10);

 return 0;
}
