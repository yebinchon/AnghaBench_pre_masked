
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct chan_info_nphy_radio2057_rev5 {int RF_vcocal_countval0; int RF_vcocal_countval1; int RF_rfpll_refmaster_sparextalsize; int RF_rfpll_loopfilter_r1; int RF_rfpll_loopfilter_c2; int RF_rfpll_loopfilter_c1; int RF_cp_kpd_idac; int RF_rfpll_mmd0; int RF_rfpll_mmd1; int RF_vcobuf_tune; int RF_logen_mx2g_tune; int RF_logen_indbuf2g_tune; int RF_txmix2g_tune_boost_pu_core0; int RF_pad2g_tune_pus_core0; int RF_lna2g_tune_core0; int RF_txmix2g_tune_boost_pu_core1; int RF_pad2g_tune_pus_core1; int RF_lna2g_tune_core1; } ;
struct chan_info_nphy_radio2057 {int RF_vcocal_countval0; int RF_vcocal_countval1; int RF_rfpll_refmaster_sparextalsize; int RF_rfpll_loopfilter_r1; int RF_rfpll_loopfilter_c2; int RF_rfpll_loopfilter_c1; int RF_cp_kpd_idac; int RF_rfpll_mmd0; int RF_rfpll_mmd1; int RF_vcobuf_tune; int RF_logen_mx2g_tune; int RF_logen_mx5g_tune; int RF_logen_indbuf2g_tune; int RF_logen_indbuf5g_tune; int RF_txmix2g_tune_boost_pu_core0; int RF_pad2g_tune_pus_core0; int RF_pga_boost_tune_core0; int RF_txmix5g_boost_tune_core0; int RF_pad5g_tune_misc_pus_core0; int RF_lna2g_tune_core0; int RF_lna5g_tune_core0; int RF_txmix2g_tune_boost_pu_core1; int RF_pad2g_tune_pus_core1; int RF_pga_boost_tune_core1; int RF_txmix5g_boost_tune_core1; int RF_pad5g_tune_misc_pus_core1; int RF_lna2g_tune_core1; int RF_lna5g_tune_core1; } ;
struct TYPE_2__ {int radiorev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (struct brcms_phy*,int ,int ,int,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_6(
 struct brcms_phy *VAR_32,
 const struct chan_info_nphy_radio2057 *VAR_33,
 const struct chan_info_nphy_radio2057_rev5 *
 VAR_34)
{
 int VAR_35;
 u16 VAR_36 = 0;
 u16 VAR_37 = 0;

 if (VAR_32->pubpi.radiorev == 5) {

  FUNC_5(VAR_32,
    VAR_29,
    VAR_34->RF_vcocal_countval0);
  FUNC_5(VAR_32, VAR_30,
    VAR_34->RF_vcocal_countval1);
  FUNC_5(VAR_32, VAR_23,
    VAR_34->RF_rfpll_refmaster_sparextalsize);
  FUNC_5(VAR_32, VAR_20,
    VAR_34->RF_rfpll_loopfilter_r1);
  FUNC_5(VAR_32, VAR_19,
    VAR_34->RF_rfpll_loopfilter_c2);
  FUNC_5(VAR_32, VAR_18,
    VAR_34->RF_rfpll_loopfilter_c1);
  FUNC_5(VAR_32, VAR_3,
    VAR_34->RF_cp_kpd_idac);
  FUNC_5(VAR_32, VAR_21, VAR_34->RF_rfpll_mmd0);
  FUNC_5(VAR_32, VAR_22, VAR_34->RF_rfpll_mmd1);
  FUNC_5(VAR_32,
    VAR_28, VAR_34->RF_vcobuf_tune);
  FUNC_5(VAR_32,
    VAR_10,
    VAR_34->RF_logen_mx2g_tune);
  FUNC_5(VAR_32, VAR_8,
    VAR_34->RF_logen_indbuf2g_tune);

  FUNC_5(VAR_32,
    VAR_24,
    VAR_34->RF_txmix2g_tune_boost_pu_core0);
  FUNC_5(VAR_32,
    VAR_12,
    VAR_34->RF_pad2g_tune_pus_core0);
  FUNC_5(VAR_32, VAR_4,
    VAR_34->RF_lna2g_tune_core0);

  FUNC_5(VAR_32,
    VAR_25,
    VAR_34->RF_txmix2g_tune_boost_pu_core1);
  FUNC_5(VAR_32,
    VAR_13,
    VAR_34->RF_pad2g_tune_pus_core1);
  FUNC_5(VAR_32, VAR_5,
    VAR_34->RF_lna2g_tune_core1);

 } else {

  FUNC_5(VAR_32,
    VAR_29,
    VAR_33->RF_vcocal_countval0);
  FUNC_5(VAR_32, VAR_30,
    VAR_33->RF_vcocal_countval1);
  FUNC_5(VAR_32, VAR_23,
    VAR_33->RF_rfpll_refmaster_sparextalsize);
  FUNC_5(VAR_32, VAR_20,
    VAR_33->RF_rfpll_loopfilter_r1);
  FUNC_5(VAR_32, VAR_19,
    VAR_33->RF_rfpll_loopfilter_c2);
  FUNC_5(VAR_32, VAR_18,
    VAR_33->RF_rfpll_loopfilter_c1);
  FUNC_5(VAR_32, VAR_3, VAR_33->RF_cp_kpd_idac);
  FUNC_5(VAR_32, VAR_21, VAR_33->RF_rfpll_mmd0);
  FUNC_5(VAR_32, VAR_22, VAR_33->RF_rfpll_mmd1);
  FUNC_5(VAR_32, VAR_28, VAR_33->RF_vcobuf_tune);
  FUNC_5(VAR_32,
    VAR_10,
    VAR_33->RF_logen_mx2g_tune);
  FUNC_5(VAR_32, VAR_11,
    VAR_33->RF_logen_mx5g_tune);
  FUNC_5(VAR_32, VAR_8,
    VAR_33->RF_logen_indbuf2g_tune);
  FUNC_5(VAR_32, VAR_9,
    VAR_33->RF_logen_indbuf5g_tune);

  FUNC_5(VAR_32,
    VAR_24,
    VAR_33->RF_txmix2g_tune_boost_pu_core0);
  FUNC_5(VAR_32,
    VAR_12,
    VAR_33->RF_pad2g_tune_pus_core0);
  FUNC_5(VAR_32, VAR_16,
    VAR_33->RF_pga_boost_tune_core0);
  FUNC_5(VAR_32, VAR_26,
    VAR_33->RF_txmix5g_boost_tune_core0);
  FUNC_5(VAR_32, VAR_14,
    VAR_33->RF_pad5g_tune_misc_pus_core0);
  FUNC_5(VAR_32, VAR_4,
    VAR_33->RF_lna2g_tune_core0);
  FUNC_5(VAR_32, VAR_6,
    VAR_33->RF_lna5g_tune_core0);

  FUNC_5(VAR_32,
    VAR_25,
    VAR_33->RF_txmix2g_tune_boost_pu_core1);
  FUNC_5(VAR_32,
    VAR_13,
    VAR_33->RF_pad2g_tune_pus_core1);
  FUNC_5(VAR_32, VAR_17,
    VAR_33->RF_pga_boost_tune_core1);
  FUNC_5(VAR_32, VAR_27,
    VAR_33->RF_txmix5g_boost_tune_core1);
  FUNC_5(VAR_32, VAR_15,
    VAR_33->RF_pad5g_tune_misc_pus_core1);
  FUNC_5(VAR_32, VAR_5,
    VAR_33->RF_lna2g_tune_core1);
  FUNC_5(VAR_32, VAR_7,
    VAR_33->RF_lna5g_tune_core1);
 }

 if ((VAR_32->pubpi.radiorev <= 4) || (VAR_32->pubpi.radiorev == 6)) {

  if (FUNC_0(VAR_32->radio_chanspec)) {
   FUNC_5(VAR_32, VAR_20,
     0x3f);
   FUNC_5(VAR_32, VAR_3, 0x3f);
   FUNC_5(VAR_32, VAR_18,
     0x8);
   FUNC_5(VAR_32, VAR_19,
     0x8);
  } else {
   FUNC_5(VAR_32, VAR_20,
     0x1f);
   FUNC_5(VAR_32, VAR_3, 0x3f);
   FUNC_5(VAR_32, VAR_18,
     0x8);
   FUNC_5(VAR_32, VAR_19,
     0x8);
  }
 } else if ((VAR_32->pubpi.radiorev == 5) || (VAR_32->pubpi.radiorev == 7) ||
     (VAR_32->pubpi.radiorev == 8)) {

  if (FUNC_0(VAR_32->radio_chanspec)) {
   FUNC_5(VAR_32, VAR_20,
     0x1b);
   FUNC_5(VAR_32, VAR_3, 0x30);
   FUNC_5(VAR_32, VAR_18,
     0xa);
   FUNC_5(VAR_32, VAR_19,
     0xa);
  } else {
   FUNC_5(VAR_32, VAR_20,
     0x1f);
   FUNC_5(VAR_32, VAR_3, 0x3f);
   FUNC_5(VAR_32, VAR_18,
     0x8);
   FUNC_5(VAR_32, VAR_19,
     0x8);
  }

 }

 if (FUNC_0(VAR_32->radio_chanspec)) {
  if (FUNC_1(VAR_32)) {
   if (VAR_32->pubpi.radiorev == 3)
    VAR_36 = 0x6b;

   if (VAR_32->pubpi.radiorev == 5)
    VAR_37 = 0x73;

  } else {
   if (VAR_32->pubpi.radiorev != 5) {
    VAR_37 = 0x3;

    VAR_36 = 0x61;
   }
  }

  for (VAR_35 = 0; VAR_35 <= 1; VAR_35++) {

   if (VAR_36 != 0)
    FUNC_2(VAR_32, VAR_2, VAR_0, VAR_35,
       VAR_31,
       VAR_36);

   if (VAR_37 != 0)
    FUNC_2(VAR_32, VAR_2, VAR_0, VAR_35,
       VAR_1,
       VAR_37);
  }
 }

 FUNC_3(50);

 FUNC_4(VAR_32);
}
