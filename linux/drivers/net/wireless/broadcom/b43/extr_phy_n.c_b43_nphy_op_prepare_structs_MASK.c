
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


struct TYPE_11__ {int extpa_gain; } ;
struct TYPE_10__ {int extpa_gain; } ;
struct TYPE_12__ {TYPE_5__ ghz5; TYPE_4__ ghz2; } ;
struct ssb_sprom {int revision; int boardflags2_lo; TYPE_6__ fem; } ;
struct pci_dev {int device; } ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; TYPE_3__* dev; } ;
struct b43_phy_n {int hang_avoid; int gain_boost; int txrx_chain; int phyrxchain; int perical; int* tx_pwr_idx; int txpwrctrl; int pwg_gain_5ghz; int ipa2g_on; int ipa5g_on; int spur_avoid; } ;
struct TYPE_9__ {scalar_t__ board_vendor; int core_rev; scalar_t__ bus_type; TYPE_2__* sdev; struct ssb_sprom* bus_sprom; } ;
struct TYPE_8__ {TYPE_1__* bus; } ;
struct TYPE_7__ {scalar_t__ bustype; struct pci_dev* host_pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct b43_phy_n*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_7)
{
 struct b43_phy *VAR_8 = &VAR_7->phy;
 struct b43_phy_n *VAR_9 = VAR_8->n;
 struct ssb_sprom *VAR_10 = VAR_7->dev->bus_sprom;

 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->hang_avoid = (VAR_8->rev == 3 || VAR_8->rev == 4);
 VAR_9->spur_avoid = (VAR_8->rev >= 3) ?
    VAR_3 : VAR_4;
 VAR_9->gain_boost = 1;
 VAR_9->txrx_chain = 2;
 VAR_9->phyrxchain = 3;
 VAR_9->perical = 2;


 VAR_9->tx_pwr_idx[0] = 128;
 VAR_9->tx_pwr_idx[1] = 128;


 VAR_9->txpwrctrl = 0;
 VAR_9->pwg_gain_5ghz = 0;
 if (VAR_7->phy.rev >= 3 ||
     (VAR_7->dev->board_vendor == VAR_5 &&
      (VAR_7->dev->core_rev == 11 || VAR_7->dev->core_rev == 12))) {
  VAR_9->txpwrctrl = 1;
  VAR_9->pwg_gain_5ghz = 1;
 } else if (VAR_10->revision >= 4) {
  if (VAR_7->phy.rev >= 2 &&
      (VAR_10->boardflags2_lo & VAR_1)) {
   VAR_9->txpwrctrl = 1;
  } else if (VAR_10->boardflags2_lo & VAR_0) {
   VAR_9->pwg_gain_5ghz = 1;
  }
 }

 if (VAR_7->phy.rev >= 3) {
  VAR_9->ipa2g_on = VAR_10->fem.ghz2.extpa_gain == 2;
  VAR_9->ipa5g_on = VAR_10->fem.ghz5.extpa_gain == 2;
 }
}
