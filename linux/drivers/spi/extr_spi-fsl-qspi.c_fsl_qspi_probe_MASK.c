
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_controller {int mode_bits; int bus_num; int num_chipselect; TYPE_1__ dev; int * mem_ops; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct fsl_qspi {int lock; void* clk; void* clk_en; int memmap_phy; void* ahb_addr; void* iobase; int devtype_data; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (struct device*,int,int ,int ,int ,struct fsl_qspi*) ;
 int FUNC_6 (struct device*,struct spi_controller*) ;
 int FUNC_7 (struct fsl_qspi*) ;
 int FUNC_8 (struct fsl_qspi*) ;
 int FUNC_9 (struct fsl_qspi*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct platform_device*,struct fsl_qspi*) ;
 struct spi_controller* FUNC_16 (struct device*,int) ;
 struct fsl_qspi* FUNC_17 (struct spi_controller*) ;
 int FUNC_18 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_9)
{
 struct spi_controller *VAR_10;
 struct device *VAR_11 = &VAR_9->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct resource *VAR_13;
 struct fsl_qspi *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_16(&VAR_9->dev, sizeof(*VAR_14));
 if (!VAR_10)
  return -VAR_1;

 VAR_10->mode_bits = VAR_3 | VAR_4 |
     VAR_5 | VAR_6;

 VAR_14 = FUNC_17(VAR_10);
 VAR_14->dev = VAR_11;
 VAR_14->devtype_data = FUNC_12(VAR_11);
 if (!VAR_14->devtype_data) {
  VAR_15 = -VAR_0;
  goto err_put_ctrl;
 }

 FUNC_15(VAR_9, VAR_14);


 VAR_13 = FUNC_14(VAR_9, VAR_2, "QuadSPI");
 VAR_14->iobase = FUNC_4(VAR_11, VAR_13);
 if (FUNC_0(VAR_14->iobase)) {
  VAR_15 = FUNC_1(VAR_14->iobase);
  goto err_put_ctrl;
 }

 VAR_13 = FUNC_14(VAR_9, VAR_2,
     "QuadSPI-memory");
 VAR_14->ahb_addr = FUNC_4(VAR_11, VAR_13);
 if (FUNC_0(VAR_14->ahb_addr)) {
  VAR_15 = FUNC_1(VAR_14->ahb_addr);
  goto err_put_ctrl;
 }

 VAR_14->memmap_phy = VAR_13->start;


 VAR_14->clk_en = FUNC_3(VAR_11, "qspi_en");
 if (FUNC_0(VAR_14->clk_en)) {
  VAR_15 = FUNC_1(VAR_14->clk_en);
  goto err_put_ctrl;
 }

 VAR_14->clk = FUNC_3(VAR_11, "qspi");
 if (FUNC_0(VAR_14->clk)) {
  VAR_15 = FUNC_1(VAR_14->clk);
  goto err_put_ctrl;
 }

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_11, "can not enable the clock\n");
  goto err_put_ctrl;
 }


 VAR_15 = FUNC_13(VAR_9, 0);
 if (VAR_15 < 0)
  goto err_disable_clk;

 VAR_15 = FUNC_5(VAR_11, VAR_15,
   VAR_7, 0, VAR_9->name, VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_11, "failed to request irq: %d\n", VAR_15);
  goto err_disable_clk;
 }

 FUNC_11(&VAR_14->lock);

 VAR_10->bus_num = -1;
 VAR_10->num_chipselect = 4;
 VAR_10->mem_ops = &VAR_8;

 FUNC_9(VAR_14);

 VAR_10->dev.of_node = VAR_12;

 VAR_15 = FUNC_6(VAR_11, VAR_10);
 if (VAR_15)
  goto err_destroy_mutex;

 return 0;

err_destroy_mutex:
 FUNC_10(&VAR_14->lock);

err_disable_clk:
 FUNC_7(VAR_14);

err_put_ctrl:
 FUNC_18(VAR_10);

 FUNC_2(VAR_11, "Freescale QuadSPI probe failed\n");
 return VAR_15;
}
