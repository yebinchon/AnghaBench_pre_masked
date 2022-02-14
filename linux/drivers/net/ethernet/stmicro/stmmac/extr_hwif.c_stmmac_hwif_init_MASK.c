
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stmmac_priv {scalar_t__ synopsys_id; int device; int hwif_quirks; scalar_t__ ioaddr; scalar_t__ mmcaddr; scalar_t__ ptpaddr; struct mac_device_info* hw; TYPE_1__* plat; } ;
struct TYPE_4__ {scalar_t__ mmc_off; scalar_t__ ptp_off; } ;
struct stmmac_hwif_entry {int gmac; int gmac4; int xgmac; scalar_t__ min_id; int (* setup ) (struct stmmac_priv*) ;int quirks; TYPE_2__ regs; scalar_t__ mmc; scalar_t__ tc; scalar_t__ mode; scalar_t__ hwtimestamp; scalar_t__ mac; scalar_t__ dma; scalar_t__ desc; } ;
struct mac_device_info {scalar_t__ mmc; scalar_t__ tc; scalar_t__ mode; scalar_t__ ptp; scalar_t__ mac; scalar_t__ dma; scalar_t__ desc; } ;
struct TYPE_3__ {int has_xgmac; int has_gmac4; int has_gmac; struct mac_device_info* (* setup ) (struct stmmac_priv*) ;} ;


 int FUNC_0 (struct stmmac_hwif_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,scalar_t__,int,int) ;
 struct mac_device_info* FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (struct stmmac_priv*,int ) ;
 struct stmmac_hwif_entry* VAR_9 ;
 struct mac_device_info* FUNC_4 (struct stmmac_priv*) ;
 int FUNC_5 (struct stmmac_priv*) ;

int FUNC_6(struct stmmac_priv *VAR_10)
{
 bool VAR_11 = VAR_10->plat->has_xgmac;
 bool VAR_12 = VAR_10->plat->has_gmac4;
 bool VAR_13 = VAR_10->plat->has_gmac;
 const struct stmmac_hwif_entry *VAR_14;
 struct mac_device_info *VAR_15;
 bool VAR_16 = 1;
 int VAR_17, VAR_18;
 u32 VAR_19;

 if (VAR_13) {
  VAR_19 = FUNC_3(VAR_10, VAR_4);
 } else if (VAR_12 || VAR_11) {
  VAR_19 = FUNC_3(VAR_10, VAR_3);
 } else {
  VAR_19 = 0;
 }


 VAR_10->synopsys_id = VAR_19;


 VAR_10->ptpaddr = VAR_10->ioaddr +
  (VAR_12 ? VAR_8 : VAR_7);
 VAR_10->mmcaddr = VAR_10->ioaddr +
  (VAR_12 ? VAR_6 : VAR_5);


 if (VAR_10->plat->setup) {
  VAR_15 = VAR_10->plat->setup(VAR_10);
  VAR_16 = 0;
 } else {
  VAR_15 = FUNC_2(VAR_10->device, sizeof(*VAR_15), VAR_2);
 }

 if (!VAR_15)
  return -VAR_1;


 for (VAR_17 = FUNC_0(VAR_9) - 1; VAR_17 >= 0; VAR_17--) {
  VAR_14 = &VAR_9[VAR_17];

  if (VAR_13 ^ VAR_14->gmac)
   continue;
  if (VAR_12 ^ VAR_14->gmac4)
   continue;
  if (VAR_11 ^ VAR_14->xgmac)
   continue;

  if (VAR_10->synopsys_id < VAR_14->min_id)
   continue;


  VAR_15->desc = VAR_15->desc ? : VAR_14->desc;
  VAR_15->dma = VAR_15->dma ? : VAR_14->dma;
  VAR_15->mac = VAR_15->mac ? : VAR_14->mac;
  VAR_15->ptp = VAR_15->ptp ? : VAR_14->hwtimestamp;
  VAR_15->mode = VAR_15->mode ? : VAR_14->mode;
  VAR_15->tc = VAR_15->tc ? : VAR_14->tc;
  VAR_15->mmc = VAR_15->mmc ? : VAR_14->mmc;

  VAR_10->hw = VAR_15;
  VAR_10->ptpaddr = VAR_10->ioaddr + VAR_14->regs.ptp_off;
  VAR_10->mmcaddr = VAR_10->ioaddr + VAR_14->regs.mmc_off;


  if (VAR_16) {
   VAR_18 = VAR_14->setup(VAR_10);
   if (VAR_18)
    return VAR_18;
  }


  VAR_10->hwif_quirks = VAR_14->quirks;
  return 0;
 }

 FUNC_1(VAR_10->device, "Failed to find HW IF (id=0x%x, gmac=%d/%d)\n",
   VAR_19, VAR_13, VAR_12);
 return -VAR_0;
}
