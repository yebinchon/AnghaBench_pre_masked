
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct spi_master {int num_chipselect; int mode_bits; TYPE_2__ dev; int max_speed_hz; int bits_per_word_mask; int transfer_one_message; } ;
struct pci_device_id {int dummy; } ;
struct device {int of_node; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_3__ {int config; int status; int tx; int data; } ;
struct octeon_spi {int clk; scalar_t__ sys_freq; TYPE_1__ regs; int register_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,scalar_t__) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,struct spi_master*) ;
 int VAR_10 ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,struct spi_master*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ,int ) ;
 struct spi_master* FUNC_14 (struct device*,int) ;
 struct octeon_spi* FUNC_15 (struct spi_master*) ;
 int FUNC_16 (struct spi_master*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_11,
         const struct pci_device_id *VAR_12)
{
 struct device *VAR_13 = &VAR_11->dev;
 struct spi_master *VAR_14;
 struct octeon_spi *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_14(VAR_13, sizeof(struct octeon_spi));
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_15(VAR_14);

 VAR_16 = FUNC_12(VAR_11);
 if (VAR_16)
  goto error;

 VAR_16 = FUNC_9(VAR_11, VAR_0);
 if (VAR_16)
  goto error;

 VAR_15->register_base = FUNC_13(VAR_11, 0, FUNC_10(VAR_11, 0));
 if (!VAR_15->register_base) {
  VAR_16 = -VAR_1;
  goto error;
 }

 VAR_15->regs.config = 0x1000;
 VAR_15->regs.status = 0x1008;
 VAR_15->regs.tx = 0x1010;
 VAR_15->regs.data = 0x1080;

 VAR_15->clk = FUNC_7(VAR_13, ((void*)0));
 if (FUNC_0(VAR_15->clk)) {
  VAR_16 = FUNC_1(VAR_15->clk);
  goto error;
 }

 VAR_16 = FUNC_5(VAR_15->clk);
 if (VAR_16)
  goto error;

 VAR_15->sys_freq = FUNC_4(VAR_15->clk);
 if (!VAR_15->sys_freq)
  VAR_15->sys_freq = VAR_9;
 FUNC_6(VAR_13, "Set system clock to %u\n", VAR_15->sys_freq);

 VAR_14->num_chipselect = 4;
 VAR_14->mode_bits = VAR_5 | VAR_6 | VAR_7 |
       VAR_8 | VAR_4;
 VAR_14->transfer_one_message = VAR_10;
 VAR_14->bits_per_word_mask = FUNC_2(8);
 VAR_14->max_speed_hz = VAR_3;
 VAR_14->dev.of_node = VAR_11->dev.of_node;

 FUNC_11(VAR_11, VAR_14);

 VAR_16 = FUNC_8(VAR_13, VAR_14);
 if (VAR_16)
  goto error;

 return 0;

error:
 FUNC_3(VAR_15->clk);
 FUNC_16(VAR_14);
 return VAR_16;
}
