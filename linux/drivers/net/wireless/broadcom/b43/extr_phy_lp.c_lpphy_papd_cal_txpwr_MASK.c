
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpphy_tx_gains {int dummy; } ;
struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {int txpctl_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 struct lpphy_tx_gains FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (struct b43_wldev*,struct lpphy_tx_gains) ;
 int FUNC_7 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_3)
{
 struct b43_phy_lp *VAR_4 = VAR_3->phy.lp;
 struct lpphy_tx_gains VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_4(VAR_3);
 VAR_6 = VAR_4->txpctl_mode;
 VAR_7 = FUNC_1(VAR_3, VAR_0) & 0x40;
 if (VAR_7)
  VAR_5 = FUNC_3(VAR_3);
 VAR_8 = FUNC_1(VAR_3, VAR_1) & 0xFF;
 VAR_9 = FUNC_2(VAR_3);

 FUNC_7(VAR_3, VAR_2);

 if (VAR_7)
  FUNC_6(VAR_3, VAR_5);
 FUNC_5(VAR_3, VAR_9);
 FUNC_7(VAR_3, VAR_6);
 FUNC_0(VAR_3, VAR_1, 0xFF00, VAR_8);
}
