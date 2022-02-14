
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; void** tx_rx_cal_phy_saveregs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 void* FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (struct brcms_phy*,int,int ,int,int ) ;
 int FUNC_7 (struct brcms_phy*,int,int,int ,int ,int ) ;
 int FUNC_8 (struct brcms_phy*,int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct brcms_phy *VAR_9, u8 VAR_10)
{
 u8 VAR_11;
 u16 VAR_12, VAR_13;

 if (FUNC_1(VAR_9->pubpi.phy_rev, 7))
  VAR_11 = VAR_10;
 else
  VAR_11 = (VAR_10 == VAR_6) ? 1 : 0;

 VAR_9->tx_rx_cal_phy_saveregs[0] = FUNC_4(VAR_9, 0xa2);
 VAR_9->tx_rx_cal_phy_saveregs[1] =
  FUNC_4(VAR_9, (VAR_10 == VAR_6) ? 0xa6 : 0xa7);
 VAR_9->tx_rx_cal_phy_saveregs[2] =
  FUNC_4(VAR_9, (VAR_10 == VAR_6) ? 0x8f : 0xa5);
 VAR_9->tx_rx_cal_phy_saveregs[3] = FUNC_4(VAR_9, 0x91);
 VAR_9->tx_rx_cal_phy_saveregs[4] = FUNC_4(VAR_9, 0x92);
 VAR_9->tx_rx_cal_phy_saveregs[5] = FUNC_4(VAR_9, 0x7a);
 VAR_9->tx_rx_cal_phy_saveregs[6] = FUNC_4(VAR_9, 0x7d);
 VAR_9->tx_rx_cal_phy_saveregs[7] = FUNC_4(VAR_9, 0xe7);
 VAR_9->tx_rx_cal_phy_saveregs[8] = FUNC_4(VAR_9, 0xec);
 if (FUNC_1(VAR_9->pubpi.phy_rev, 7)) {
  VAR_9->tx_rx_cal_phy_saveregs[11] = FUNC_4(VAR_9, 0x342);
  VAR_9->tx_rx_cal_phy_saveregs[12] = FUNC_4(VAR_9, 0x343);
  VAR_9->tx_rx_cal_phy_saveregs[13] = FUNC_4(VAR_9, 0x346);
  VAR_9->tx_rx_cal_phy_saveregs[14] = FUNC_4(VAR_9, 0x347);
 }

 VAR_9->tx_rx_cal_phy_saveregs[9] = FUNC_4(VAR_9, 0x297);
 VAR_9->tx_rx_cal_phy_saveregs[10] = FUNC_4(VAR_9, 0x29b);
 FUNC_3(VAR_9, (0 == VAR_6) ? 0x297 :
      0x29b, (0x1 << 0), (0) << 0);

 FUNC_3(VAR_9, (1 == VAR_6) ? 0x297 :
      0x29b, (0x1 << 0), (0) << 0);

 if (FUNC_1(VAR_9->pubpi.phy_rev, 7)) {

  FUNC_3(VAR_9, 0xa2, (0xf << 0), (1 << VAR_11) << 0);

  FUNC_3(VAR_9, 0xa2, (0xf << 12), (1 << (1 - VAR_10)) << 12);

 } else {

  FUNC_3(VAR_9, 0xa2, (0xf << 12), (1 << VAR_11) << 12);
  FUNC_3(VAR_9, 0xa2, (0xf << 0), (1 << VAR_11) << 0);
  FUNC_3(VAR_9, 0xa2, (0xf << 4), (1 << VAR_10) << 4);
  FUNC_3(VAR_9, 0xa2, (0xf << 8), (1 << VAR_10) << 8);
 }

 FUNC_3(VAR_9, ((VAR_10 == VAR_6) ? 0xa6 : 0xa7), (0x1 << 2), 0);
 FUNC_3(VAR_9, (VAR_10 == VAR_6) ? 0x8f : 0xa5,
      (0x1 << 2), (0x1 << 2));
 if (FUNC_2(VAR_9->pubpi.phy_rev, 7)) {
  FUNC_3(VAR_9, ((VAR_10 == VAR_6) ? 0xa6 : 0xa7),
       (0x1 << 0) | (0x1 << 1), 0);
  FUNC_3(VAR_9, (VAR_10 == VAR_6) ?
       0x8f : 0xa5,
       (0x1 << 0) | (0x1 << 1), (0x1 << 0) | (0x1 << 1));
 }

 FUNC_8(VAR_9, VAR_4, 0,
      VAR_7 |
      VAR_8);

 if (FUNC_1(VAR_9->pubpi.phy_rev, 7)) {
  FUNC_7(VAR_9, (0x1 << 3),
        0, 0, 0,
        VAR_0);
  FUNC_7(VAR_9, (0x1 << 9), 0, 0, 0,
        VAR_1);
  FUNC_7(VAR_9, (0x1 << 10), 1, 0, 0,
        VAR_1);
  FUNC_7(VAR_9, (0x1 << 0), 1, 0, 0,
        VAR_1);
  FUNC_7(VAR_9, (0x1 << 1), 1, 0, 0,
        VAR_2);
  FUNC_7(VAR_9, (0x1 << 11), 0, 0, 0,
        VAR_1);
  if (FUNC_0(VAR_9->radio_chanspec))
   FUNC_7(
    VAR_9,
    (0x1 << 7),
    2, 0, 0,
    VAR_1);
  else
   FUNC_7(
    VAR_9,
    (0x1 << 7),
    0, 0, 0,
    VAR_1);

  FUNC_7(VAR_9, (0x1 << 7),
        0, 0, 0,
        VAR_1);
  FUNC_7(VAR_9, (0x1 << 5), 0, 0, 0,
        VAR_1);
 } else {
  FUNC_6(VAR_9, (0x1 << 3), 0, 3, 0);
 }

 FUNC_5(VAR_9, VAR_3);

 if (FUNC_1(VAR_9->pubpi.phy_rev, 7)) {

  FUNC_8(VAR_9,
       VAR_5,
       0x1, VAR_10 + 1);
 } else {

  if (VAR_10 == VAR_6) {
   VAR_12 = 0x1;
   VAR_13 = 0x8;
  } else {
   VAR_12 = 0x4;
   VAR_13 = 0x2;
  }

  FUNC_8(VAR_9,
       VAR_5,
       VAR_12, VAR_10 + 1);
  FUNC_8(VAR_9,
       VAR_5,
       VAR_13, VAR_11 + 1);
 }
}
