
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct lpphy_tx_gains {int pad; int gm; int pga; int dac; } ;
struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {scalar_t__ txpctl_mode; scalar_t__ tx_pwr_idx_over; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int) ;
 int FUNC_8 (struct b43_wldev*,int) ;
 int FUNC_9 (struct b43_wldev*,int) ;
 int FUNC_10 (struct b43_wldev*,struct lpphy_tx_gains) ;
 int FUNC_11 (struct b43_wldev*,int,int) ;
 int FUNC_12 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_13(struct b43_wldev *VAR_4, u8 VAR_5)
{
 struct b43_phy_lp *VAR_6 = VAR_4->phy.lp;
 struct lpphy_tx_gains VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6->tx_pwr_idx_over = VAR_5;
 FUNC_6(VAR_4);
 if (VAR_6->txpctl_mode != VAR_1)
  FUNC_12(VAR_4, VAR_2);
 if (VAR_4->phy.rev >= 2) {
  VAR_8 = FUNC_2(VAR_4, FUNC_1(7, VAR_5 + 320));
  VAR_9 = FUNC_2(VAR_4, FUNC_1(7, VAR_5 + 192));
  VAR_7.pad = (VAR_9 >> 16) & 0xFF;
  VAR_7.gm = VAR_9 & 0xFF;
  VAR_7.pga = (VAR_9 >> 8) & 0xFF;
  VAR_7.dac = (VAR_8 >> 28) & 0xFF;
  FUNC_10(VAR_4, VAR_7);
 } else {
  VAR_8 = FUNC_2(VAR_4, FUNC_1(10, VAR_5 + 320));
  VAR_9 = FUNC_2(VAR_4, FUNC_1(10, VAR_5 + 192));
  FUNC_4(VAR_4, VAR_3,
    0xF800, (VAR_9 >> 4) & 0x7FFF);
  FUNC_8(VAR_4, VAR_9 & 0x7);
  FUNC_9(VAR_4, (VAR_9 >> 24) & 0x7F);
 }
 FUNC_7(VAR_4, (VAR_8 >> 20) & 0xFF);
 FUNC_11(VAR_4, (VAR_8 >> 10) & 0x3FF, VAR_8 & 0x3FF);
 if (VAR_4->phy.rev >= 2) {
  VAR_10 = FUNC_2(VAR_4, FUNC_1(7, VAR_5 + 448));
 } else {
  VAR_10 = FUNC_2(VAR_4, FUNC_1(10, VAR_5 + 448));
 }
 FUNC_3(VAR_4, FUNC_0(0, 85), VAR_10 & 0xFFFF);
 if (VAR_4->phy.rev >= 2) {
  VAR_11 = FUNC_2(VAR_4, FUNC_1(7, VAR_5 + 576));
  FUNC_4(VAR_4, VAR_0, 0xFF00,
    VAR_11 & 0xFFFF);
 }
 FUNC_5(VAR_4);
}
