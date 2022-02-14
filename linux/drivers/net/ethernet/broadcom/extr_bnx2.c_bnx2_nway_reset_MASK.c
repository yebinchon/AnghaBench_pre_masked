
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2 {int autoneg; int phy_flags; int serdes_an_pending; int phy_lock; int mii_bmcr; scalar_t__ current_interval; int timer; int phy_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnx2*,int ,int*) ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (struct bnx2*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int) ;
 struct bnx2* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_10)
{
 struct bnx2 *VAR_11 = FUNC_5(VAR_10);
 u32 VAR_12;

 if (!FUNC_6(VAR_10))
  return -VAR_7;

 if (!(VAR_11->autoneg & VAR_0)) {
  return -VAR_8;
 }

 FUNC_7(&VAR_11->phy_lock);

 if (VAR_11->phy_flags & VAR_4) {
  int VAR_13;

  VAR_13 = FUNC_1(VAR_11, VAR_11->phy_port);
  FUNC_8(&VAR_11->phy_lock);
  return VAR_13;
 }


 if (VAR_11->phy_flags & VAR_5) {
  FUNC_2(VAR_11, VAR_11->mii_bmcr, VAR_3);
  FUNC_8(&VAR_11->phy_lock);

  FUNC_4(20);

  FUNC_7(&VAR_11->phy_lock);

  VAR_11->current_interval = VAR_6;
  VAR_11->serdes_an_pending = 1;
  FUNC_3(&VAR_11->timer, VAR_9 + VAR_11->current_interval);
 }

 FUNC_0(VAR_11, VAR_11->mii_bmcr, &VAR_12);
 VAR_12 &= ~VAR_3;
 FUNC_2(VAR_11, VAR_11->mii_bmcr, VAR_12 | VAR_2 | VAR_1);

 FUNC_8(&VAR_11->phy_lock);

 return 0;
}
