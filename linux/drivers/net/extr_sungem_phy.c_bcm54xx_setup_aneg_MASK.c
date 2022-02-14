
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_25, u32 VAR_26)
{
 u16 VAR_27, VAR_28;

 VAR_25->autoneg = 1;
 VAR_25->speed = VAR_22;
 VAR_25->duplex = VAR_16;
 VAR_25->pause = 0;
 VAR_25->advertising = VAR_26;


 VAR_28 = FUNC_0(VAR_25, VAR_20);
 VAR_28 &= ~(VAR_11 | VAR_6);
 if (VAR_26 & VAR_3)
  VAR_28 |= VAR_10;
 if (VAR_26 & VAR_2)
  VAR_28 |= VAR_9;
 if (VAR_26 & VAR_1)
  VAR_28 |= VAR_8;
 if (VAR_26 & VAR_0)
  VAR_28 |= VAR_7;
 if (VAR_26 & VAR_5)
  VAR_28 |= VAR_13;
 if (VAR_26 & VAR_4)
  VAR_28 |= VAR_12;
 FUNC_1(VAR_25, VAR_20, VAR_28);


 VAR_28 = FUNC_0(VAR_25, VAR_17);
 VAR_28 &= ~(VAR_18|VAR_19);
 if (VAR_26 & VAR_24)
  VAR_28 |= VAR_19;
 if (VAR_26 & VAR_23)
  VAR_28 |= VAR_18;
 FUNC_1(VAR_25, VAR_17, VAR_28);


 VAR_27 = FUNC_0(VAR_25, VAR_21);
 VAR_27 |= (VAR_14 | VAR_15);
 FUNC_1(VAR_25, VAR_21, VAR_27);

 return 0;
}
