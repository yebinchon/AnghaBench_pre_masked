
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int const* nicpm_base; int const* idm_base; int const* base; } ;
struct bgmac {scalar_t__ irq; int feature_flags; int phy_connect; int cmn_maskset32; int get_bus_clock; int cco_ctl_maskset; int clk_enable; int clk_enabled; int idm_write; int idm_read; int write; int read; TYPE_2__ plat; TYPE_1__* net_dev; TYPE_3__* dma_dev; TYPE_3__* dev; } ;
struct TYPE_7__ {int dev_addr; } ;


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
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 struct bgmac* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct bgmac*) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 void* FUNC_6 (TYPE_3__*,struct resource*) ;
 int FUNC_7 (int ,int const*) ;
 int * FUNC_8 (struct device_node*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 int VAR_20 ;
 int FUNC_12 (struct platform_device*,struct bgmac*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_21)
{
 struct device_node *VAR_22 = VAR_21->dev.of_node;
 struct bgmac *VAR_23;
 struct resource *VAR_24;
 const u8 *VAR_25;

 VAR_23 = FUNC_2(&VAR_21->dev);
 if (!VAR_23)
  return -VAR_8;

 FUNC_12(VAR_21, VAR_23);


 VAR_23->feature_flags |= VAR_0;
 VAR_23->feature_flags |= VAR_4;
 VAR_23->feature_flags |= VAR_1;
 VAR_23->feature_flags |= VAR_6;
 VAR_23->feature_flags |= VAR_5;
 VAR_23->feature_flags |= VAR_3;

 VAR_23->dev = &VAR_21->dev;
 VAR_23->dma_dev = &VAR_21->dev;

 VAR_25 = FUNC_8(VAR_22);
 if (!FUNC_0(VAR_25))
  FUNC_7(VAR_23->net_dev->dev_addr, VAR_25);
 else
  FUNC_5(&VAR_21->dev, "MAC address not present in device tree\n");

 VAR_23->irq = FUNC_10(VAR_21, 0);
 if (VAR_23->irq < 0)
  return VAR_23->irq;

 VAR_24 = FUNC_11(VAR_21, VAR_9, "amac_base");
 if (!VAR_24) {
  FUNC_4(&VAR_21->dev, "Unable to obtain base resource\n");
  return -VAR_7;
 }

 VAR_23->plat.base = FUNC_6(&VAR_21->dev, VAR_24);
 if (FUNC_0(VAR_23->plat.base))
  return FUNC_1(VAR_23->plat.base);

 VAR_24 = FUNC_11(VAR_21, VAR_9, "idm_base");
 if (VAR_24) {
  VAR_23->plat.idm_base = FUNC_6(&VAR_21->dev, VAR_24);
  if (FUNC_0(VAR_23->plat.idm_base))
   return FUNC_1(VAR_23->plat.idm_base);
  VAR_23->feature_flags &= ~VAR_3;
 }

 VAR_24 = FUNC_11(VAR_21, VAR_9, "nicpm_base");
 if (VAR_24) {
  VAR_23->plat.nicpm_base = FUNC_6(&VAR_21->dev,
              VAR_24);
  if (FUNC_0(VAR_23->plat.nicpm_base))
   return FUNC_1(VAR_23->plat.nicpm_base);
 }

 VAR_23->read = VAR_18;
 VAR_23->write = VAR_19;
 VAR_23->idm_read = VAR_16;
 VAR_23->idm_write = VAR_17;
 VAR_23->clk_enabled = VAR_13;
 VAR_23->clk_enable = VAR_12;
 VAR_23->cco_ctl_maskset = VAR_11;
 VAR_23->get_bus_clock = VAR_15;
 VAR_23->cmn_maskset32 = VAR_14;
 if (FUNC_9(VAR_22, "phy-handle", 0)) {
  VAR_23->phy_connect = VAR_20;
 } else {
  VAR_23->phy_connect = VAR_10;
  VAR_23->feature_flags |= VAR_2;
 }

 return FUNC_3(VAR_23);
}
