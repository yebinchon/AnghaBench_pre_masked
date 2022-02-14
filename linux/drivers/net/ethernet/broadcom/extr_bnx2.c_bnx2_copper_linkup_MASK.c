
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; scalar_t__ link_up; void* duplex; void* line_speed; int mii_lpa; int mii_adv; int mii_bmcr; } ;


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
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_0 (struct bnx2*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_19)
{
 u32 VAR_20;

 VAR_19->phy_flags &= ~VAR_9;

 FUNC_0(VAR_19, VAR_19->mii_bmcr, &VAR_20);
 if (VAR_20 & VAR_6) {
  u32 VAR_21, VAR_22, VAR_23;

  FUNC_0(VAR_19, VAR_14, &VAR_21);
  FUNC_0(VAR_19, VAR_15, &VAR_22);

  VAR_23 = VAR_21 & (VAR_22 >> 2);
  if (VAR_23 & VAR_0) {
   VAR_19->line_speed = VAR_18;
   VAR_19->duplex = VAR_10;
  }
  else if (VAR_23 & VAR_1) {
   VAR_19->line_speed = VAR_18;
   VAR_19->duplex = VAR_11;
  }
  else {
   FUNC_0(VAR_19, VAR_19->mii_adv, &VAR_21);
   FUNC_0(VAR_19, VAR_19->mii_lpa, &VAR_22);

   VAR_23 = VAR_21 & VAR_22;
   if (VAR_23 & VAR_2) {
    VAR_19->line_speed = VAR_17;
    VAR_19->duplex = VAR_10;
   }
   else if (VAR_23 & VAR_3) {
    VAR_19->line_speed = VAR_17;
    VAR_19->duplex = VAR_11;
   }
   else if (VAR_23 & VAR_4) {
    VAR_19->line_speed = VAR_16;
    VAR_19->duplex = VAR_10;
   }
   else if (VAR_23 & VAR_5) {
    VAR_19->line_speed = VAR_16;
    VAR_19->duplex = VAR_11;
   }
   else {
    VAR_19->line_speed = 0;
    VAR_19->link_up = 0;
   }
  }
 }
 else {
  if (VAR_20 & VAR_8) {
   VAR_19->line_speed = VAR_17;
  }
  else {
   VAR_19->line_speed = VAR_16;
  }
  if (VAR_20 & VAR_7) {
   VAR_19->duplex = VAR_10;
  }
  else {
   VAR_19->duplex = VAR_11;
  }
 }

 if (VAR_19->link_up) {
  u32 VAR_24;

  FUNC_0(VAR_19, VAR_13, &VAR_24);
  if (VAR_24 & VAR_12)
   VAR_19->phy_flags |= VAR_9;
 }

 return 0;
}
