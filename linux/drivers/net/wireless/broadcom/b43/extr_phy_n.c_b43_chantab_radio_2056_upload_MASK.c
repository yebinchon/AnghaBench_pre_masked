
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b43_nphy_channeltab_entry_rev3 {int radio_tx1_mixg_boost_tune; int radio_tx1_mixa_boost_tune; int radio_tx1_pgag_boost_tune; int radio_tx1_pgaa_boost_tune; int radio_tx1_padg_boost_tune; int radio_tx1_pada_boost_tune; int radio_tx1_intpag_boost_tune; int radio_tx1_intpaa_boost_tune; int radio_rx1_lnag_tune; int radio_rx1_lnaa_tune; int radio_tx0_mixg_boost_tune; int radio_tx0_mixa_boost_tune; int radio_tx0_pgag_boost_tune; int radio_tx0_pgaa_boost_tune; int radio_tx0_padg_boost_tune; int radio_tx0_pada_boost_tune; int radio_tx0_intpag_boost_tune; int radio_tx0_intpaa_boost_tune; int radio_rx0_lnag_tune; int radio_rx0_lnaa_tune; int radio_syn_logen_buf4; int radio_syn_logen_buf3; int radio_syn_logen_mixer2; int radio_syn_logen_vcobuf1; int radio_syn_reserved_addr29; int radio_syn_reserved_addr28; int radio_syn_reserved_addr27; int radio_syn_pll_loopfilter5; int radio_syn_pll_loopfilter4; int radio_syn_pll_loopfilter3; int radio_syn_pll_loopfilter2; int radio_syn_pll_loopfilter1; int radio_syn_pll_mmd1; int radio_syn_pll_mmd2; int radio_syn_pll_refdiv; int radio_syn_pll_vcocal2; int radio_syn_pll_vcocal1; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct b43_wldev*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_31,
    const struct b43_nphy_channeltab_entry_rev3 *VAR_32)
{
 FUNC_0(VAR_31, VAR_16, VAR_32->radio_syn_pll_vcocal1);
 FUNC_0(VAR_31, VAR_17, VAR_32->radio_syn_pll_vcocal2);
 FUNC_0(VAR_31, VAR_15, VAR_32->radio_syn_pll_refdiv);
 FUNC_0(VAR_31, VAR_14, VAR_32->radio_syn_pll_mmd2);
 FUNC_0(VAR_31, VAR_13, VAR_32->radio_syn_pll_mmd1);
 FUNC_0(VAR_31, VAR_8,
     VAR_32->radio_syn_pll_loopfilter1);
 FUNC_0(VAR_31, VAR_9,
     VAR_32->radio_syn_pll_loopfilter2);
 FUNC_0(VAR_31, VAR_10,
     VAR_32->radio_syn_pll_loopfilter3);
 FUNC_0(VAR_31, VAR_11,
     VAR_32->radio_syn_pll_loopfilter4);
 FUNC_0(VAR_31, VAR_12,
     VAR_32->radio_syn_pll_loopfilter5);
 FUNC_0(VAR_31, VAR_18,
     VAR_32->radio_syn_reserved_addr27);
 FUNC_0(VAR_31, VAR_19,
     VAR_32->radio_syn_reserved_addr28);
 FUNC_0(VAR_31, VAR_20,
     VAR_32->radio_syn_reserved_addr29);
 FUNC_0(VAR_31, VAR_7,
     VAR_32->radio_syn_logen_vcobuf1);
 FUNC_0(VAR_31, VAR_6, VAR_32->radio_syn_logen_mixer2);
 FUNC_0(VAR_31, VAR_4, VAR_32->radio_syn_logen_buf3);
 FUNC_0(VAR_31, VAR_5, VAR_32->radio_syn_logen_buf4);

 FUNC_0(VAR_31, VAR_0 | VAR_2,
     VAR_32->radio_rx0_lnaa_tune);
 FUNC_0(VAR_31, VAR_0 | VAR_3,
     VAR_32->radio_rx0_lnag_tune);

 FUNC_0(VAR_31, VAR_21 | VAR_23,
     VAR_32->radio_tx0_intpaa_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_24,
     VAR_32->radio_tx0_intpag_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_27,
     VAR_32->radio_tx0_pada_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_28,
     VAR_32->radio_tx0_padg_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_29,
     VAR_32->radio_tx0_pgaa_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_30,
     VAR_32->radio_tx0_pgag_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_25,
     VAR_32->radio_tx0_mixa_boost_tune);
 FUNC_0(VAR_31, VAR_21 | VAR_26,
     VAR_32->radio_tx0_mixg_boost_tune);

 FUNC_0(VAR_31, VAR_1 | VAR_2,
     VAR_32->radio_rx1_lnaa_tune);
 FUNC_0(VAR_31, VAR_1 | VAR_3,
     VAR_32->radio_rx1_lnag_tune);

 FUNC_0(VAR_31, VAR_22 | VAR_23,
     VAR_32->radio_tx1_intpaa_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_24,
     VAR_32->radio_tx1_intpag_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_27,
     VAR_32->radio_tx1_pada_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_28,
     VAR_32->radio_tx1_padg_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_29,
     VAR_32->radio_tx1_pgaa_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_30,
     VAR_32->radio_tx1_pgag_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_25,
     VAR_32->radio_tx1_mixa_boost_tune);
 FUNC_0(VAR_31, VAR_22 | VAR_26,
     VAR_32->radio_tx1_mixg_boost_tune);
}
