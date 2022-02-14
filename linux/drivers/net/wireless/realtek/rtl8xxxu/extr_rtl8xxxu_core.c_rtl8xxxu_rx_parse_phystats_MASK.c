
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtl8xxxu_priv {int dummy; } ;
struct rtl8723au_phy_stats {int cck_agc_rpt_ofdm_cfosho_a; int cck_sig_qual_ofdm_pwdb_all; scalar_t__ sgi_en; } ;
struct ieee80211_rx_status {int signal; int enc_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rtl8xxxu_priv *VAR_2,
           struct ieee80211_rx_status *VAR_3,
           struct rtl8723au_phy_stats *VAR_4,
           u32 VAR_5)
{
 if (VAR_4->sgi_en)
  VAR_3->enc_flags |= VAR_1;

 if (VAR_5 < VAR_0) {



  u8 VAR_6 = VAR_4->cck_agc_rpt_ofdm_cfosho_a;

  switch (VAR_6 & 0xc0) {
  case 0xc0:
   VAR_3->signal = -46 - (VAR_6 & 0x3e);
   break;
  case 0x80:
   VAR_3->signal = -26 - (VAR_6 & 0x3e);
   break;
  case 0x40:
   VAR_3->signal = -12 - (VAR_6 & 0x3e);
   break;
  case 0x00:
   VAR_3->signal = 16 - (VAR_6 & 0x3e);
   break;
  }
 } else {
  VAR_3->signal =
   (VAR_4->cck_sig_qual_ofdm_pwdb_all >> 1) - 110;
 }
}
