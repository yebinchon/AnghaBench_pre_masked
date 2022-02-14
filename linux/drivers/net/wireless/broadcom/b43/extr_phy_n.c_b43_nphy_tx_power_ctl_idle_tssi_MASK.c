
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct b43_phy {int rev; TYPE_2__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n {TYPE_3__* pwr_ctl_info; } ;
typedef int s32 ;
struct TYPE_6__ {int idle_tssi_5g; int idle_tssi_2g; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ,int *,int) ;
 int FUNC_3 (struct b43_wldev*,int,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int ,int,int,int ) ;
 int FUNC_5 (struct b43_wldev*,int,int ,int,int,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int ) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int,int ,int,int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;
 struct b43_phy_n *VAR_5 = VAR_3->phy.n;

 u32 VAR_6;
 s32 VAR_7[4] = { };

 if (VAR_4->chandef->chan->flags & VAR_0)
  return;

 if (FUNC_0(VAR_3))
  FUNC_1(VAR_3);

 if (VAR_4->rev >= 19)
  FUNC_4(VAR_3, 0x1000, 0, 3, 0, 0);
 else if (VAR_4->rev >= 7)
  FUNC_5(VAR_3, 0x1000, 0, 3, 0, 0);
 else if (VAR_4->rev >= 3)
  FUNC_3(VAR_3, 0x2000, 0, 3, 0);

 FUNC_7(VAR_3);
 FUNC_8(VAR_3, 4000, 0, 0, 0, 0);
 FUNC_9(20);
 VAR_6 = FUNC_2(VAR_3, VAR_1, VAR_7, 1);
 FUNC_7(VAR_3);

 FUNC_6(VAR_3, 0, VAR_2);

 if (VAR_4->rev >= 19)
  FUNC_4(VAR_3, 0x1000, 0, 3, 1, 0);
 else if (VAR_4->rev >= 7)
  FUNC_5(VAR_3, 0x1000, 0, 3, 1, 0);
 else if (VAR_4->rev >= 3)
  FUNC_3(VAR_3, 0x2000, 0, 3, 1);

 if (VAR_4->rev >= 19) {

  return;
 } else if (VAR_4->rev >= 3) {
  VAR_5->pwr_ctl_info[0].idle_tssi_5g = (VAR_6 >> 24) & 0xFF;
  VAR_5->pwr_ctl_info[1].idle_tssi_5g = (VAR_6 >> 8) & 0xFF;
 } else {
  VAR_5->pwr_ctl_info[0].idle_tssi_5g = (VAR_6 >> 16) & 0xFF;
  VAR_5->pwr_ctl_info[1].idle_tssi_5g = VAR_6 & 0xFF;
 }
 VAR_5->pwr_ctl_info[0].idle_tssi_2g = (VAR_6 >> 24) & 0xFF;
 VAR_5->pwr_ctl_info[1].idle_tssi_2g = (VAR_6 >> 8) & 0xFF;
}
