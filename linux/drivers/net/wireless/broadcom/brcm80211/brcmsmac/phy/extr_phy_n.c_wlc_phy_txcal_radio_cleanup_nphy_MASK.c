
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {int * tx_rx_cal_radio_saveregs; TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct brcms_phy*,int ,int ,int,int ,int ) ;
 int FUNC_2 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_30)
{
 u16 VAR_31, VAR_32;

 if (FUNC_0(VAR_30->pubpi.phy_rev, 7)) {
  for (VAR_32 = 0; VAR_32 <= 1; VAR_32++) {

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32,
      VAR_28,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          0]);

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32, VAR_1,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          1]);

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32, VAR_0,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          2]);

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32, VAR_26,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          3]);

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32, VAR_29,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          5]);

   if (VAR_30->pubpi.radiorev != 5)
    FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32,
       VAR_23,
       VAR_30->tx_rx_cal_radio_saveregs
            [(VAR_32 * 11) + 6]);

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32, VAR_24,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          7]);

   FUNC_1(VAR_30, VAR_22, VAR_27, VAR_32, VAR_25,
      VAR_30->
      tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
          8]);
  }
 } else if (FUNC_0(VAR_30->pubpi.phy_rev, 3)) {
  for (VAR_32 = 0; VAR_32 <= 1; VAR_32++) {
   VAR_31 = (VAR_32 == VAR_2) ?
         VAR_9 : VAR_10;

   FUNC_2(VAR_30,
     VAR_20 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         0]);

   FUNC_2(VAR_30,
     VAR_12 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         1]);

   FUNC_2(VAR_30,
     VAR_11 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         2]);

   FUNC_2(VAR_30, VAR_18 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         3]);

   FUNC_2(VAR_30,
     VAR_19 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         4]);

   FUNC_2(VAR_30,
     VAR_21 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         5]);

   FUNC_2(VAR_30, VAR_13 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         6]);

   FUNC_2(VAR_30, VAR_14 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         7]);

   FUNC_2(VAR_30,
     VAR_15 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         8]);

   FUNC_2(VAR_30,
     VAR_16 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         9]);

   FUNC_2(VAR_30,
     VAR_17 | VAR_31,
     VAR_30->
     tx_rx_cal_radio_saveregs[(VAR_32 * 11) +
         10]);
  }
 } else {

  FUNC_2(VAR_30, VAR_3,
    VAR_30->tx_rx_cal_radio_saveregs[0]);
  FUNC_2(VAR_30, VAR_4,
    VAR_30->tx_rx_cal_radio_saveregs[1]);
  FUNC_2(VAR_30, VAR_5,
    VAR_30->tx_rx_cal_radio_saveregs[2]);
  FUNC_2(VAR_30, VAR_6,
    VAR_30->tx_rx_cal_radio_saveregs[3]);
  FUNC_2(VAR_30, VAR_7,
    VAR_30->tx_rx_cal_radio_saveregs[4]);
  FUNC_2(VAR_30, VAR_8,
    VAR_30->tx_rx_cal_radio_saveregs[5]);
 }
}
