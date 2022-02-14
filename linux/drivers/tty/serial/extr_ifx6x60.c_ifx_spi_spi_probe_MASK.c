
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct spi_device {int mode; int bits_per_word; TYPE_2__ dev; int max_speed_hz; } ;
struct TYPE_8__ {int reset; int po; int mrdy; int srdy; int reset_out; } ;
struct ifx_spi_device {TYPE_1__ gpio; int flags; int io_work_tasklet; int mdm_reset_wait; void* rx_buffer; int rx_bus; struct spi_device* spi_dev; void* tx_buffer; int tx_bus; scalar_t__ spi_slave_cts; scalar_t__ spi_more; int swap_buf; int max_hz; int use_dma; int modem; int spi_timer; scalar_t__ power_status; int power_lock; int write_lock; } ;
struct ifx_modem_platform_data {int rst_pmu; int pwr_on; int mrdy; int srdy; int rst_out; int max_hz; int use_dma; int modem_type; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct ifx_modem_platform_data* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int,int,int,int,int) ;
 void* FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int,struct ifx_spi_device*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ifx_spi_device*) ;
 int FUNC_15 (struct ifx_spi_device*) ;
 int FUNC_16 (struct ifx_spi_device*) ;
 int VAR_12 ;
 int FUNC_17 (struct ifx_spi_device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct ifx_spi_device*) ;
 struct ifx_spi_device* FUNC_20 (int,int ) ;
 int FUNC_21 (struct ifx_spi_device*) ;
 int FUNC_22 (struct ifx_spi_device*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (int,int ,int,int ,struct ifx_spi_device*) ;
 struct ifx_spi_device* VAR_16 ;
 int FUNC_26 (int ,int *) ;
 int VAR_17 ;
 int FUNC_27 (struct spi_device*,struct ifx_spi_device*) ;
 int FUNC_28 (struct spi_device*) ;
 int FUNC_29 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_30 (int *,int ,unsigned long) ;
 int FUNC_31 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_32(struct spi_device *VAR_21)
{
 int VAR_22;
 int VAR_23;
 struct ifx_modem_platform_data *VAR_24;
 struct ifx_spi_device *VAR_25;

 if (VAR_16) {
  FUNC_1(&VAR_21->dev, "ignoring subsequent detection");
  return -VAR_2;
 }

 VAR_24 = FUNC_3(&VAR_21->dev);
 if (!VAR_24) {
  FUNC_2(&VAR_21->dev, "missing platform data!");
  return -VAR_2;
 }


 VAR_25 = FUNC_20(sizeof(struct ifx_spi_device), VAR_4);
 if (!VAR_25) {
  FUNC_2(&VAR_21->dev, "spi device allocation failed");
  return -VAR_3;
 }
 VAR_16 = VAR_25;
 VAR_25->spi_dev = VAR_21;
 FUNC_0(VAR_6, &VAR_25->flags);
 FUNC_29(&VAR_25->write_lock);
 FUNC_29(&VAR_25->power_lock);
 VAR_25->power_status = 0;
 FUNC_31(&VAR_25->spi_timer, VAR_15, 0);
 VAR_25->modem = VAR_24->modem_type;
 VAR_25->use_dma = VAR_24->use_dma;
 VAR_25->max_hz = VAR_24->max_hz;

 VAR_21->max_speed_hz = VAR_25->max_hz;
 VAR_21->mode = VAR_5 | (VAR_11 & VAR_21->mode);
 VAR_21->bits_per_word = VAR_17;
 VAR_22 = FUNC_28(VAR_21);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "SPI setup wasn't successful %d", VAR_22);
  FUNC_19(VAR_25);
  return -VAR_2;
 }


 if (VAR_21->bits_per_word == 32)
  VAR_25->swap_buf = VAR_19;
 else if (VAR_21->bits_per_word == 16)
  VAR_25->swap_buf = VAR_18;
 else
  VAR_25->swap_buf = VAR_20;


 VAR_25->spi_more = 0;
 VAR_25->spi_slave_cts = 0;


 VAR_25->tx_buffer = FUNC_5(VAR_25->spi_dev->dev.parent,
    VAR_8,
    &VAR_25->tx_bus,
    VAR_4);
 if (!VAR_25->tx_buffer) {
  FUNC_2(&VAR_21->dev, "DMA-TX buffer allocation failed");
  VAR_22 = -VAR_3;
  goto error_ret;
 }
 VAR_25->rx_buffer = FUNC_5(VAR_25->spi_dev->dev.parent,
    VAR_8,
    &VAR_25->rx_bus,
    VAR_4);
 if (!VAR_25->rx_buffer) {
  FUNC_2(&VAR_21->dev, "DMA-RX buffer allocation failed");
  VAR_22 = -VAR_3;
  goto error_ret;
 }


 FUNC_18(&VAR_25->mdm_reset_wait);

 FUNC_27(VAR_21, VAR_25);
 FUNC_30(&VAR_25->io_work_tasklet, VAR_12,
      (unsigned long)VAR_25);

 FUNC_26(VAR_7, &VAR_25->flags);


 VAR_22 = FUNC_14(VAR_25);
 if (VAR_22 != 0) {
  FUNC_2(&VAR_21->dev, "create default tty port failed");
  goto error_ret;
 }

 VAR_25->gpio.reset = VAR_24->rst_pmu;
 VAR_25->gpio.po = VAR_24->pwr_on;
 VAR_25->gpio.mrdy = VAR_24->mrdy;
 VAR_25->gpio.srdy = VAR_24->srdy;
 VAR_25->gpio.reset_out = VAR_24->rst_out;

 FUNC_4(&VAR_21->dev, "gpios %d, %d, %d, %d, %d",
   VAR_25->gpio.reset, VAR_25->gpio.po, VAR_25->gpio.mrdy,
   VAR_25->gpio.srdy, VAR_25->gpio.reset_out);


 VAR_22 = FUNC_12(VAR_25->gpio.reset, "ifxModem");
 if (VAR_22 < 0) {
  FUNC_2(&VAR_21->dev, "Unable to allocate GPIO%d (RESET)",
   VAR_25->gpio.reset);
  goto error_ret;
 }
 VAR_22 += FUNC_8(VAR_25->gpio.reset, 0);
 VAR_22 += FUNC_9(VAR_25->gpio.reset, 1);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to configure GPIO%d (RESET)",
   VAR_25->gpio.reset);
  VAR_22 = -VAR_1;
  goto error_ret2;
 }

 VAR_22 = FUNC_12(VAR_25->gpio.po, "ifxModem");
 VAR_22 += FUNC_8(VAR_25->gpio.po, 0);
 VAR_22 += FUNC_9(VAR_25->gpio.po, 1);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to configure GPIO%d (ON)",
   VAR_25->gpio.po);
  VAR_22 = -VAR_1;
  goto error_ret3;
 }

 VAR_22 = FUNC_12(VAR_25->gpio.mrdy, "ifxModem");
 if (VAR_22 < 0) {
  FUNC_2(&VAR_21->dev, "Unable to allocate GPIO%d (MRDY)",
   VAR_25->gpio.mrdy);
  goto error_ret3;
 }
 VAR_22 += FUNC_9(VAR_25->gpio.mrdy, 1);
 VAR_22 += FUNC_8(VAR_25->gpio.mrdy, 0);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to configure GPIO%d (MRDY)",
   VAR_25->gpio.mrdy);
  VAR_22 = -VAR_1;
  goto error_ret4;
 }

 VAR_22 = FUNC_12(VAR_25->gpio.srdy, "ifxModem");
 if (VAR_22 < 0) {
  FUNC_2(&VAR_21->dev, "Unable to allocate GPIO%d (SRDY)",
   VAR_25->gpio.srdy);
  VAR_22 = -VAR_1;
  goto error_ret4;
 }
 VAR_22 += FUNC_9(VAR_25->gpio.srdy, 1);
 VAR_22 += FUNC_7(VAR_25->gpio.srdy);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to configure GPIO%d (SRDY)",
   VAR_25->gpio.srdy);
  VAR_22 = -VAR_1;
  goto error_ret5;
 }

 VAR_22 = FUNC_12(VAR_25->gpio.reset_out, "ifxModem");
 if (VAR_22 < 0) {
  FUNC_2(&VAR_21->dev, "Unable to allocate GPIO%d (RESET_OUT)",
   VAR_25->gpio.reset_out);
  goto error_ret5;
 }
 VAR_22 += FUNC_9(VAR_25->gpio.reset_out, 1);
 VAR_22 += FUNC_7(VAR_25->gpio.reset_out);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to configure GPIO%d (RESET_OUT)",
   VAR_25->gpio.reset_out);
  VAR_22 = -VAR_1;
  goto error_ret6;
 }

 VAR_22 = FUNC_25(FUNC_13(VAR_25->gpio.reset_out),
     VAR_13,
     VAR_10|VAR_9, VAR_0,
     VAR_25);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to get irq %x\n",
   FUNC_13(VAR_25->gpio.reset_out));
  goto error_ret6;
 }

 VAR_22 = FUNC_17(VAR_25);

 VAR_22 = FUNC_25(FUNC_13(VAR_25->gpio.srdy),
     VAR_14, VAR_10, VAR_0,
     VAR_25);
 if (VAR_22) {
  FUNC_2(&VAR_21->dev, "Unable to get irq %x",
   FUNC_13(VAR_25->gpio.srdy));
  goto error_ret7;
 }


 FUNC_24(&VAR_21->dev);
 FUNC_23(&VAR_21->dev);





 VAR_23 = FUNC_11(VAR_25->gpio.srdy);

 if (VAR_23) {
  FUNC_21(VAR_25);
  FUNC_16(VAR_25);
 } else
  FUNC_22(VAR_25);
 return 0;

error_ret7:
 FUNC_6(FUNC_13(VAR_25->gpio.reset_out), VAR_25);
error_ret6:
 FUNC_10(VAR_25->gpio.srdy);
error_ret5:
 FUNC_10(VAR_25->gpio.mrdy);
error_ret4:
 FUNC_10(VAR_25->gpio.reset);
error_ret3:
 FUNC_10(VAR_25->gpio.po);
error_ret2:
 FUNC_10(VAR_25->gpio.reset_out);
error_ret:
 FUNC_15(VAR_25);
 VAR_16 = ((void*)0);
 return VAR_22;
}
