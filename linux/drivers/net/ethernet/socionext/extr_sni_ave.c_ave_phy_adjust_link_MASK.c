
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct phy_device {scalar_t__ speed; int advertising; scalar_t__ asym_pause; scalar_t__ pause; scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct ave_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_17)
{
 struct ave_private *VAR_18 = FUNC_2(VAR_17);
 struct phy_device *VAR_19 = VAR_17->phydev;
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 u16 VAR_24 = 0, VAR_25 = 0;
 u8 VAR_26;


 VAR_20 = FUNC_5(VAR_18->base + VAR_6);
 VAR_20 &= ~(VAR_8 | VAR_9);

 if (FUNC_3(VAR_19) && VAR_19->speed == VAR_16)
  VAR_20 |= VAR_9;
 else if (VAR_19->speed == VAR_15)
  VAR_20 |= VAR_8;

 FUNC_6(VAR_20, VAR_18->base + VAR_6);


 if (!FUNC_3(VAR_19)) {
  VAR_20 = FUNC_5(VAR_18->base + VAR_0);
  if (VAR_19->speed == VAR_14)
   VAR_20 &= ~VAR_1;
  else
   VAR_20 |= VAR_1;
  FUNC_6(VAR_20, VAR_18->base + VAR_0);
 }


 VAR_22 = FUNC_5(VAR_18->base + VAR_2);
 VAR_21 = FUNC_5(VAR_18->base + VAR_6);
 VAR_23 = VAR_22;

 if (VAR_19->duplex) {
  VAR_22 |= VAR_3;

  if (VAR_19->pause)
   VAR_24 |= VAR_13;
  if (VAR_19->asym_pause)
   VAR_24 |= VAR_12;

  VAR_25 = FUNC_0(VAR_19->advertising);
  VAR_26 = FUNC_1(VAR_25, VAR_24);
  if (VAR_26 & VAR_11)
   VAR_21 |= VAR_7;
  else
   VAR_21 &= ~VAR_7;
  if (VAR_26 & VAR_10)
   VAR_22 |= VAR_4;
  else
   VAR_22 &= ~VAR_4;
 } else {
  VAR_22 &= ~VAR_3;
  VAR_22 &= ~VAR_4;
  VAR_21 &= ~VAR_7;
 }

 if (VAR_23 != VAR_22) {

  FUNC_6(VAR_22 & ~VAR_5, VAR_18->base + VAR_2);

  FUNC_6(VAR_21, VAR_18->base + VAR_6);
  FUNC_6(VAR_22, VAR_18->base + VAR_2);
 }

 FUNC_4(VAR_19);
}
