
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {int txctl2; int* nrssi; int* nrssi_lt; int lofcal; int initval; int aci_enable; int aci_wlan_automatic; int aci_hw_rssi; int antenna_diversity; scalar_t__ loopback_gain; scalar_t__ _lo_pairs; scalar_t__ calibrated; scalar_t__ minlowsigpos; scalar_t__ minlowsig; scalar_t__ nrssislope; scalar_t__ txpwr_offset; int txctl1; int rfatt; int bbatt; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
struct b43legacy_lopair {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_5(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 int VAR_3;


 VAR_2->bbatt = FUNC_1(VAR_1);
 VAR_2->rfatt = FUNC_2(VAR_1);
 VAR_2->txctl1 = FUNC_3(VAR_1);
 VAR_2->txctl2 = 0xFFFF;
 VAR_2->txpwr_offset = 0;


 VAR_2->nrssislope = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->nrssi); VAR_3++)
  VAR_2->nrssi[VAR_3] = -1000;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->nrssi_lt); VAR_3++)
  VAR_2->nrssi_lt[VAR_3] = VAR_3;

 VAR_2->lofcal = 0xFFFF;
 VAR_2->initval = 0xFFFF;

 VAR_2->aci_enable = 0;
 VAR_2->aci_wlan_automatic = 0;
 VAR_2->aci_hw_rssi = 0;

 VAR_2->antenna_diversity = 0xFFFF;
 FUNC_4(VAR_2->minlowsig, 0xFF, sizeof(VAR_2->minlowsig));
 FUNC_4(VAR_2->minlowsigpos, 0, sizeof(VAR_2->minlowsigpos));


 VAR_2->calibrated = 0;

 if (VAR_2->_lo_pairs)
  FUNC_4(VAR_2->_lo_pairs, 0,
         sizeof(struct b43legacy_lopair) * VAR_0);
 FUNC_4(VAR_2->loopback_gain, 0, sizeof(VAR_2->loopback_gain));
}
