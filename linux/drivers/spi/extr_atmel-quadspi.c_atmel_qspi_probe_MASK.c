
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct spi_controller {int mode_bits; int bus_num; int num_chipselect; TYPE_1__ dev; int * mem_ops; int setup; } ;
struct resource {int dummy; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct atmel_qspi {void* pclk; void* qspick; TYPE_3__* caps; void* mem; void* regs; struct platform_device* pdev; int cmd_completion; } ;
struct TYPE_12__ {scalar_t__ has_qspick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct atmel_qspi*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (TYPE_2__*,char*) ;
 void* FUNC_8 (TYPE_2__*,struct resource*) ;
 int FUNC_9 (TYPE_2__*,int,int ,int ,int ,struct atmel_qspi*) ;
 int FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,char*) ;
 int FUNC_14 (struct platform_device*,struct spi_controller*) ;
 struct spi_controller* FUNC_15 (TYPE_2__*,int) ;
 struct atmel_qspi* FUNC_16 (struct spi_controller*) ;
 int FUNC_17 (struct spi_controller*) ;
 int FUNC_18 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct spi_controller *VAR_11;
 struct atmel_qspi *VAR_12;
 struct resource *VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_11 = FUNC_15(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_1;

 VAR_11->mode_bits = VAR_3 | VAR_4 | VAR_5 | VAR_6;
 VAR_11->setup = VAR_9;
 VAR_11->bus_num = -1;
 VAR_11->mem_ops = &VAR_8;
 VAR_11->num_chipselect = 1;
 VAR_11->dev.of_node = VAR_10->dev.of_node;
 FUNC_14(VAR_10, VAR_11);

 VAR_12 = FUNC_16(VAR_11);

 FUNC_10(&VAR_12->cmd_completion);
 VAR_12->pdev = VAR_10;


 VAR_13 = FUNC_13(VAR_10, VAR_2, "qspi_base");
 VAR_12->regs = FUNC_8(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_12->regs)) {
  FUNC_5(&VAR_10->dev, "missing registers\n");
  VAR_15 = FUNC_1(VAR_12->regs);
  goto exit;
 }


 VAR_13 = FUNC_13(VAR_10, VAR_2, "qspi_mmap");
 VAR_12->mem = FUNC_8(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_12->mem)) {
  FUNC_5(&VAR_10->dev, "missing AHB memory\n");
  VAR_15 = FUNC_1(VAR_12->mem);
  goto exit;
 }


 VAR_12->pclk = FUNC_7(&VAR_10->dev, "pclk");
 if (FUNC_0(VAR_12->pclk))
  VAR_12->pclk = FUNC_7(&VAR_10->dev, ((void*)0));

 if (FUNC_0(VAR_12->pclk)) {
  FUNC_5(&VAR_10->dev, "missing peripheral clock\n");
  VAR_15 = FUNC_1(VAR_12->pclk);
  goto exit;
 }


 VAR_15 = FUNC_4(VAR_12->pclk);
 if (VAR_15) {
  FUNC_5(&VAR_10->dev, "failed to enable the peripheral clock\n");
  goto exit;
 }

 VAR_12->caps = FUNC_11(&VAR_10->dev);
 if (!VAR_12->caps) {
  FUNC_5(&VAR_10->dev, "Could not retrieve QSPI caps\n");
  VAR_15 = -VAR_0;
  goto exit;
 }

 if (VAR_12->caps->has_qspick) {

  VAR_12->qspick = FUNC_7(&VAR_10->dev, "qspick");
  if (FUNC_0(VAR_12->qspick)) {
   FUNC_5(&VAR_10->dev, "missing system clock\n");
   VAR_15 = FUNC_1(VAR_12->qspick);
   goto disable_pclk;
  }


  VAR_15 = FUNC_4(VAR_12->qspick);
  if (VAR_15) {
   FUNC_5(&VAR_10->dev,
    "failed to enable the QSPI system clock\n");
   goto disable_pclk;
  }
 }


 VAR_14 = FUNC_12(VAR_10, 0);
 if (VAR_14 < 0) {
  VAR_15 = VAR_14;
  goto disable_qspick;
 }
 VAR_15 = FUNC_9(&VAR_10->dev, VAR_14, VAR_7,
          0, FUNC_6(&VAR_10->dev), VAR_12);
 if (VAR_15)
  goto disable_qspick;

 FUNC_2(VAR_12);

 VAR_15 = FUNC_18(VAR_11);
 if (VAR_15)
  goto disable_qspick;

 return 0;

disable_qspick:
 FUNC_3(VAR_12->qspick);
disable_pclk:
 FUNC_3(VAR_12->pclk);
exit:
 FUNC_17(VAR_11);

 return VAR_15;
}
