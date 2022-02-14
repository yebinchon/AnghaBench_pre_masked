
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int flags; int dev; int phy_port; } ;


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
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_15)
{
 u32 VAR_16, VAR_17 = 0;

 VAR_15->phy_flags &= ~VAR_11;
 VAR_15->flags &= ~VAR_3;

 if (!(VAR_15->flags & VAR_2))
  VAR_15->flags |= VAR_3;

 VAR_16 = FUNC_0(VAR_15, VAR_5);
 if ((VAR_16 & VAR_8) != VAR_7)
  return;

 if ((VAR_16 & VAR_4) == VAR_4) {
  VAR_15->flags |= VAR_3;
  VAR_17 |= VAR_1 | VAR_4;
 }

 if ((VAR_15->phy_flags & VAR_12) &&
     (VAR_16 & VAR_6)) {
  u32 VAR_18;

  VAR_15->phy_flags |= VAR_11;

  VAR_18 = FUNC_0(VAR_15, VAR_9);
  if (VAR_18 & VAR_10)
   VAR_15->phy_port = VAR_13;
  else
   VAR_15->phy_port = VAR_14;

  VAR_17 |= VAR_1 |
         VAR_6;
 }

 if (FUNC_2(VAR_15->dev) && VAR_17)
  FUNC_1(VAR_15, VAR_0, VAR_17);
}
