
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pipe3_settings {int ana_interface; int ana_losd; int dig_hs_rate; int dig_ovrd_hs_rate; int dig_fastlock; int dig_lbw; int dig_stepcnt; int dig_stl; int dig_thr; int dig_thr_mode; int dig_2ndo_sdm_mode; int dll_trim_sel; int dll_phint_rate; int eq_lev; int eq_ftc; int eq_ctl; int eq_ovrd_lev; int eq_ovrd_ftc; } ;
struct ti_pipe3 {scalar_t__ mode; int phy_rx; struct pipe3_settings settings; } ;


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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ti_pipe3 *VAR_45)
{
 u32 VAR_46;
 struct pipe3_settings *VAR_47 = &VAR_45->settings;

 VAR_46 = FUNC_0(VAR_45->phy_rx, VAR_39);
 VAR_46 &= ~(VAR_0 | VAR_2 | VAR_37);
 VAR_46 |= (VAR_47->ana_interface << VAR_1 | VAR_47->ana_losd << VAR_3);
 FUNC_1(VAR_45->phy_rx, VAR_39, VAR_46);

 VAR_46 = FUNC_0(VAR_45->phy_rx, VAR_40);
 VAR_46 &= ~(VAR_29 | VAR_35 | VAR_6 |
   VAR_8 | VAR_11 | VAR_13 |
   VAR_15 | VAR_16 | VAR_4);
 VAR_46 |= VAR_47->dig_hs_rate << VAR_30 |
  VAR_47->dig_ovrd_hs_rate << VAR_36 |
  VAR_47->dig_fastlock << VAR_7 |
  VAR_47->dig_lbw << VAR_9 |
  VAR_47->dig_stepcnt << VAR_12 |
  VAR_47->dig_stl << VAR_14 |
  VAR_47->dig_thr << VAR_18 |
  VAR_47->dig_thr_mode << VAR_17 |
  VAR_47->dig_2ndo_sdm_mode << VAR_5;
 FUNC_1(VAR_45->phy_rx, VAR_40, VAR_46);

 VAR_46 = FUNC_0(VAR_45->phy_rx, VAR_43);
 VAR_46 &= ~VAR_21;
 VAR_46 |= VAR_47->dll_trim_sel << VAR_22;
 FUNC_1(VAR_45->phy_rx, VAR_43, VAR_46);

 VAR_46 = FUNC_0(VAR_45->phy_rx, VAR_41);
 VAR_46 &= ~VAR_19;
 VAR_46 |= VAR_47->dll_phint_rate << VAR_20;
 FUNC_1(VAR_45->phy_rx, VAR_41, VAR_46);

 VAR_46 = FUNC_0(VAR_45->phy_rx, VAR_42);
 VAR_46 &= ~(VAR_27 | VAR_25 | VAR_23 |
   VAR_33 | VAR_31);
 VAR_46 |= VAR_47->eq_lev << VAR_28 |
  VAR_47->eq_ftc << VAR_26 |
  VAR_47->eq_ctl << VAR_24 |
  VAR_47->eq_ovrd_lev << VAR_34 |
  VAR_47->eq_ovrd_ftc << VAR_32;
 FUNC_1(VAR_45->phy_rx, VAR_42, VAR_46);

 if (VAR_45->mode == VAR_38) {
  VAR_46 = FUNC_0(VAR_45->phy_rx,
         VAR_44);
  VAR_46 &= ~VAR_10;
  FUNC_1(VAR_45->phy_rx, VAR_44,
    VAR_46);
 }
}
