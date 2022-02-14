
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int * tx_rx_cal_phy_saveregs; TYPE_1__ pubpi; int radio_chanspec; int internal_tx_iqlo_cal_tapoff_intpa_nphy; scalar_t__ use_int_tx_iqlo_cal_nphy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct brcms_phy*,int,int,int ) ;
 int FUNC_4 (struct brcms_phy*,int ,int,int) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*,int,int ,int,int,int ) ;
 int FUNC_7 (struct brcms_phy*,int ,int,int,int,int *) ;
 int FUNC_8 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct brcms_phy *VAR_8)
{
 u16 VAR_9;

 if (FUNC_1(VAR_8->pubpi.phy_rev, 3)) {
  FUNC_8(VAR_8, 0xa6, VAR_8->tx_rx_cal_phy_saveregs[0]);
  FUNC_8(VAR_8, 0xa7, VAR_8->tx_rx_cal_phy_saveregs[1]);
  FUNC_8(VAR_8, 0x8f, VAR_8->tx_rx_cal_phy_saveregs[2]);
  FUNC_8(VAR_8, 0xa5, VAR_8->tx_rx_cal_phy_saveregs[3]);
  FUNC_8(VAR_8, 0x01, VAR_8->tx_rx_cal_phy_saveregs[4]);

  FUNC_7(VAR_8, VAR_2, 1, 3, 16,
      &VAR_8->tx_rx_cal_phy_saveregs[5]);
  FUNC_7(VAR_8, VAR_2, 1, 19, 16,
      &VAR_8->tx_rx_cal_phy_saveregs[6]);

  FUNC_8(VAR_8, 0x91, VAR_8->tx_rx_cal_phy_saveregs[7]);
  FUNC_8(VAR_8, 0x92, VAR_8->tx_rx_cal_phy_saveregs[8]);

  FUNC_8(VAR_8, 0x297, VAR_8->tx_rx_cal_phy_saveregs[9]);
  FUNC_8(VAR_8, 0x29b, VAR_8->tx_rx_cal_phy_saveregs[10]);

  if (FUNC_2(VAR_8->pubpi.phy_rev, 7)
      || FUNC_1(VAR_8->pubpi.phy_rev, 8))
   FUNC_6(
    VAR_8, (0x1 << 7), 0, 0,
    1,
    VAR_1);

  FUNC_5(VAR_8);

  if (VAR_8->use_int_tx_iqlo_cal_nphy
      && !(VAR_8->internal_tx_iqlo_cal_tapoff_intpa_nphy)) {

   if (FUNC_2(VAR_8->pubpi.phy_rev, 7)) {
    if (FUNC_0(VAR_8->radio_chanspec)) {
     FUNC_4(
      VAR_8,
      VAR_6,
      1, 1);
     FUNC_4(
      VAR_8,
      VAR_7,
      1, 1);
    } else {
     FUNC_4(
          VAR_8,
          VAR_3,
          1, 1);
     FUNC_4(
          VAR_8,
          VAR_4,
          1, 1);
    }

    FUNC_4(VAR_8, VAR_5, 1 << 4,
           0);
   } else if (FUNC_1(VAR_8->pubpi.phy_rev, 8)) {
    FUNC_6(
     VAR_8,
     (0x1 << 3), 0,
     0x3, 1,
     VAR_0);
   }
  }
 } else {
  VAR_9 = ((0x3 << 12) | (0x3 << 14));
  FUNC_3(VAR_8, 0xa6, VAR_9, VAR_8->tx_rx_cal_phy_saveregs[0]);
  FUNC_3(VAR_8, 0xa7, VAR_9, VAR_8->tx_rx_cal_phy_saveregs[1]);
  FUNC_8(VAR_8, 0xa5, VAR_8->tx_rx_cal_phy_saveregs[2]);

  FUNC_7(VAR_8, VAR_2, 1, 2, 16,
      &VAR_8->tx_rx_cal_phy_saveregs[3]);

  FUNC_7(VAR_8, VAR_2, 1, 18, 16,
      &VAR_8->tx_rx_cal_phy_saveregs[4]);

  FUNC_8(VAR_8, 0x91, VAR_8->tx_rx_cal_phy_saveregs[5]);
  FUNC_8(VAR_8, 0x92, VAR_8->tx_rx_cal_phy_saveregs[6]);
 }
}
