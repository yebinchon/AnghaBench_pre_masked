
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; void** tx_rx_cal_radio_saveregs; int radio_chanspec; int internal_tx_iqlo_cal_tapoff_intpa_nphy; scalar_t__ use_int_tx_iqlo_cal_nphy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
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
 void* FUNC_4 (struct brcms_phy*,int ,int ,int,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (struct brcms_phy*,int ,int ,int,int ,int) ;
 int FUNC_6 (struct brcms_phy*,int ,int) ;
 int FUNC_7 (struct brcms_phy*,int ,int) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 void* FUNC_9 (struct brcms_phy*,int) ;
 int FUNC_10 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_11(struct brcms_phy *VAR_33)
{
 u16 VAR_34, VAR_35;

 if (FUNC_1(VAR_33->pubpi.phy_rev, 7)) {

  for (VAR_35 = 0; VAR_35 <= 1; VAR_35++) {

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 0] =
    FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35,
      VAR_31);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 1] =
    FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35,
      VAR_1);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 2] =
    FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35,
      VAR_0);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 3] =
    FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35,
      VAR_29);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 4] = 0;

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 5] =
    FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35,
      VAR_32);

   if (VAR_33->pubpi.radiorev != 5)
    VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 6] =
     FUNC_4(VAR_33, VAR_25, VAR_30,
       VAR_35,
       VAR_26);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 7] =
          FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35, VAR_27);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 8] =
    FUNC_4(VAR_33, VAR_25, VAR_30, VAR_35,
      VAR_28);

   if (FUNC_0(VAR_33->radio_chanspec)) {
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_31, 0x0a);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_1, 0x43);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_0, 0x55);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_29, 0x00);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_27, 0x00);
    if (VAR_33->use_int_tx_iqlo_cal_nphy) {
     FUNC_5(VAR_33, VAR_25, VAR_30,
        VAR_35, VAR_32, 0x4);
     if (!(VAR_33->
     internal_tx_iqlo_cal_tapoff_intpa_nphy))
      FUNC_5(VAR_33, VAR_25,
         VAR_30, VAR_35,
         VAR_26, 0x31);
     else
      FUNC_5(VAR_33, VAR_25,
         VAR_30, VAR_35,
         VAR_26, 0x21);
    }
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_28, 0x00);
   } else {
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_31, 0x06);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_1, 0x43);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_0, 0x55);
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_29, 0x00);

    if (VAR_33->pubpi.radiorev != 5)
     FUNC_5(VAR_33, VAR_25, VAR_30,
        VAR_35, VAR_26, 0x00);
    if (VAR_33->use_int_tx_iqlo_cal_nphy) {
     FUNC_5(VAR_33, VAR_25, VAR_30,
        VAR_35, VAR_32,
        0x06);
     if (!(VAR_33->
     internal_tx_iqlo_cal_tapoff_intpa_nphy))
      FUNC_5(VAR_33, VAR_25,
         VAR_30, VAR_35,
         VAR_27, 0x31);
     else
      FUNC_5(VAR_33, VAR_25,
         VAR_30, VAR_35,
         VAR_27, 0x21);
    }
    FUNC_5(VAR_33, VAR_25, VAR_30, VAR_35,
       VAR_28, 0x00);
   }
  }
 } else if (FUNC_1(VAR_33->pubpi.phy_rev, 3)) {

  for (VAR_35 = 0; VAR_35 <= 1; VAR_35++) {
   VAR_34 =
    (VAR_35 ==
     VAR_3) ? VAR_12 : VAR_13;

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 0] =
    FUNC_9(VAR_33,
            VAR_23 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 1] =
    FUNC_9(VAR_33,
            VAR_15 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 2] =
    FUNC_9(VAR_33,
            VAR_14 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 3] =
    FUNC_9(
     VAR_33,
     VAR_21 |
     VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 4] =
    FUNC_9(VAR_33,
            VAR_22 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 5] =
    FUNC_9(VAR_33,
            VAR_24 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 6] =
    FUNC_9(VAR_33,
            VAR_16 | VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 7] =
    FUNC_9(VAR_33,
            VAR_17 | VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 8] =
    FUNC_9(VAR_33,
            VAR_18 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 9] =
    FUNC_9(VAR_33,
            VAR_19 |
            VAR_34);

   VAR_33->tx_rx_cal_radio_saveregs[(VAR_35 * 11) + 10] =
    FUNC_9(VAR_33,
            VAR_20 |
            VAR_34);

   if (FUNC_0(VAR_33->radio_chanspec)) {
    FUNC_10(VAR_33,
      VAR_23 |
      VAR_34, 0x0a);
    FUNC_10(VAR_33,
      VAR_15 |
      VAR_34, 0x40);
    FUNC_10(VAR_33,
      VAR_14 |
      VAR_34, 0x55);
    FUNC_10(VAR_33,
      VAR_21 |
      VAR_34, 0x00);
    FUNC_10(VAR_33,
      VAR_22 |
      VAR_34, 0x00);

    if (FUNC_3(VAR_33)) {
     FUNC_10(
      VAR_33,
      VAR_24
      | VAR_34, 0x4);
     FUNC_10(VAR_33,
       VAR_16 |
       VAR_34, 0x1);
    } else {
     FUNC_10(
      VAR_33,
      VAR_24
      | VAR_34, 0x00);
     FUNC_10(VAR_33,
       VAR_16 |
       VAR_34, 0x2f);
    }
    FUNC_10(VAR_33,
      VAR_17 | VAR_34,
      0x00);
    FUNC_10(VAR_33,
      VAR_18 |
      VAR_34, 0x00);

    FUNC_10(VAR_33,
      VAR_19 |
      VAR_34, 0x00);
    FUNC_10(VAR_33,
      VAR_20 |
      VAR_34, 0x00);
   } else {
    FUNC_10(VAR_33,
      VAR_23 |
      VAR_34, 0x06);
    FUNC_10(VAR_33,
      VAR_15 |
      VAR_34, 0x40);
    FUNC_10(VAR_33,
      VAR_14 |
      VAR_34, 0x55);
    FUNC_10(VAR_33,
      VAR_21 |
      VAR_34, 0x00);
    FUNC_10(VAR_33,
      VAR_22 |
      VAR_34, 0x00);
    FUNC_10(VAR_33,
      VAR_16 | VAR_34,
      0x00);

    if (FUNC_3(VAR_33)) {

     FUNC_10(
      VAR_33,
      VAR_24
      | VAR_34, 0x06);
     if (FUNC_2(VAR_33->pubpi.phy_rev, 5))
      FUNC_10(
       VAR_33,
       VAR_17
       | VAR_34,
       0x11);
     else
      FUNC_10(
       VAR_33,
       VAR_17
       | VAR_34,
       0x1);
    } else {
     FUNC_10(
      VAR_33,
      VAR_24
      | VAR_34, 0x00);
     FUNC_10(VAR_33,
       VAR_17 |
       VAR_34, 0x20);
    }

    FUNC_10(VAR_33,
      VAR_18 |
      VAR_34, 0x00);
    FUNC_10(VAR_33,
      VAR_19 |
      VAR_34, 0x00);
    FUNC_10(VAR_33,
      VAR_20 |
      VAR_34, 0x00);
   }
  }
 } else {

  VAR_33->tx_rx_cal_radio_saveregs[0] =
   FUNC_9(VAR_33, VAR_4);
  FUNC_10(VAR_33, VAR_4, 0x29);
  VAR_33->tx_rx_cal_radio_saveregs[1] =
   FUNC_9(VAR_33, VAR_5);
  FUNC_10(VAR_33, VAR_5, 0x54);

  VAR_33->tx_rx_cal_radio_saveregs[2] =
   FUNC_9(VAR_33, VAR_7);
  FUNC_10(VAR_33, VAR_7, 0x29);
  VAR_33->tx_rx_cal_radio_saveregs[3] =
   FUNC_9(VAR_33, VAR_8);
  FUNC_10(VAR_33, VAR_8, 0x54);

  VAR_33->tx_rx_cal_radio_saveregs[4] =
   FUNC_9(VAR_33, VAR_10);
  VAR_33->tx_rx_cal_radio_saveregs[5] =
   FUNC_9(VAR_33, VAR_11);

  if ((FUNC_8(VAR_33, 0x09) & VAR_2) ==
      0) {

   FUNC_10(VAR_33, VAR_10, 0x04);
   FUNC_10(VAR_33, VAR_11, 0x04);
  } else {

   FUNC_10(VAR_33, VAR_10, 0x20);
   FUNC_10(VAR_33, VAR_11, 0x20);
  }

  if (FUNC_2(VAR_33->pubpi.phy_rev, 2)) {

   FUNC_7(VAR_33, VAR_6, 0x20);
   FUNC_7(VAR_33, VAR_9, 0x20);
  } else {

   FUNC_6(VAR_33, VAR_6, 0xdf);
   FUNC_6(VAR_33, VAR_9, 0xdf);
  }
 }
}
