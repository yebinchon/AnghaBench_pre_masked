
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {int supported; int active_autoneg; int active_advertising; int active_speed; int active_duplex; } ;
struct niu {int phy_addr; struct niu_link_config link_config; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct niu*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_41, int *VAR_42)
{
 struct niu_link_config *VAR_43 = &VAR_41->link_config;
 int VAR_44;
 int VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;
 int VAR_52, VAR_53, VAR_54, VAR_55;

 VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_24);
 if (FUNC_4(VAR_44 < 0))
  return VAR_44;
 VAR_50 = VAR_44;

 VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_25);
 if (FUNC_4(VAR_44 < 0))
  return VAR_44;
 VAR_45 = VAR_44;

 VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_23);
 if (FUNC_4(VAR_44 < 0))
  return VAR_44;
 VAR_46 = VAR_44;

 VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_28);
 if (FUNC_4(VAR_44 < 0))
  return VAR_44;
 VAR_49 = VAR_44;

 if (FUNC_0(VAR_45 & VAR_10)) {
  VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_27);
  if (FUNC_4(VAR_44 < 0))
   return VAR_44;
  VAR_51 = VAR_44;

  VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_26);
  if (FUNC_4(VAR_44 < 0))
   return VAR_44;
  VAR_47 = VAR_44;

  VAR_44 = FUNC_3(VAR_41, VAR_41->phy_addr, VAR_29);
  if (FUNC_4(VAR_44 < 0))
   return VAR_44;
  VAR_48 = VAR_44;
 } else
  VAR_51 = VAR_47 = VAR_48 = 0;

 VAR_52 = 0;
 if (VAR_45 & VAR_9)
  VAR_52 |= VAR_40;
 if (VAR_45 & VAR_8)
  VAR_52 |= VAR_39;
 if (VAR_45 & VAR_7)
  VAR_52 |= VAR_38;
 if (VAR_45 & VAR_6)
  VAR_52 |= VAR_37;
 if (VAR_45 & VAR_5)
  VAR_52 |= VAR_36;
 if (VAR_51 & VAR_16)
  VAR_52 |= VAR_35;
 if (VAR_51 & VAR_15)
  VAR_52 |= VAR_34;
 VAR_43->supported = VAR_52;

 VAR_53 = FUNC_1(VAR_46);
 VAR_53 |= FUNC_2(VAR_47);

 if (VAR_50 & VAR_1) {
  int VAR_56, VAR_57;

  VAR_43->active_autoneg = 1;
  VAR_53 |= VAR_0;

  VAR_56 = VAR_46 & VAR_49;
  VAR_57 = (VAR_47 << 2) & VAR_48;

  if (VAR_57 & (VAR_18 | VAR_19))
   VAR_54 = VAR_32;
  else if (VAR_56 & VAR_17)
   VAR_54 = VAR_31;
  else if (VAR_56 & (VAR_21 | VAR_20))
   VAR_54 = VAR_30;
  else
   VAR_54 = VAR_33;

  if ((VAR_57 & VAR_18) || (VAR_56 & VAR_22))
   VAR_55 = VAR_12;
  else if (VAR_54 != VAR_33)
   VAR_55 = VAR_13;
  else
   VAR_55 = VAR_14;
 } else {
  VAR_43->active_autoneg = 0;

  if ((VAR_50 & VAR_4) && !(VAR_50 & VAR_3))
   VAR_54 = VAR_32;
  else if (VAR_50 & VAR_3)
   VAR_54 = VAR_31;
  else
   VAR_54 = VAR_30;

  if (VAR_50 & VAR_2)
   VAR_55 = VAR_12;
  else
   VAR_55 = VAR_13;
 }

 VAR_43->active_advertising = VAR_53;
 VAR_43->active_speed = VAR_54;
 VAR_43->active_duplex = VAR_55;
 *VAR_42 = !!(VAR_45 & VAR_11);

 return 0;
}
