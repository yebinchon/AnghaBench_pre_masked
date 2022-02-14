
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct b43_phy {int rev; TYPE_3__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; int wl; } ;
struct b43_phy_n_iq_comp {int dummy; } ;
struct TYPE_4__ {int * txcal_coeffs_5G; int * txcal_radio_regs_5G; struct b43_phy_n_iq_comp rxcal_coeffs_5G; int * txcal_coeffs_2G; int * txcal_radio_regs_2G; struct b43_phy_n_iq_comp rxcal_coeffs_2G; } ;
struct b43_chanspec {int channel_type; int center_freq; } ;
struct b43_phy_n {scalar_t__ hang_avoid; TYPE_1__ cal_cache; struct b43_chanspec iqcal_chanspec_5G; struct b43_chanspec iqcal_chanspec_2G; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct TYPE_5__ {int center_freq; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int,struct b43_phy_n_iq_comp*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int *) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_9)
{
 struct b43_phy *VAR_10 = &VAR_9->phy;
 struct b43_phy_n *VAR_11 = VAR_9->phy.n;

 struct b43_phy_n_iq_comp *VAR_12 = ((void*)0);
 u16 *VAR_13 = ((void*)0);
 struct b43_chanspec *VAR_14;
 u16 *VAR_15 = ((void*)0);

 if (VAR_11->hang_avoid)
  FUNC_3(VAR_9, 1);

 if (FUNC_1(VAR_9->wl) == VAR_0) {
  VAR_12 = &VAR_11->cal_cache.rxcal_coeffs_2G;
  VAR_13 = VAR_11->cal_cache.txcal_radio_regs_2G;
  VAR_14 = &VAR_11->iqcal_chanspec_2G;
  VAR_15 = VAR_11->cal_cache.txcal_coeffs_2G;
 } else {
  VAR_12 = &VAR_11->cal_cache.rxcal_coeffs_5G;
  VAR_13 = VAR_11->cal_cache.txcal_radio_regs_5G;
  VAR_14 = &VAR_11->iqcal_chanspec_5G;
  VAR_15 = VAR_11->cal_cache.txcal_coeffs_5G;
 }

 FUNC_2(VAR_9, 0, VAR_12);

 if (VAR_10->rev >= 19) {

 } else if (VAR_10->rev >= 7) {
  VAR_13[0] = FUNC_5(VAR_9,
           VAR_3);
  VAR_13[1] = FUNC_5(VAR_9,
           VAR_4);
  VAR_13[4] = FUNC_5(VAR_9,
           VAR_1);
  VAR_13[5] = FUNC_5(VAR_9,
           VAR_2);
  VAR_13[2] = FUNC_5(VAR_9,
           VAR_7);
  VAR_13[3] = FUNC_5(VAR_9,
           VAR_8);
  VAR_13[6] = FUNC_5(VAR_9,
           VAR_5);
  VAR_13[7] = FUNC_5(VAR_9,
           VAR_6);
 } else if (VAR_10->rev >= 3) {
  VAR_13[0] = FUNC_5(VAR_9, 0x2021);
  VAR_13[1] = FUNC_5(VAR_9, 0x2022);
  VAR_13[2] = FUNC_5(VAR_9, 0x3021);
  VAR_13[3] = FUNC_5(VAR_9, 0x3022);
  VAR_13[4] = FUNC_5(VAR_9, 0x2023);
  VAR_13[5] = FUNC_5(VAR_9, 0x2024);
  VAR_13[6] = FUNC_5(VAR_9, 0x3023);
  VAR_13[7] = FUNC_5(VAR_9, 0x3024);
 } else {
  VAR_13[0] = FUNC_5(VAR_9, 0x8B);
  VAR_13[1] = FUNC_5(VAR_9, 0xBA);
  VAR_13[2] = FUNC_5(VAR_9, 0x8D);
  VAR_13[3] = FUNC_5(VAR_9, 0xBC);
 }
 VAR_14->center_freq = VAR_9->phy.chandef->chan->center_freq;
 VAR_14->channel_type =
    FUNC_6(VAR_9->phy.chandef);
 FUNC_4(VAR_9, FUNC_0(15, 80), 8, VAR_15);

 if (VAR_11->hang_avoid)
  FUNC_3(VAR_9, 0);
}
