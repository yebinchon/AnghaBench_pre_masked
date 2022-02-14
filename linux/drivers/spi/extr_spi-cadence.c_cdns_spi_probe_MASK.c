
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_12__ {int of_node; } ;
struct spi_master {int use_gpio_descriptors; int auto_runtime_pm; int mode_bits; int max_speed_hz; int bits_per_word_mask; int set_cs; int unprepare_transfer_hardware; int transfer_one; int prepare_message; int prepare_transfer_hardware; scalar_t__ num_chipselect; TYPE_1__ dev; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct cdns_spi {int speed_hz; void* pclk; void* ref_clk; scalar_t__ is_decoded_cs; void* regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct cdns_spi*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 void* FUNC_8 (TYPE_2__*,char*) ;
 void* FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,struct spi_master*) ;
 int FUNC_11 (int ,char*,scalar_t__*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct spi_master*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 struct spi_master* FUNC_20 (TYPE_2__*,int) ;
 struct cdns_spi* FUNC_21 (struct spi_master*) ;
 int FUNC_22 (struct spi_master*) ;
 int FUNC_23 (struct spi_master*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_12)
{
 int VAR_13 = 0, VAR_14;
 struct spi_master *VAR_15;
 struct cdns_spi *VAR_16;
 u32 VAR_17;

 VAR_15 = FUNC_20(&VAR_12->dev, sizeof(*VAR_16));
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_21(VAR_15);
 VAR_15->dev.of_node = VAR_12->dev.of_node;
 FUNC_13(VAR_12, VAR_15);

 VAR_16->regs = FUNC_9(VAR_12, 0);
 if (FUNC_0(VAR_16->regs)) {
  VAR_13 = FUNC_1(VAR_16->regs);
  goto remove_master;
 }

 VAR_16->pclk = FUNC_8(&VAR_12->dev, "pclk");
 if (FUNC_0(VAR_16->pclk)) {
  FUNC_7(&VAR_12->dev, "pclk clock not found.\n");
  VAR_13 = FUNC_1(VAR_16->pclk);
  goto remove_master;
 }

 VAR_16->ref_clk = FUNC_8(&VAR_12->dev, "ref_clk");
 if (FUNC_0(VAR_16->ref_clk)) {
  FUNC_7(&VAR_12->dev, "ref_clk clock not found.\n");
  VAR_13 = FUNC_1(VAR_16->ref_clk);
  goto remove_master;
 }

 VAR_13 = FUNC_6(VAR_16->pclk);
 if (VAR_13) {
  FUNC_7(&VAR_12->dev, "Unable to enable APB clock.\n");
  goto remove_master;
 }

 VAR_13 = FUNC_6(VAR_16->ref_clk);
 if (VAR_13) {
  FUNC_7(&VAR_12->dev, "Unable to enable device clock.\n");
  goto clk_dis_apb;
 }

 VAR_13 = FUNC_11(VAR_12->dev.of_node, "num-cs", &VAR_17);
 if (VAR_13 < 0)
  VAR_15->num_chipselect = VAR_0;
 else
  VAR_15->num_chipselect = VAR_17;

 VAR_13 = FUNC_11(VAR_12->dev.of_node, "is-decoded-cs",
       &VAR_16->is_decoded_cs);
 if (VAR_13 < 0)
  VAR_16->is_decoded_cs = 0;


 FUNC_3(VAR_16);

 FUNC_16(&VAR_12->dev);
 FUNC_15(&VAR_12->dev);
 FUNC_19(&VAR_12->dev);
 FUNC_17(&VAR_12->dev, VAR_3);

 VAR_14 = FUNC_12(VAR_12, 0);
 if (VAR_14 <= 0) {
  VAR_13 = -VAR_2;
  goto clk_dis_all;
 }

 VAR_13 = FUNC_10(&VAR_12->dev, VAR_14, VAR_9,
          0, VAR_12->name, VAR_15);
 if (VAR_13 != 0) {
  VAR_13 = -VAR_2;
  FUNC_7(&VAR_12->dev, "request_irq failed\n");
  goto clk_dis_all;
 }

 VAR_15->use_gpio_descriptors = 1;
 VAR_15->prepare_transfer_hardware = VAR_7;
 VAR_15->prepare_message = VAR_6;
 VAR_15->transfer_one = VAR_10;
 VAR_15->unprepare_transfer_hardware = VAR_11;
 VAR_15->set_cs = VAR_8;
 VAR_15->auto_runtime_pm = 1;
 VAR_15->mode_bits = VAR_5 | VAR_4;


 VAR_15->max_speed_hz = FUNC_5(VAR_16->ref_clk) / 4;
 VAR_16->speed_hz = VAR_15->max_speed_hz;

 VAR_15->bits_per_word_mask = FUNC_2(8);

 VAR_13 = FUNC_23(VAR_15);
 if (VAR_13) {
  FUNC_7(&VAR_12->dev, "spi_register_master failed\n");
  goto clk_dis_all;
 }

 return VAR_13;

clk_dis_all:
 FUNC_18(&VAR_12->dev);
 FUNC_14(&VAR_12->dev);
 FUNC_4(VAR_16->ref_clk);
clk_dis_apb:
 FUNC_4(VAR_16->pclk);
remove_master:
 FUNC_22(VAR_15);
 return VAR_13;
}
