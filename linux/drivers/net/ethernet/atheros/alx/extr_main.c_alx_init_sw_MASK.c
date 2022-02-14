
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; int subsystem_device; scalar_t__ revision; int dev; } ;
struct alx_hw {int lnk_patch; int smb_timer; int imt; int ith_tpd; int adv_cfg; int flowctrl; int rx_ctrl; int duplex; int link_speed; int max_dma_chnl; int dma_chnl; int mtu; struct pci_dev* pdev; } ;
struct alx_priv {int tx_ringsz; int rx_ringsz; int int_mask; TYPE_1__* dev; void* rxbuf_size; struct alx_hw hw; } ;
struct TYPE_2__ {int min_mtu; void* max_mtu; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 void* FUNC_0 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct alx_priv *VAR_23)
{
 struct pci_dev *VAR_24 = VAR_23->hw.pdev;
 struct alx_hw *VAR_25 = &VAR_23->hw;
 int VAR_26;

 VAR_26 = FUNC_1(VAR_23);
 if (VAR_26) {
  FUNC_2(&VAR_24->dev, "unrecognized chip, aborting\n");
  return VAR_26;
 }

 VAR_23->hw.lnk_patch =
  VAR_24->device == VAR_6 &&
  VAR_24->subsystem_vendor == VAR_21 &&
  VAR_24->subsystem_device == 0x0091 &&
  VAR_24->revision == 0;

 VAR_25->smb_timer = 400;
 VAR_25->mtu = VAR_23->dev->mtu;
 VAR_23->rxbuf_size = FUNC_0(VAR_25->mtu);

 VAR_23->dev->min_mtu = 34;
 VAR_23->dev->max_mtu = FUNC_0(VAR_19);
 VAR_23->tx_ringsz = 256;
 VAR_23->rx_ringsz = 512;
 VAR_25->imt = 200;
 VAR_23->int_mask = VAR_10;
 VAR_25->dma_chnl = VAR_25->max_dma_chnl;
 VAR_25->ith_tpd = VAR_23->tx_ringsz / 3;
 VAR_25->link_speed = VAR_22;
 VAR_25->duplex = VAR_20;
 VAR_25->adv_cfg = VAR_5 |
        VAR_4 |
        VAR_3 |
        VAR_1 |
        VAR_2 |
        VAR_0;
 VAR_25->flowctrl = VAR_7 | VAR_8 | VAR_9;

 VAR_25->rx_ctrl = VAR_18 |
        VAR_13 |
        VAR_11 |
        VAR_14 |
        VAR_12 |
        VAR_16 |
        VAR_17 |
        7 << VAR_15;

 return VAR_26;
}
