
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zynq_qspi {scalar_t__ irq; void* pclk; void* refclk; int data_completion; void* regs; struct device* dev; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_controller {int mode_bits; int max_speed_hz; TYPE_1__ dev; int setup; int * mem_ops; int num_chipselect; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,scalar_t__,int ,int ,int ,struct zynq_qspi*) ;
 int FUNC_9 (struct device*,struct spi_controller*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct zynq_qspi*) ;
 struct spi_controller* FUNC_14 (struct device*,int) ;
 struct zynq_qspi* FUNC_15 (struct spi_controller*) ;
 int FUNC_16 (struct spi_controller*) ;
 int FUNC_17 (struct zynq_qspi*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 int VAR_11 = 0;
 struct spi_controller *VAR_12;
 struct device *VAR_13 = &VAR_10->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct zynq_qspi *VAR_15;
 u32 VAR_16;

 VAR_12 = FUNC_14(&VAR_10->dev, sizeof(*VAR_15));
 if (!VAR_12)
  return -VAR_0;

 VAR_15 = FUNC_15(VAR_12);
 VAR_15->dev = VAR_13;
 FUNC_13(VAR_10, VAR_15);
 VAR_15->regs = FUNC_7(VAR_10, 0);
 if (FUNC_0(VAR_15->regs)) {
  VAR_11 = FUNC_1(VAR_15->regs);
  goto remove_master;
 }

 VAR_15->pclk = FUNC_6(&VAR_10->dev, "pclk");
 if (FUNC_0(VAR_15->pclk)) {
  FUNC_5(&VAR_10->dev, "pclk clock not found.\n");
  VAR_11 = FUNC_1(VAR_15->pclk);
  goto remove_master;
 }

 FUNC_10(&VAR_15->data_completion);

 VAR_15->refclk = FUNC_6(&VAR_10->dev, "ref_clk");
 if (FUNC_0(VAR_15->refclk)) {
  FUNC_5(&VAR_10->dev, "ref_clk clock not found.\n");
  VAR_11 = FUNC_1(VAR_15->refclk);
  goto remove_master;
 }

 VAR_11 = FUNC_4(VAR_15->pclk);
 if (VAR_11) {
  FUNC_5(&VAR_10->dev, "Unable to enable APB clock.\n");
  goto remove_master;
 }

 VAR_11 = FUNC_4(VAR_15->refclk);
 if (VAR_11) {
  FUNC_5(&VAR_10->dev, "Unable to enable device clock.\n");
  goto clk_dis_pclk;
 }


 FUNC_17(VAR_15);

 VAR_15->irq = FUNC_12(VAR_10, 0);
 if (VAR_15->irq <= 0) {
  VAR_11 = -VAR_1;
  goto remove_master;
 }
 VAR_11 = FUNC_8(&VAR_10->dev, VAR_15->irq, VAR_7,
          0, VAR_10->name, VAR_15);
 if (VAR_11 != 0) {
  VAR_11 = -VAR_1;
  FUNC_5(&VAR_10->dev, "request_irq failed\n");
  goto remove_master;
 }

 VAR_11 = FUNC_11(VAR_14, "num-cs",
       &VAR_16);
 if (VAR_11 < 0)
  VAR_12->num_chipselect = VAR_6;
 else
  VAR_12->num_chipselect = VAR_16;

 VAR_12->mode_bits = VAR_2 | VAR_3 |
       VAR_4 | VAR_5;
 VAR_12->mem_ops = &VAR_8;
 VAR_12->setup = VAR_9;
 VAR_12->max_speed_hz = FUNC_3(VAR_15->refclk) / 2;
 VAR_12->dev.of_node = VAR_14;
 VAR_11 = FUNC_9(&VAR_10->dev, VAR_12);
 if (VAR_11) {
  FUNC_5(&VAR_10->dev, "spi_register_master failed\n");
  goto clk_dis_all;
 }

 return VAR_11;

clk_dis_all:
 FUNC_2(VAR_15->refclk);
clk_dis_pclk:
 FUNC_2(VAR_15->pclk);
remove_master:
 FUNC_16(VAR_12);

 return VAR_11;
}
