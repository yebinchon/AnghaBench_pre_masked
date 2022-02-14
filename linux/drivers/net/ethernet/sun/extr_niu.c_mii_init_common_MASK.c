
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct niu_link_config {scalar_t__ loopback_mode; scalar_t__ active_speed; scalar_t__ active_duplex; int advertising; scalar_t__ duplex; scalar_t__ speed; scalar_t__ autoneg; } ;
struct niu {int port; int phy_addr; struct niu_link_config link_config; } ;


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
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct niu*,int ,int ) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*,int ,int ,int) ;
 int FUNC_4 (char*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_43)
{
 struct niu_link_config *VAR_44 = &VAR_43->link_config;
 u16 VAR_45, VAR_46, VAR_47, VAR_48;
 int VAR_49;

 VAR_49 = FUNC_2(VAR_43);
 if (VAR_49)
  return VAR_49;

 VAR_49 = FUNC_1(VAR_43, VAR_43->phy_addr, VAR_37);
 if (VAR_49 < 0)
  return VAR_49;
 VAR_46 = VAR_49;

 VAR_48 = 0;
 if (VAR_46 & VAR_27) {
  VAR_49 = FUNC_1(VAR_43, VAR_43->phy_addr, VAR_39);
  if (VAR_49 < 0)
   return VAR_49;
  VAR_48 = VAR_49;
 }

 VAR_45 = 0;
 VAR_49 = FUNC_3(VAR_43, VAR_43->phy_addr, VAR_36, VAR_45);
 if (VAR_49)
  return VAR_49;

 if (VAR_44->loopback_mode == VAR_33) {
  VAR_45 |= VAR_20;
  if (VAR_44->active_speed == VAR_42)
   VAR_45 |= VAR_22;
  if (VAR_44->active_duplex == VAR_28)
   VAR_45 |= VAR_19;
 }

 if (VAR_44->loopback_mode == VAR_34) {
  u16 VAR_50;

  VAR_50 = (VAR_15 |
         VAR_16);
  VAR_49 = FUNC_3(VAR_43, VAR_43->phy_addr, VAR_14, VAR_50);
  if (VAR_49)
   return VAR_49;
 }

 if (VAR_44->autoneg) {
  u16 VAR_51;

  VAR_47 = VAR_12 | VAR_13;
  if ((VAR_46 & VAR_26) &&
   (VAR_44->advertising & VAR_5))
   VAR_47 |= VAR_11;
  if ((VAR_46 & VAR_25) &&
   (VAR_44->advertising & VAR_4))
   VAR_47 |= VAR_10;
  if ((VAR_46 & VAR_24) &&
   (VAR_44->advertising & VAR_3))
   VAR_47 |= VAR_9;
  if ((VAR_46 & VAR_23) &&
   (VAR_44->advertising & VAR_2))
   VAR_47 |= VAR_8;
  VAR_49 = FUNC_3(VAR_43, VAR_43->phy_addr, VAR_35, VAR_47);
  if (VAR_49)
   return VAR_49;

  if (FUNC_0(VAR_46 & VAR_27)) {
   VAR_51 = 0;
   if ((VAR_48 & VAR_32) &&
    (VAR_44->advertising & VAR_1))
    VAR_51 |= VAR_7;
   if ((VAR_48 & VAR_31) &&
    (VAR_44->advertising & VAR_0))
    VAR_51 |= VAR_6;
   VAR_49 = FUNC_3(VAR_43, VAR_43->phy_addr,
     VAR_38, VAR_51);
   if (VAR_49)
    return VAR_49;
  }

  VAR_45 |= (VAR_17 | VAR_18);
 } else {

  int VAR_52;

  if (VAR_44->duplex == VAR_28) {
   VAR_45 |= VAR_19;
   VAR_52 = 1;
  } else if (VAR_44->duplex == VAR_29)
   VAR_52 = 0;
  else
   return -VAR_30;

  if (VAR_44->speed == VAR_42) {


   if ((VAR_52 && !(VAR_48 & VAR_31)) ||
    (!VAR_52 && !(VAR_48 & VAR_32)))
    return -VAR_30;
   VAR_45 |= VAR_22;
  } else if (VAR_44->speed == VAR_41) {
   if ((VAR_52 && !(VAR_46 & VAR_23)) ||
    (!VAR_52 && !(VAR_46 & VAR_24)))
    return -VAR_30;
   VAR_45 |= VAR_21;
  } else if (VAR_44->speed == VAR_40) {
   if ((VAR_52 && !(VAR_46 & VAR_25)) ||
    (!VAR_52 && !(VAR_46 & VAR_26)))
    return -VAR_30;
  } else
   return -VAR_30;
 }

 VAR_49 = FUNC_3(VAR_43, VAR_43->phy_addr, VAR_36, VAR_45);
 if (VAR_49)
  return VAR_49;
 return 0;
}
