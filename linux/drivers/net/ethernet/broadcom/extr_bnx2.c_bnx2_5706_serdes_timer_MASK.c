
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {scalar_t__ link_up; int autoneg; int mii_bmcr; int phy_flags; int phy_lock; void* current_interval; scalar_t__ serdes_an_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int,int*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bnx2 *VAR_10)
{
 int VAR_11 = 1;

 FUNC_5(&VAR_10->phy_lock);
 if (VAR_10->serdes_an_pending) {
  VAR_10->serdes_an_pending--;
  VAR_11 = 0;
 } else if ((VAR_10->link_up == 0) && (VAR_10->autoneg & VAR_0)) {
  u32 VAR_12;

  VAR_10->current_interval = VAR_6;

  FUNC_2(VAR_10, VAR_10->mii_bmcr, &VAR_12);

  if (VAR_12 & VAR_1) {
   if (FUNC_0(VAR_10)) {
    VAR_12 &= ~VAR_1;
    VAR_12 |= VAR_3 | VAR_2;
    FUNC_4(VAR_10, VAR_10->mii_bmcr, VAR_12);
    VAR_10->phy_flags |= VAR_5;
   }
  }
 }
 else if ((VAR_10->link_up) && (VAR_10->autoneg & VAR_0) &&
   (VAR_10->phy_flags & VAR_5)) {
  u32 VAR_13;

  FUNC_4(VAR_10, 0x17, 0x0f01);
  FUNC_2(VAR_10, 0x15, &VAR_13);
  if (VAR_13 & 0x20) {
   u32 VAR_14;

   FUNC_2(VAR_10, VAR_10->mii_bmcr, &VAR_14);
   VAR_14 |= VAR_1;
   FUNC_4(VAR_10, VAR_10->mii_bmcr, VAR_14);

   VAR_10->phy_flags &= ~VAR_5;
  }
 } else
  VAR_10->current_interval = VAR_6;

 if (VAR_11) {
  u32 VAR_15;

  FUNC_4(VAR_10, VAR_7, VAR_8);
  FUNC_2(VAR_10, VAR_7, &VAR_15);
  FUNC_2(VAR_10, VAR_7, &VAR_15);

  if (VAR_10->link_up && (VAR_15 & VAR_9)) {
   if (!(VAR_10->phy_flags & VAR_4)) {
    FUNC_1(VAR_10, 1);
    VAR_10->phy_flags |= VAR_4;
   } else
    FUNC_3(VAR_10);
  } else if (!VAR_10->link_up && !(VAR_15 & VAR_9))
   FUNC_3(VAR_10);
 }
 FUNC_6(&VAR_10->phy_lock);
}
