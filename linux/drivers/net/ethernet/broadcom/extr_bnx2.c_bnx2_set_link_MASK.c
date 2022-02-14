
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2 {scalar_t__ loopback; int link_up; int phy_flags; int autoneg; int mii_bmcr; int mii_bmsr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bnx2*,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct bnx2*,int ) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*) ;
 int FUNC_6 (struct bnx2*) ;
 int FUNC_7 (struct bnx2*) ;
 int FUNC_8 (struct bnx2*) ;
 int FUNC_9 (struct bnx2*) ;
 int FUNC_10 (struct bnx2*,int ,int*) ;
 int FUNC_11 (struct bnx2*) ;
 int FUNC_12 (struct bnx2*) ;
 int FUNC_13 (struct bnx2*) ;
 int FUNC_14 (struct bnx2*,int ,int) ;

__attribute__((used)) static int
FUNC_15(struct bnx2 *VAR_17)
{
 u32 VAR_18;
 u8 VAR_19;

 if (VAR_17->loopback == VAR_12 || VAR_17->loopback == VAR_16) {
  VAR_17->link_up = 1;
  return 0;
 }

 if (VAR_17->phy_flags & VAR_10)
  return 0;

 VAR_19 = VAR_17->link_up;

 FUNC_9(VAR_17);
 FUNC_10(VAR_17, VAR_17->mii_bmsr1, &VAR_18);
 FUNC_10(VAR_17, VAR_17->mii_bmsr1, &VAR_18);
 FUNC_7(VAR_17);

 if ((VAR_17->phy_flags & VAR_11) &&
     (FUNC_0(VAR_17) == VAR_3)) {
  u32 VAR_20, VAR_21;

  if (VAR_17->phy_flags & VAR_8) {
   FUNC_2(VAR_17, 0);
   VAR_17->phy_flags &= ~VAR_8;
  }
  VAR_20 = FUNC_1(VAR_17, VAR_6);

  FUNC_14(VAR_17, VAR_13, VAR_14);
  FUNC_10(VAR_17, VAR_13, &VAR_21);
  FUNC_10(VAR_17, VAR_13, &VAR_21);

  if ((VAR_20 & VAR_7) &&
      !(VAR_21 & VAR_15))
   VAR_18 |= VAR_2;
  else
   VAR_18 &= ~VAR_2;
 }

 if (VAR_18 & VAR_2) {
  VAR_17->link_up = 1;

  if (VAR_17->phy_flags & VAR_11) {
   if (FUNC_0(VAR_17) == VAR_3)
    FUNC_3(VAR_17);
   else if (FUNC_0(VAR_17) == VAR_4)
    FUNC_4(VAR_17);
   else if (FUNC_0(VAR_17) == VAR_5)
    FUNC_5(VAR_17);
  }
  else {
   FUNC_6(VAR_17);
  }
  FUNC_12(VAR_17);
 }
 else {
  if ((VAR_17->phy_flags & VAR_11) &&
      (VAR_17->autoneg & VAR_0))
   FUNC_8(VAR_17);

  if (VAR_17->phy_flags & VAR_9) {
   u32 VAR_22;

   FUNC_10(VAR_17, VAR_17->mii_bmcr, &VAR_22);
   VAR_22 |= VAR_1;
   FUNC_14(VAR_17, VAR_17->mii_bmcr, VAR_22);

   VAR_17->phy_flags &= ~VAR_9;
  }
  VAR_17->link_up = 0;
 }

 if (VAR_17->link_up != VAR_19) {
  FUNC_11(VAR_17);
 }

 FUNC_13(VAR_17);

 return 0;
}
