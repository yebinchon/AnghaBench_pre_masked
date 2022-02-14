
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_controller {int mode_bits; int bus_num; TYPE_1__ dev; int * mem_ops; int num_chipselect; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct nxp_fspi {int lock; void* clk; void* clk_en; int memmap_phy_size; int memmap_phy; void* ahb_addr; void* iobase; int devtype_data; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (struct device*,int,int ,int ,int ,struct nxp_fspi*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nxp_fspi*) ;
 int FUNC_9 (struct nxp_fspi*) ;
 int FUNC_10 (struct nxp_fspi*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,char*) ;
 int FUNC_14 (struct platform_device*,struct nxp_fspi*) ;
 int FUNC_15 (struct resource*) ;
 struct spi_controller* FUNC_16 (struct device*,int) ;
 struct nxp_fspi* FUNC_17 (struct spi_controller*) ;
 int FUNC_18 (struct spi_controller*) ;
 int FUNC_19 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_12)
{
 struct spi_controller *VAR_13;
 struct device *VAR_14 = &VAR_12->dev;
 struct device_node *VAR_15 = VAR_14->of_node;
 struct resource *VAR_16;
 struct nxp_fspi *VAR_17;
 int VAR_18;

 VAR_13 = FUNC_16(&VAR_12->dev, sizeof(*VAR_17));
 if (!VAR_13)
  return -VAR_1;

 VAR_13->mode_bits = VAR_4 | VAR_6 | VAR_5 |
     VAR_7 | VAR_9 | VAR_8;

 VAR_17 = FUNC_17(VAR_13);
 VAR_17->dev = VAR_14;
 VAR_17->devtype_data = FUNC_11(VAR_14);
 if (!VAR_17->devtype_data) {
  VAR_18 = -VAR_0;
  goto err_put_ctrl;
 }

 FUNC_14(VAR_12, VAR_17);


 VAR_16 = FUNC_13(VAR_12, VAR_2, "fspi_base");
 VAR_17->iobase = FUNC_4(VAR_14, VAR_16);
 if (FUNC_0(VAR_17->iobase)) {
  VAR_18 = FUNC_1(VAR_17->iobase);
  goto err_put_ctrl;
 }


 VAR_16 = FUNC_13(VAR_12, VAR_2, "fspi_mmap");
 VAR_17->ahb_addr = FUNC_4(VAR_14, VAR_16);
 if (FUNC_0(VAR_17->ahb_addr)) {
  VAR_18 = FUNC_1(VAR_17->ahb_addr);
  goto err_put_ctrl;
 }


 VAR_17->memmap_phy = VAR_16->start;
 VAR_17->memmap_phy_size = FUNC_15(VAR_16);


 VAR_17->clk_en = FUNC_3(VAR_14, "fspi_en");
 if (FUNC_0(VAR_17->clk_en)) {
  VAR_18 = FUNC_1(VAR_17->clk_en);
  goto err_put_ctrl;
 }

 VAR_17->clk = FUNC_3(VAR_14, "fspi");
 if (FUNC_0(VAR_17->clk)) {
  VAR_18 = FUNC_1(VAR_17->clk);
  goto err_put_ctrl;
 }

 VAR_18 = FUNC_9(VAR_17);
 if (VAR_18) {
  FUNC_2(VAR_14, "can not enable the clock\n");
  goto err_put_ctrl;
 }


 VAR_18 = FUNC_12(VAR_12, 0);
 if (VAR_18 < 0)
  goto err_disable_clk;

 VAR_18 = FUNC_5(VAR_14, VAR_18,
   VAR_10, 0, VAR_12->name, VAR_17);
 if (VAR_18) {
  FUNC_2(VAR_14, "failed to request irq: %d\n", VAR_18);
  goto err_disable_clk;
 }

 FUNC_7(&VAR_17->lock);

 VAR_13->bus_num = -1;
 VAR_13->num_chipselect = VAR_3;
 VAR_13->mem_ops = &VAR_11;

 FUNC_10(VAR_17);

 VAR_13->dev.of_node = VAR_15;

 VAR_18 = FUNC_19(VAR_13);
 if (VAR_18)
  goto err_destroy_mutex;

 return 0;

err_destroy_mutex:
 FUNC_6(&VAR_17->lock);

err_disable_clk:
 FUNC_8(VAR_17);

err_put_ctrl:
 FUNC_18(VAR_13);

 FUNC_2(VAR_14, "NXP FSPI probe failed\n");
 return VAR_18;
}
