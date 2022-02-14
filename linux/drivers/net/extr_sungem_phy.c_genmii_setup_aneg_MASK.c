
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_phy {int autoneg; int advertising; scalar_t__ pause; int duplex; int speed; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_16, u32 VAR_17)
{
 u16 VAR_18, VAR_19;

 VAR_16->autoneg = 1;
 VAR_16->speed = VAR_15;
 VAR_16->duplex = VAR_12;
 VAR_16->pause = 0;
 VAR_16->advertising = VAR_17;


 VAR_19 = FUNC_0(VAR_16, VAR_13);
 VAR_19 &= ~(VAR_9 | VAR_4);
 if (VAR_17 & VAR_3)
  VAR_19 |= VAR_8;
 if (VAR_17 & VAR_2)
  VAR_19 |= VAR_7;
 if (VAR_17 & VAR_1)
  VAR_19 |= VAR_6;
 if (VAR_17 & VAR_0)
  VAR_19 |= VAR_5;
 FUNC_1(VAR_16, VAR_13, VAR_19);


 VAR_18 = FUNC_0(VAR_16, VAR_14);
 VAR_18 |= (VAR_10 | VAR_11);
 FUNC_1(VAR_16, VAR_14, VAR_18);

 return 0;
}
