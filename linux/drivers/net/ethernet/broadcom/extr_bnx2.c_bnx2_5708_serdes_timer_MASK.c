
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int serdes_an_pending; scalar_t__ link_up; int autoneg; int phy_lock; void* current_interval; int mii_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bnx2 *VAR_6)
{
 if (VAR_6->phy_flags & VAR_3)
  return;

 if ((VAR_6->phy_flags & VAR_2) == 0) {
  VAR_6->serdes_an_pending = 0;
  return;
 }

 FUNC_3(&VAR_6->phy_lock);
 if (VAR_6->serdes_an_pending)
  VAR_6->serdes_an_pending--;
 else if ((VAR_6->link_up == 0) && (VAR_6->autoneg & VAR_0)) {
  u32 VAR_7;

  FUNC_2(VAR_6, VAR_6->mii_bmcr, &VAR_7);
  if (VAR_7 & VAR_1) {
   FUNC_1(VAR_6);
   VAR_6->current_interval = VAR_4;
  } else {
   FUNC_0(VAR_6);
   VAR_6->serdes_an_pending = 2;
   VAR_6->current_interval = VAR_5;
  }

 } else
  VAR_6->current_interval = VAR_5;

 FUNC_4(&VAR_6->phy_lock);
}
