
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b43_nphy_chantabent_rev7_2g {int radio_lna2g_tune_core1; int radio_pad2g_tune_pus_core1; int radio_txmix2g_tune_boost_pu_core1; int radio_lna2g_tune_core0; int radio_pad2g_tune_pus_core0; int radio_txmix2g_tune_boost_pu_core0; int radio_logen_indbuf2g_tune; int radio_logen_mx2g_tune; int radio_vcobuf_tune; int radio_rfpll_mmd1; int radio_rfpll_mmd0; int radio_cp_kpd_idac; int radio_rfpll_loopfilter_c1; int radio_rfpll_loopfilter_c2; int radio_rfpll_loopfilter_r1; int radio_rfpll_refmaster_sparextalsize; int radio_vcocal_countval1; int radio_vcocal_countval0; } ;
struct b43_nphy_chantabent_rev7 {int radio_lna5g_tune_core1; int radio_lna2g_tune_core1; int radio_pad5g_tune_misc_pus_core1; int radio_txmix5g_boost_tune_core1; int radio_pga_boost_tune_core1; int radio_pad2g_tune_pus_core1; int radio_txmix2g_tune_boost_pu_core1; int radio_lna5g_tune_core0; int radio_lna2g_tune_core0; int radio_pad5g_tune_misc_pus_core0; int radio_txmix5g_boost_tune_core0; int radio_pga_boost_tune_core0; int radio_pad2g_tune_pus_core0; int radio_txmix2g_tune_boost_pu_core0; int radio_logen_indbuf5g_tune; int radio_logen_indbuf2g_tune; int radio_logen_mx5g_tune; int radio_logen_mx2g_tune; int radio_vcobuf_tune; int radio_rfpll_mmd1; int radio_rfpll_mmd0; int radio_cp_kpd_idac; int radio_rfpll_loopfilter_c1; int radio_rfpll_loopfilter_c2; int radio_rfpll_loopfilter_r1; int radio_rfpll_refmaster_sparextalsize; int radio_vcocal_countval1; int radio_vcocal_countval0; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_28,
       const struct b43_nphy_chantabent_rev7 *VAR_29,
       const struct b43_nphy_chantabent_rev7_2g *VAR_30)
{
 if (VAR_30) {
  FUNC_0(VAR_28, VAR_26, VAR_30->radio_vcocal_countval0);
  FUNC_0(VAR_28, VAR_27, VAR_30->radio_vcocal_countval1);
  FUNC_0(VAR_28, VAR_20, VAR_30->radio_rfpll_refmaster_sparextalsize);
  FUNC_0(VAR_28, VAR_17, VAR_30->radio_rfpll_loopfilter_r1);
  FUNC_0(VAR_28, VAR_16, VAR_30->radio_rfpll_loopfilter_c2);
  FUNC_0(VAR_28, VAR_15, VAR_30->radio_rfpll_loopfilter_c1);
  FUNC_0(VAR_28, VAR_0, VAR_30->radio_cp_kpd_idac);
  FUNC_0(VAR_28, VAR_18, VAR_30->radio_rfpll_mmd0);
  FUNC_0(VAR_28, VAR_19, VAR_30->radio_rfpll_mmd1);
  FUNC_0(VAR_28, VAR_25, VAR_30->radio_vcobuf_tune);
  FUNC_0(VAR_28, VAR_7, VAR_30->radio_logen_mx2g_tune);
  FUNC_0(VAR_28, VAR_5, VAR_30->radio_logen_indbuf2g_tune);
  FUNC_0(VAR_28, VAR_21, VAR_30->radio_txmix2g_tune_boost_pu_core0);
  FUNC_0(VAR_28, VAR_9, VAR_30->radio_pad2g_tune_pus_core0);
  FUNC_0(VAR_28, VAR_1, VAR_30->radio_lna2g_tune_core0);
  FUNC_0(VAR_28, VAR_22, VAR_30->radio_txmix2g_tune_boost_pu_core1);
  FUNC_0(VAR_28, VAR_10, VAR_30->radio_pad2g_tune_pus_core1);
  FUNC_0(VAR_28, VAR_2, VAR_30->radio_lna2g_tune_core1);

 } else {
  FUNC_0(VAR_28, VAR_26, VAR_29->radio_vcocal_countval0);
  FUNC_0(VAR_28, VAR_27, VAR_29->radio_vcocal_countval1);
  FUNC_0(VAR_28, VAR_20, VAR_29->radio_rfpll_refmaster_sparextalsize);
  FUNC_0(VAR_28, VAR_17, VAR_29->radio_rfpll_loopfilter_r1);
  FUNC_0(VAR_28, VAR_16, VAR_29->radio_rfpll_loopfilter_c2);
  FUNC_0(VAR_28, VAR_15, VAR_29->radio_rfpll_loopfilter_c1);
  FUNC_0(VAR_28, VAR_0, VAR_29->radio_cp_kpd_idac);
  FUNC_0(VAR_28, VAR_18, VAR_29->radio_rfpll_mmd0);
  FUNC_0(VAR_28, VAR_19, VAR_29->radio_rfpll_mmd1);
  FUNC_0(VAR_28, VAR_25, VAR_29->radio_vcobuf_tune);
  FUNC_0(VAR_28, VAR_7, VAR_29->radio_logen_mx2g_tune);
  FUNC_0(VAR_28, VAR_8, VAR_29->radio_logen_mx5g_tune);
  FUNC_0(VAR_28, VAR_5, VAR_29->radio_logen_indbuf2g_tune);
  FUNC_0(VAR_28, VAR_6, VAR_29->radio_logen_indbuf5g_tune);
  FUNC_0(VAR_28, VAR_21, VAR_29->radio_txmix2g_tune_boost_pu_core0);
  FUNC_0(VAR_28, VAR_9, VAR_29->radio_pad2g_tune_pus_core0);
  FUNC_0(VAR_28, VAR_13, VAR_29->radio_pga_boost_tune_core0);
  FUNC_0(VAR_28, VAR_23, VAR_29->radio_txmix5g_boost_tune_core0);
  FUNC_0(VAR_28, VAR_11, VAR_29->radio_pad5g_tune_misc_pus_core0);
  FUNC_0(VAR_28, VAR_1, VAR_29->radio_lna2g_tune_core0);
  FUNC_0(VAR_28, VAR_3, VAR_29->radio_lna5g_tune_core0);
  FUNC_0(VAR_28, VAR_22, VAR_29->radio_txmix2g_tune_boost_pu_core1);
  FUNC_0(VAR_28, VAR_10, VAR_29->radio_pad2g_tune_pus_core1);
  FUNC_0(VAR_28, VAR_14, VAR_29->radio_pga_boost_tune_core1);
  FUNC_0(VAR_28, VAR_24, VAR_29->radio_txmix5g_boost_tune_core1);
  FUNC_0(VAR_28, VAR_12, VAR_29->radio_pad5g_tune_misc_pus_core1);
  FUNC_0(VAR_28, VAR_2, VAR_29->radio_lna2g_tune_core1);
  FUNC_0(VAR_28, VAR_4, VAR_29->radio_lna5g_tune_core1);
 }
}
