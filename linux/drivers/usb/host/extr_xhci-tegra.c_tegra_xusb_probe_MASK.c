
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_28__ ;
typedef struct TYPE_37__ TYPE_21__ ;
typedef struct TYPE_36__ TYPE_1__ ;


struct xhci_hcd {TYPE_3__* shared_hcd; } ;
struct tegra_xusb_mbox_msg {scalar_t__ data; int cmd; } ;
struct tegra_xusb_fw_header {int dummy; } ;
struct tegra_xusb {scalar_t__ xhci_irq; scalar_t__ mbox_irq; unsigned int num_phys; struct phy* padctl; TYPE_3__* hcd; int lock; struct phy* regs; TYPE_6__* dev; struct phy** phys; TYPE_21__* soc; TYPE_28__* supplies; struct phy* host_rst; struct phy* host_clk; struct phy* ss_rst; struct phy* ss_clk; struct phy* pll_e; struct phy* clk_m; struct phy* pll_u_480m; struct phy* fs_src_clk; struct phy* hs_src_clk; struct phy* ss_src_clk; struct phy* falcon_clk; struct phy* ipfs_base; struct phy* fpci_base; } ;
struct resource {int start; } ;
struct TYPE_41__ {int of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct phy {int dummy; } ;
typedef int prop ;
struct TYPE_39__ {int controller; } ;
struct TYPE_40__ {TYPE_2__ self; int rsrc_len; int rsrc_start; struct phy* regs; } ;
struct TYPE_38__ {int supply; } ;
struct TYPE_37__ {unsigned int num_supplies; unsigned int num_types; TYPE_1__* phy_types; int * supply_names; scalar_t__ has_ipfs; } ;
struct TYPE_36__ {unsigned int num; char* name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct phy*) ;
 int VAR_4 ;
 int FUNC_3 (struct phy*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_6__*,char*,...) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (TYPE_6__*,char*) ;
 void* FUNC_8 (TYPE_6__*,struct resource*) ;
 void* FUNC_9 (TYPE_6__*,unsigned int,int,int ) ;
 struct tegra_xusb* FUNC_10 (TYPE_6__*,int,int ) ;
 struct phy* FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (TYPE_6__*,unsigned int,TYPE_28__*) ;
 int FUNC_13 (TYPE_6__*,int,int ,int ,int ,int ,struct tegra_xusb*) ;
 void* FUNC_14 (TYPE_6__*,char*) ;
 int FUNC_15 (TYPE_6__*,int ) ;
 struct xhci_hcd* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 TYPE_21__* FUNC_20 (TYPE_6__*) ;
 int FUNC_21 (int ,char*) ;
 void* FUNC_22 (struct platform_device*,int) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int) ;
 int FUNC_24 (struct platform_device*,struct tegra_xusb*) ;
 int FUNC_25 (TYPE_6__*) ;
 int FUNC_26 (TYPE_6__*) ;
 scalar_t__ FUNC_27 (TYPE_6__*) ;
 int FUNC_28 (TYPE_6__*) ;
 int FUNC_29 (TYPE_6__*) ;
 int FUNC_30 (struct resource*) ;
 int FUNC_31 (char*,int,char*,char*,unsigned int) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,struct phy*,struct phy*) ;
 int VAR_7 ;
 int FUNC_34 (struct tegra_xusb*,struct resource*) ;
 int FUNC_35 (struct tegra_xusb*) ;
 int VAR_8 ;
 int FUNC_36 (struct tegra_xusb*,struct tegra_xusb_mbox_msg*) ;
 int VAR_9 ;
 struct phy* FUNC_37 (TYPE_6__*) ;
 int FUNC_38 (struct phy*) ;
 int FUNC_39 (TYPE_6__*,struct tegra_xusb*) ;
 int FUNC_40 (TYPE_6__*,struct tegra_xusb*) ;
 int FUNC_41 (TYPE_6__*) ;
 int FUNC_42 (TYPE_6__*) ;
 int FUNC_43 (TYPE_3__*,int,int ) ;
 TYPE_3__* FUNC_44 (int *,TYPE_6__*,int ) ;
 TYPE_3__* FUNC_45 (int *,TYPE_6__*,int ,TYPE_3__*) ;
 int FUNC_46 (TYPE_3__*) ;
 int FUNC_47 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_48(struct platform_device *VAR_10)
{
 struct tegra_xusb_mbox_msg VAR_11;
 struct resource *VAR_12, *VAR_13;
 struct tegra_xusb *VAR_14;
 struct xhci_hcd *VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 struct phy *VAR_19;
 int VAR_20;

 FUNC_0(sizeof(struct tegra_xusb_fw_header) != 256);

 VAR_14 = FUNC_10(&VAR_10->dev, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->soc = FUNC_20(&VAR_10->dev);
 FUNC_17(&VAR_14->lock);
 VAR_14->dev = &VAR_10->dev;

 VAR_13 = FUNC_23(VAR_10, VAR_2, 0);
 VAR_14->regs = FUNC_8(&VAR_10->dev, VAR_13);
 if (FUNC_2(VAR_14->regs))
  return FUNC_3(VAR_14->regs);

 VAR_12 = FUNC_23(VAR_10, VAR_2, 1);
 VAR_14->fpci_base = FUNC_8(&VAR_10->dev, VAR_12);
 if (FUNC_2(VAR_14->fpci_base))
  return FUNC_3(VAR_14->fpci_base);

 if (VAR_14->soc->has_ipfs) {
  VAR_12 = FUNC_23(VAR_10, VAR_2, 2);
  VAR_14->ipfs_base = FUNC_8(&VAR_10->dev, VAR_12);
  if (FUNC_2(VAR_14->ipfs_base))
   return FUNC_3(VAR_14->ipfs_base);
 }

 VAR_14->xhci_irq = FUNC_22(VAR_10, 0);
 if (VAR_14->xhci_irq < 0)
  return VAR_14->xhci_irq;

 VAR_14->mbox_irq = FUNC_22(VAR_10, 1);
 if (VAR_14->mbox_irq < 0)
  return VAR_14->mbox_irq;

 VAR_14->padctl = FUNC_37(&VAR_10->dev);
 if (FUNC_2(VAR_14->padctl))
  return FUNC_3(VAR_14->padctl);

 VAR_14->host_clk = FUNC_7(&VAR_10->dev, "xusb_host");
 if (FUNC_2(VAR_14->host_clk)) {
  VAR_20 = FUNC_3(VAR_14->host_clk);
  FUNC_4(&VAR_10->dev, "failed to get xusb_host: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->falcon_clk = FUNC_7(&VAR_10->dev, "xusb_falcon_src");
 if (FUNC_2(VAR_14->falcon_clk)) {
  VAR_20 = FUNC_3(VAR_14->falcon_clk);
  FUNC_4(&VAR_10->dev, "failed to get xusb_falcon_src: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->ss_clk = FUNC_7(&VAR_10->dev, "xusb_ss");
 if (FUNC_2(VAR_14->ss_clk)) {
  VAR_20 = FUNC_3(VAR_14->ss_clk);
  FUNC_4(&VAR_10->dev, "failed to get xusb_ss: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->ss_src_clk = FUNC_7(&VAR_10->dev, "xusb_ss_src");
 if (FUNC_2(VAR_14->ss_src_clk)) {
  VAR_20 = FUNC_3(VAR_14->ss_src_clk);
  FUNC_4(&VAR_10->dev, "failed to get xusb_ss_src: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->hs_src_clk = FUNC_7(&VAR_10->dev, "xusb_hs_src");
 if (FUNC_2(VAR_14->hs_src_clk)) {
  VAR_20 = FUNC_3(VAR_14->hs_src_clk);
  FUNC_4(&VAR_10->dev, "failed to get xusb_hs_src: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->fs_src_clk = FUNC_7(&VAR_10->dev, "xusb_fs_src");
 if (FUNC_2(VAR_14->fs_src_clk)) {
  VAR_20 = FUNC_3(VAR_14->fs_src_clk);
  FUNC_4(&VAR_10->dev, "failed to get xusb_fs_src: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->pll_u_480m = FUNC_7(&VAR_10->dev, "pll_u_480m");
 if (FUNC_2(VAR_14->pll_u_480m)) {
  VAR_20 = FUNC_3(VAR_14->pll_u_480m);
  FUNC_4(&VAR_10->dev, "failed to get pll_u_480m: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->clk_m = FUNC_7(&VAR_10->dev, "clk_m");
 if (FUNC_2(VAR_14->clk_m)) {
  VAR_20 = FUNC_3(VAR_14->clk_m);
  FUNC_4(&VAR_10->dev, "failed to get clk_m: %d\n", VAR_20);
  goto put_padctl;
 }

 VAR_14->pll_e = FUNC_7(&VAR_10->dev, "pll_e");
 if (FUNC_2(VAR_14->pll_e)) {
  VAR_20 = FUNC_3(VAR_14->pll_e);
  FUNC_4(&VAR_10->dev, "failed to get pll_e: %d\n", VAR_20);
  goto put_padctl;
 }

 if (!FUNC_21(VAR_10->dev.of_node, "power-domains")) {
  VAR_14->host_rst = FUNC_14(&VAR_10->dev,
        "xusb_host");
  if (FUNC_2(VAR_14->host_rst)) {
   VAR_20 = FUNC_3(VAR_14->host_rst);
   FUNC_4(&VAR_10->dev,
    "failed to get xusb_host reset: %d\n", VAR_20);
   goto put_padctl;
  }

  VAR_14->ss_rst = FUNC_14(&VAR_10->dev, "xusb_ss");
  if (FUNC_2(VAR_14->ss_rst)) {
   VAR_20 = FUNC_3(VAR_14->ss_rst);
   FUNC_4(&VAR_10->dev, "failed to get xusb_ss reset: %d\n",
    VAR_20);
   goto put_padctl;
  }

  VAR_20 = FUNC_33(VAR_5,
       VAR_14->ss_clk,
       VAR_14->ss_rst);
  if (VAR_20) {
   FUNC_4(&VAR_10->dev,
    "failed to enable XUSBA domain: %d\n", VAR_20);
   goto put_padctl;
  }

  VAR_20 = FUNC_33(VAR_6,
       VAR_14->host_clk,
       VAR_14->host_rst);
  if (VAR_20) {
   FUNC_32(VAR_5);
   FUNC_4(&VAR_10->dev,
    "failed to enable XUSBC domain: %d\n", VAR_20);
   goto put_padctl;
  }
 } else {
  VAR_20 = FUNC_39(&VAR_10->dev, VAR_14);
  if (VAR_20)
   goto put_powerdomains;
 }

 VAR_14->supplies = FUNC_9(&VAR_10->dev, VAR_14->soc->num_supplies,
           sizeof(*VAR_14->supplies), VAR_1);
 if (!VAR_14->supplies) {
  VAR_20 = -VAR_0;
  goto put_powerdomains;
 }

 for (VAR_16 = 0; VAR_16 < VAR_14->soc->num_supplies; VAR_16++)
  VAR_14->supplies[VAR_16].supply = VAR_14->soc->supply_names[VAR_16];

 VAR_20 = FUNC_12(&VAR_10->dev, VAR_14->soc->num_supplies,
          VAR_14->supplies);
 if (VAR_20) {
  FUNC_4(&VAR_10->dev, "failed to get regulators: %d\n", VAR_20);
  goto put_powerdomains;
 }

 for (VAR_16 = 0; VAR_16 < VAR_14->soc->num_types; VAR_16++)
  VAR_14->num_phys += VAR_14->soc->phy_types[VAR_16].num;

 VAR_14->phys = FUNC_9(&VAR_10->dev, VAR_14->num_phys,
       sizeof(*VAR_14->phys), VAR_1);
 if (!VAR_14->phys) {
  VAR_20 = -VAR_0;
  goto put_powerdomains;
 }

 for (VAR_16 = 0, VAR_18 = 0; VAR_16 < VAR_14->soc->num_types; VAR_16++) {
  char VAR_21[8];

  for (VAR_17 = 0; VAR_17 < VAR_14->soc->phy_types[VAR_16].num; VAR_17++) {
   FUNC_31(VAR_21, sizeof(VAR_21), "%s-%d",
     VAR_14->soc->phy_types[VAR_16].name, VAR_17);

   VAR_19 = FUNC_11(&VAR_10->dev, VAR_21);
   if (FUNC_2(VAR_19)) {
    FUNC_4(&VAR_10->dev,
     "failed to get PHY %s: %ld\n", VAR_21,
     FUNC_3(VAR_19));
    VAR_20 = FUNC_3(VAR_19);
    goto put_powerdomains;
   }

   VAR_14->phys[VAR_18++] = VAR_19;
  }
 }

 VAR_14->hcd = FUNC_44(&VAR_7, &VAR_10->dev,
        FUNC_5(&VAR_10->dev));
 if (!VAR_14->hcd) {
  VAR_20 = -VAR_0;
  goto put_powerdomains;
 }





 FUNC_24(VAR_10, VAR_14);

 FUNC_26(&VAR_10->dev);
 if (FUNC_27(&VAR_10->dev))
  VAR_20 = FUNC_28(&VAR_10->dev);
 else
  VAR_20 = FUNC_41(&VAR_10->dev);

 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to enable device: %d\n", VAR_20);
  goto disable_rpm;
 }

 FUNC_34(VAR_14, VAR_13);





 VAR_20 = FUNC_15(VAR_14->dev, FUNC_1(40));
 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to set DMA mask: %d\n", VAR_20);
  goto put_rpm;
 }

 VAR_20 = FUNC_35(VAR_14);
 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to load firmware: %d\n", VAR_20);
  goto put_rpm;
 }

 VAR_14->hcd->regs = VAR_14->regs;
 VAR_14->hcd->rsrc_start = VAR_13->start;
 VAR_14->hcd->rsrc_len = FUNC_30(VAR_13);

 VAR_20 = FUNC_43(VAR_14->hcd, VAR_14->xhci_irq, VAR_3);
 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to add USB HCD: %d\n", VAR_20);
  goto put_rpm;
 }

 FUNC_6(VAR_14->hcd->self.controller);

 VAR_15 = FUNC_16(VAR_14->hcd);

 VAR_15->shared_hcd = FUNC_45(&VAR_7,
       &VAR_10->dev,
       FUNC_5(&VAR_10->dev),
       VAR_14->hcd);
 if (!VAR_15->shared_hcd) {
  FUNC_4(&VAR_10->dev, "failed to create shared HCD\n");
  VAR_20 = -VAR_0;
  goto remove_usb2;
 }

 VAR_20 = FUNC_43(VAR_15->shared_hcd, VAR_14->xhci_irq, VAR_3);
 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to add shared HCD: %d\n", VAR_20);
  goto put_usb3;
 }

 FUNC_18(&VAR_14->lock);


 VAR_11.cmd = VAR_4;
 VAR_11.data = 0;

 VAR_20 = FUNC_36(VAR_14, &VAR_11);
 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to enable messages: %d\n", VAR_20);
  FUNC_19(&VAR_14->lock);
  goto remove_usb3;
 }

 FUNC_19(&VAR_14->lock);

 VAR_20 = FUNC_13(&VAR_10->dev, VAR_14->mbox_irq,
     VAR_8,
     VAR_9, 0,
     FUNC_5(&VAR_10->dev), VAR_14);
 if (VAR_20 < 0) {
  FUNC_4(&VAR_10->dev, "failed to request IRQ: %d\n", VAR_20);
  goto remove_usb3;
 }

 return 0;

remove_usb3:
 FUNC_47(VAR_15->shared_hcd);
put_usb3:
 FUNC_46(VAR_15->shared_hcd);
remove_usb2:
 FUNC_47(VAR_14->hcd);
put_rpm:
 if (!FUNC_29(&VAR_10->dev))
  FUNC_42(&VAR_10->dev);
disable_rpm:
 FUNC_25(&VAR_10->dev);
 FUNC_46(VAR_14->hcd);
put_powerdomains:
 if (!FUNC_21(VAR_10->dev.of_node, "power-domains")) {
  FUNC_32(VAR_6);
  FUNC_32(VAR_5);
 } else {
  FUNC_40(&VAR_10->dev, VAR_14);
 }
put_padctl:
 FUNC_38(VAR_14->padctl);
 return VAR_20;
}
