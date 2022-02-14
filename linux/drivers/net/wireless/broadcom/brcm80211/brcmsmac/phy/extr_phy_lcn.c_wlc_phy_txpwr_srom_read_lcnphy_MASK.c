
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int tr_iso; } ;
struct TYPE_11__ {TYPE_4__ ghz2; } ;
struct ssb_sprom {int cck2gpo; int ofdm2gpo; int* mcs2gpo; int ant_available_bg; int freqoffset_corr; int tempsense_option; int tempcorrx; int iqcal_swp_dis; int hw_iqcal_en; int tempsense_slope; int measpower; int rawtempsense; int opo; TYPE_6__* core_pwr_info; int rssisav2g; int rssismc2g; int rssismf2g; int pa0b2; int pa0b1; int pa0b0; int rxpo2g; TYPE_5__ fem; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy_lcnphy {int lcnphy_mcs20_po; int lcnphy_cck_dig_filt_type; int lcnphy_freqoffset_corr; int lcnphy_tempsense_option; int lcnphy_tempcorrx; int lcnphy_iqcal_swp_dis; int lcnphy_hw_iqcal_en; int lcnphy_tempsense_slope; int lcnphy_measPower; int lcnphy_rawtempsense; int lcnphy_rssi_gs; int lcnphy_rssi_gs_hightemp; int lcnphy_rssi_vc; int lcnphy_rssi_vc_hightemp; int lcnphy_rssi_vf; int lcnphy_rssi_vf_hightemp; int lcnphy_rssi_gs_lowtemp; int lcnphy_rssi_vc_lowtemp; int lcnphy_rssi_vf_lowtemp; int lcnphy_rx_power_offset; int lcnphy_tr_isolation_mid; } ;
struct TYPE_7__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {void** tx_srom_max_rate_2g; int * txpa_2g; int * txpa_2g_high_temp; int * txpa_2g_low_temp; void* tx_srom_max_2g; int radio_chanspec; TYPE_3__* d11core; TYPE_1__ u; } ;
typedef void* s8 ;
struct TYPE_12__ {void* maxpwr_2g; } ;
struct TYPE_9__ {TYPE_2__* bus; } ;
struct TYPE_8__ {struct ssb_sprom sprom; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct brcms_phy_pub*,int) ;

__attribute__((used)) static bool FUNC_2(struct brcms_phy *VAR_7)
{
 s8 VAR_8 = 0;
 int VAR_9;
 struct brcms_phy_lcnphy *VAR_10 = VAR_7->u.pi_lcnphy;
 struct ssb_sprom *VAR_11 = &VAR_7->d11core->bus->sprom;

 if (FUNC_0(VAR_7->radio_chanspec)) {
  u16 VAR_12 = 0;
  u32 VAR_13, VAR_14;

  VAR_10->lcnphy_tr_isolation_mid = VAR_11->fem.ghz2.tr_iso;

  VAR_10->lcnphy_rx_power_offset = VAR_11->rxpo2g;

  VAR_7->txpa_2g[0] = VAR_11->pa0b0;
  VAR_7->txpa_2g[1] = VAR_11->pa0b1;
  VAR_7->txpa_2g[2] = VAR_11->pa0b2;

  VAR_10->lcnphy_rssi_vf = VAR_11->rssismf2g;
  VAR_10->lcnphy_rssi_vc = VAR_11->rssismc2g;
  VAR_10->lcnphy_rssi_gs = VAR_11->rssisav2g;

  VAR_10->lcnphy_rssi_vf_lowtemp = VAR_10->lcnphy_rssi_vf;
  VAR_10->lcnphy_rssi_vc_lowtemp = VAR_10->lcnphy_rssi_vc;
  VAR_10->lcnphy_rssi_gs_lowtemp = VAR_10->lcnphy_rssi_gs;

  VAR_10->lcnphy_rssi_vf_hightemp = VAR_10->lcnphy_rssi_vf;
  VAR_10->lcnphy_rssi_vc_hightemp = VAR_10->lcnphy_rssi_vc;
  VAR_10->lcnphy_rssi_gs_hightemp = VAR_10->lcnphy_rssi_gs;

  VAR_8 = VAR_11->core_pwr_info[0].maxpwr_2g;
  VAR_7->tx_srom_max_2g = VAR_8;

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_7->txpa_2g_low_temp[VAR_9] = VAR_7->txpa_2g[VAR_9];
   VAR_7->txpa_2g_high_temp[VAR_9] = VAR_7->txpa_2g[VAR_9];
  }

  VAR_12 = VAR_11->cck2gpo;
  VAR_13 = VAR_11->ofdm2gpo;
  if (VAR_12) {
   uint VAR_15 = VAR_8;

   for (VAR_9 = VAR_1; VAR_9 <= VAR_4; VAR_9++) {
    VAR_7->tx_srom_max_rate_2g[VAR_9] =
     VAR_15 - ((VAR_12 & 0xf) * 2);
    VAR_12 >>= 4;
   }

   for (VAR_9 = VAR_2; VAR_9 <= VAR_5; VAR_9++) {
    VAR_7->tx_srom_max_rate_2g[VAR_9] =
     VAR_15 -
     ((VAR_13 & 0xf) * 2);
    VAR_13 >>= 4;
   }
  } else {
   u8 VAR_16 = 0;

   VAR_16 = VAR_11->opo;

   for (VAR_9 = VAR_1; VAR_9 <= VAR_4; VAR_9++)
    VAR_7->tx_srom_max_rate_2g[VAR_9] = VAR_8;

   for (VAR_9 = VAR_2; VAR_9 <= VAR_5; VAR_9++) {
    VAR_7->tx_srom_max_rate_2g[VAR_9] = VAR_8 -
      ((VAR_13 & 0xf) * 2);
    VAR_13 >>= 4;
   }
   VAR_14 = VAR_11->mcs2gpo[1] << 16;
   VAR_14 |= VAR_11->mcs2gpo[0];
   VAR_10->lcnphy_mcs20_po = VAR_14;
   for (VAR_9 = VAR_3;
        VAR_9 <= VAR_6; VAR_9++) {
    VAR_7->tx_srom_max_rate_2g[VAR_9] =
     VAR_8 - ((VAR_14 & 0xf) * 2);
    VAR_14 >>= 4;
   }
  }

  VAR_10->lcnphy_rawtempsense = VAR_11->rawtempsense;
  VAR_10->lcnphy_measPower = VAR_11->measpower;
  VAR_10->lcnphy_tempsense_slope = VAR_11->tempsense_slope;
  VAR_10->lcnphy_hw_iqcal_en = VAR_11->hw_iqcal_en;
  VAR_10->lcnphy_iqcal_swp_dis = VAR_11->iqcal_swp_dis;
  VAR_10->lcnphy_tempcorrx = VAR_11->tempcorrx;
  VAR_10->lcnphy_tempsense_option = VAR_11->tempsense_option;
  VAR_10->lcnphy_freqoffset_corr = VAR_11->freqoffset_corr;
  if (VAR_11->ant_available_bg > 1)
   FUNC_1((struct brcms_phy_pub *) VAR_7,
    VAR_11->ant_available_bg);
 }
 VAR_10->lcnphy_cck_dig_filt_type = -1;

 return 1;
}
