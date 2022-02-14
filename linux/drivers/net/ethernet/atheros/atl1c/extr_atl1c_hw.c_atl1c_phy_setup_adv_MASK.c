
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1c_hw {int autoneg_advertised; int link_cap_flags; } ;


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
 scalar_t__ FUNC_0 (struct atl1c_hw*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct atl1c_hw *VAR_20)
{
 u16 VAR_21 = VAR_14 & ~VAR_13;
 u16 VAR_22 = VAR_16 &
    ~VAR_17;

 if (VAR_20->autoneg_advertised & VAR_5)
  VAR_21 |= VAR_12;
 if (VAR_20->autoneg_advertised & VAR_4)
  VAR_21 |= VAR_11;
 if (VAR_20->autoneg_advertised & VAR_3)
  VAR_21 |= VAR_10;
 if (VAR_20->autoneg_advertised & VAR_2)
  VAR_21 |= VAR_9;

 if (VAR_20->autoneg_advertised & VAR_6)
  VAR_21 |= VAR_12 | VAR_11 |
    VAR_10 | VAR_9;

 if (VAR_20->link_cap_flags & VAR_15) {
  if (VAR_20->autoneg_advertised & VAR_1)
   VAR_22 |= VAR_8;
  if (VAR_20->autoneg_advertised & VAR_0)
   VAR_22 |= VAR_7;
  if (VAR_20->autoneg_advertised & VAR_6)
   VAR_22 |= VAR_8 |
     VAR_7;
 }

 if (FUNC_0(VAR_20, VAR_18, VAR_21) != 0 ||
     FUNC_0(VAR_20, VAR_19, VAR_22) != 0)
  return -1;
 return 0;
}
