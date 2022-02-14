
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct ssb_sprom {int boardflags_lo; int et2phyaddr; int et1phyaddr; int et0phyaddr; int * et2mac; int * et1mac; int * et0mac; } ;
struct phy_device {int dev_flags; TYPE_1__* drv; } ;
struct mii_bus {int dummy; } ;
struct TYPE_13__ {scalar_t__ cmn; struct bcma_device* core; } ;
struct bgmac {int has_robosw; struct mii_bus* mii_bus; int phy_connect; int cmn_maskset32; int get_bus_clock; int cco_ctl_maskset; int clk_enable; int clk_enabled; int idm_write; int idm_read; int write; int read; int feature_flags; TYPE_7__* dev; int phyaddr; TYPE_4__ bcma; TYPE_2__* net_dev; int irq; int dma_dev; } ;
struct TYPE_12__ {scalar_t__ id; int rev; } ;
struct bcma_device {int core_unit; TYPE_3__ id; TYPE_6__* bus; int irq; int dma_dev; int dev; } ;
struct bcma_chipinfo {int id; int pkg; } ;
struct TYPE_16__ {scalar_t__ of_node; } ;
struct TYPE_14__ {scalar_t__ core; } ;
struct TYPE_15__ {scalar_t__ hosttype; TYPE_5__ drv_gmac_cmn; struct ssb_sprom sprom; struct bcma_chipinfo chipinfo; } ;
struct TYPE_11__ {int dev_addr; } ;
struct TYPE_10__ {int phy_id; int phy_id_mask; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (struct mii_bus*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (struct mii_bus*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 struct mii_bus* FUNC_3 (struct bgmac*) ;
 int FUNC_4 (struct mii_bus*) ;
 int VAR_44 ;
 int FUNC_5 (struct bcma_device*,struct bgmac*) ;
 struct bgmac* FUNC_6 (int *) ;
 int FUNC_7 (struct bgmac*) ;
 int FUNC_8 (struct bcma_device*) ;
 int VAR_45 ;
 int FUNC_9 (TYPE_7__*,char*,...) ;
 int FUNC_10 (TYPE_7__*,char*,int ,char*) ;
 int FUNC_11 (TYPE_7__*,char*) ;
 int FUNC_12 (int ,int const*) ;
 struct phy_device* FUNC_13 (struct mii_bus*,int ) ;
 int * FUNC_14 (scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct bcma_device *VAR_46)
{
 struct bcma_chipinfo *VAR_47 = &VAR_46->bus->chipinfo;
 struct ssb_sprom *VAR_48 = &VAR_46->bus->sprom;
 struct mii_bus *VAR_49;
 struct bgmac *VAR_50;
 const u8 *VAR_51 = ((void*)0);
 int VAR_52;

 VAR_50 = FUNC_6(&VAR_46->dev);
 if (!VAR_50)
  return -VAR_31;

 VAR_50->bcma.core = VAR_46;
 VAR_50->dma_dev = VAR_46->dma_dev;
 VAR_50->irq = VAR_46->irq;

 FUNC_5(VAR_46, VAR_50);

 if (VAR_50->dev->of_node)
  VAR_51 = FUNC_14(VAR_50->dev->of_node);


 if (FUNC_1(VAR_51)) {
  switch (VAR_46->core_unit) {
  case 0:
   VAR_51 = VAR_48->et0mac;
   break;
  case 1:
   VAR_51 = VAR_48->et1mac;
   break;
  case 2:
   VAR_51 = VAR_48->et2mac;
   break;
  default:
   FUNC_9(VAR_50->dev, "Unsupported core_unit %d\n",
    VAR_46->core_unit);
   VAR_52 = -VAR_32;
   goto err;
  }
 }

 FUNC_12(VAR_50->net_dev->dev_addr, VAR_51);


 if (VAR_46->id.id == VAR_0 &&
     !VAR_46->bus->drv_gmac_cmn.core) {
  FUNC_9(VAR_50->dev, "GMAC CMN core not found (required for BCM4706)\n");
  VAR_52 = -VAR_30;
  goto err;
 }
 VAR_50->bcma.cmn = VAR_46->bus->drv_gmac_cmn.core;

 switch (VAR_46->core_unit) {
 case 0:
  VAR_50->phyaddr = VAR_48->et0phyaddr;
  break;
 case 1:
  VAR_50->phyaddr = VAR_48->et1phyaddr;
  break;
 case 2:
  VAR_50->phyaddr = VAR_48->et2phyaddr;
  break;
 }
 VAR_50->phyaddr &= VAR_28;
 if (VAR_50->phyaddr == VAR_28) {
  FUNC_9(VAR_50->dev, "No PHY found\n");
  VAR_52 = -VAR_30;
  goto err;
 }
 FUNC_10(VAR_50->dev, "Found PHY addr: %d%s\n", VAR_50->phyaddr,
   VAR_50->phyaddr == VAR_29 ? " (NOREGS)" : "");

 if (!FUNC_8(VAR_46) &&
     !(VAR_47->id == 128 && VAR_46->core_unit == 1)) {
  struct phy_device *VAR_53;

  VAR_49 = FUNC_3(VAR_50);
  if (FUNC_0(VAR_49)) {
   VAR_52 = FUNC_2(VAR_49);
   goto err;
  }
  VAR_50->mii_bus = VAR_49;

  VAR_53 = FUNC_13(VAR_50->mii_bus, VAR_50->phyaddr);
  if (VAR_47->id == 128 && VAR_53 &&
      (VAR_53->drv->phy_id & VAR_53->drv->phy_id_mask) == VAR_34)
   VAR_53->dev_flags |= VAR_33;
 }

 if (VAR_46->bus->hosttype == VAR_1) {
  FUNC_9(VAR_50->dev, "PCI setup not implemented\n");
  VAR_52 = -VAR_32;
  goto err1;
 }

 VAR_50->has_robosw = !!(VAR_48->boardflags_lo & VAR_7);
 if (VAR_50->has_robosw)
  FUNC_11(VAR_50->dev, "Support for Roboswitch not implemented\n");

 if (VAR_48->boardflags_lo & VAR_6)
  FUNC_11(VAR_50->dev, "Support for ADMtek ethernet switch not implemented\n");


 switch (VAR_47->id) {

 case 134:
  VAR_50->feature_flags |= VAR_11;

 case 133:
  VAR_50->feature_flags |= VAR_15;
  VAR_50->feature_flags |= VAR_23;
  break;
 case 130:
 case 129:
  VAR_50->feature_flags |= VAR_23;
  VAR_50->feature_flags |= VAR_11;
  VAR_50->feature_flags |= VAR_14;
  VAR_50->feature_flags |= VAR_25;
  if (VAR_47->pkg == VAR_3 ||
      VAR_47->pkg == VAR_2) {
   VAR_50->feature_flags |= VAR_26;
   VAR_50->feature_flags |= VAR_17;
  }
  if (VAR_47->pkg == VAR_5)
   VAR_50->feature_flags |= VAR_24;
  break;
 case 128:
  VAR_50->feature_flags |= VAR_11;
  VAR_50->feature_flags |= VAR_23;
  if (VAR_47->pkg == VAR_4)
   VAR_50->feature_flags |= VAR_17;
  if (VAR_46->core_unit == 0) {
   VAR_50->feature_flags |= VAR_8;
   if (VAR_47->pkg == VAR_4)
    VAR_50->feature_flags |=
     VAR_9;
  } else if (VAR_46->core_unit == 1) {
   VAR_50->feature_flags |= VAR_18;
   VAR_50->feature_flags |= VAR_10;
  }
  break;
 case 132:
  VAR_50->feature_flags |= VAR_23;
  VAR_50->feature_flags |= VAR_11;
  VAR_50->feature_flags |= VAR_14;
  VAR_50->feature_flags |= VAR_25;
  if (VAR_47->pkg == 10) {
   VAR_50->feature_flags |= VAR_26;
   VAR_50->feature_flags |= VAR_17;
  }
  break;

 case 136:
 case 135:
 case 131:
  VAR_50->feature_flags |= VAR_11;
  VAR_50->feature_flags |= VAR_21;
  VAR_50->feature_flags |= VAR_16;
  break;
 default:
  VAR_50->feature_flags |= VAR_11;
  VAR_50->feature_flags |= VAR_23;
 }

 if (!FUNC_8(VAR_46) && VAR_46->id.rev > 2)
  VAR_50->feature_flags |= VAR_19;

 if (VAR_46->id.id == VAR_0) {
  VAR_50->feature_flags |= VAR_13;
  VAR_50->feature_flags |= VAR_20;
 }

 if (VAR_46->id.rev >= 4) {
  VAR_50->feature_flags |= VAR_12;
  VAR_50->feature_flags |= VAR_27;
  VAR_50->feature_flags |= VAR_22;
 }

 VAR_50->read = VAR_42;
 VAR_50->write = VAR_43;
 VAR_50->idm_read = VAR_40;
 VAR_50->idm_write = VAR_41;
 VAR_50->clk_enabled = VAR_37;
 VAR_50->clk_enable = VAR_36;
 VAR_50->cco_ctl_maskset = VAR_35;
 VAR_50->get_bus_clock = VAR_39;
 VAR_50->cmn_maskset32 = VAR_38;
 if (VAR_50->mii_bus)
  VAR_50->phy_connect = VAR_44;
 else
  VAR_50->phy_connect = VAR_45;

 VAR_52 = FUNC_7(VAR_50);
 if (VAR_52)
  goto err1;

 return 0;

err1:
 FUNC_4(VAR_50->mii_bus);
err:
 FUNC_5(VAR_46, ((void*)0));

 return VAR_52;
}
