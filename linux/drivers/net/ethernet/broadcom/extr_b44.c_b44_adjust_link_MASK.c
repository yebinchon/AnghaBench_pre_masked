
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ link; scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct b44 {scalar_t__ old_link; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*,int ,int ) ;
 struct b44* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5)
{
 struct b44 *VAR_6 = FUNC_3(VAR_5);
 struct phy_device *VAR_7 = VAR_5->phydev;
 bool VAR_8 = 0;

 FUNC_0(!VAR_7);

 if (VAR_6->old_link != VAR_7->link) {
  VAR_8 = 1;
  VAR_6->old_link = VAR_7->link;
 }


 if (VAR_7->link) {
  if ((VAR_7->duplex == VAR_3) &&
      (VAR_6->flags & VAR_0)) {
   VAR_8 = 1;
   VAR_6->flags &= ~VAR_0;
  } else if ((VAR_7->duplex == VAR_2) &&
      !(VAR_6->flags & VAR_0)) {
   VAR_8 = 1;
   VAR_6->flags |= VAR_0;
  }
 }

 if (VAR_8) {
  u32 VAR_9 = FUNC_1(VAR_6, VAR_1);
  if (VAR_6->flags & VAR_0)
   VAR_9 |= VAR_4;
  else
   VAR_9 &= ~VAR_4;
  FUNC_2(VAR_6, VAR_1, VAR_9);
  FUNC_4(VAR_7);
 }
}
