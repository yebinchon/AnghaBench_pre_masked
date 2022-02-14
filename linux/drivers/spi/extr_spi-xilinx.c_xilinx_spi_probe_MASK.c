
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct xspi_platform_data {int num_chipselect; int bits_per_word; scalar_t__ num_devices; scalar_t__ devices; } ;
struct TYPE_11__ {int txrx_bufs; int setup_transfer; int chipselect; struct spi_master* master; } ;
struct xilinx_spi {int cs_inactive; int bytes_per_word; int irq; scalar_t__ regs; TYPE_2__ bitbang; int buffer_size; int (* write_fn ) (int ,scalar_t__) ;int (* read_fn ) (scalar_t__) ;int done; } ;
struct TYPE_10__ {int of_node; } ;
struct spi_master {int mode_bits; int num_chipselect; int bits_per_word_mask; TYPE_1__ dev; int bus_num; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct xspi_platform_data* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,unsigned long long,scalar_t__,int) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,struct resource*) ;
 int FUNC_8 (TYPE_3__*,int,int ,int ,int ,struct xilinx_spi*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_14 (TYPE_3__*,int) ;
 int FUNC_15 (TYPE_2__*) ;
 struct xilinx_spi* FUNC_16 (struct spi_master*) ;
 int FUNC_17 (struct spi_master*) ;
 int FUNC_18 (struct spi_master*,scalar_t__) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_21 (struct xilinx_spi*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_22 (struct xilinx_spi*) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (int ,scalar_t__) ;
 int FUNC_26 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_16)
{
 struct xilinx_spi *VAR_17;
 struct xspi_platform_data *VAR_18;
 struct resource *VAR_19;
 int VAR_20, VAR_21 = 0, VAR_22 = 8;
 struct spi_master *VAR_23;
 u32 VAR_24;
 u8 VAR_25;

 VAR_18 = FUNC_4(&VAR_16->dev);
 if (VAR_18) {
  VAR_21 = VAR_18->num_chipselect;
  VAR_22 = VAR_18->bits_per_word;
 } else {
  FUNC_10(VAR_16->dev.of_node, "xlnx,num-ss-bits",
       &VAR_21);
 }

 if (!VAR_21) {
  FUNC_3(&VAR_16->dev,
   "Missing slave select configuration data\n");
  return -VAR_0;
 }

 if (VAR_21 > VAR_9) {
  FUNC_3(&VAR_16->dev, "Invalid number of spi slaves\n");
  return -VAR_0;
 }

 VAR_23 = FUNC_14(&VAR_16->dev, sizeof(struct xilinx_spi));
 if (!VAR_23)
  return -VAR_1;


 VAR_23->mode_bits = VAR_5 | VAR_4 | VAR_8 | VAR_7 |
       VAR_6;

 VAR_17 = FUNC_16(VAR_23);
 VAR_17->cs_inactive = 0xffffffff;
 VAR_17->bitbang.master = VAR_23;
 VAR_17->bitbang.chipselect = VAR_12;
 VAR_17->bitbang.setup_transfer = VAR_14;
 VAR_17->bitbang.txrx_bufs = VAR_15;
 FUNC_9(&VAR_17->done);

 VAR_19 = FUNC_12(VAR_16, VAR_3, 0);
 VAR_17->regs = FUNC_7(&VAR_16->dev, VAR_19);
 if (FUNC_0(VAR_17->regs)) {
  VAR_20 = FUNC_1(VAR_17->regs);
  goto put_master;
 }

 VAR_23->bus_num = VAR_16->id;
 VAR_23->num_chipselect = VAR_21;
 VAR_23->dev.of_node = VAR_16->dev.of_node;
 VAR_17->read_fn = FUNC_23;
 VAR_17->write_fn = FUNC_25;

 VAR_17->write_fn(VAR_10, VAR_17->regs + VAR_11);
 VAR_24 = VAR_17->read_fn(VAR_17->regs + VAR_11);
 VAR_24 &= VAR_10;
 if (VAR_24 != VAR_10) {
  VAR_17->read_fn = FUNC_24;
  VAR_17->write_fn = FUNC_26;
 }

 VAR_23->bits_per_word_mask = FUNC_2(VAR_22);
 VAR_17->bytes_per_word = VAR_22 / 8;
 VAR_17->buffer_size = FUNC_21(VAR_17);

 VAR_17->irq = FUNC_11(VAR_16, 0);
 if (VAR_17->irq < 0 && VAR_17->irq != -VAR_2) {
  VAR_20 = VAR_17->irq;
  goto put_master;
 } else if (VAR_17->irq >= 0) {

  VAR_20 = FUNC_8(&VAR_16->dev, VAR_17->irq, VAR_13, 0,
    FUNC_6(&VAR_16->dev), VAR_17);
  if (VAR_20)
   goto put_master;
 }


 FUNC_22(VAR_17);

 VAR_20 = FUNC_15(&VAR_17->bitbang);
 if (VAR_20) {
  FUNC_3(&VAR_16->dev, "spi_bitbang_start FAILED\n");
  goto put_master;
 }

 FUNC_5(&VAR_16->dev, "at 0x%08llX mapped to 0x%p, irq=%d\n",
  (unsigned long long)VAR_19->start, VAR_17->regs, VAR_17->irq);

 if (VAR_18) {
  for (VAR_25 = 0; VAR_25 < VAR_18->num_devices; VAR_25++)
   FUNC_18(VAR_23, VAR_18->devices + VAR_25);
 }

 FUNC_13(VAR_16, VAR_23);
 return 0;

put_master:
 FUNC_17(VAR_23);

 return VAR_20;
}
