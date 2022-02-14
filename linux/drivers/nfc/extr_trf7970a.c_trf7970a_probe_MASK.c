
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct trf7970a {int lock; void* regulator; int ddev; TYPE_1__* dev; int io_ctrl; int chip_status_ctrl; int timeout_work; scalar_t__ modulator_sys_clk_ctrl; int quirks; void* en2_gpiod; void* en_gpiod; struct spi_device* spi; int state; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct spi_device {int bits_per_word; TYPE_1__ dev; int irq; int mode; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (void*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 void* FUNC_6 (TYPE_1__*,char*,int ,int ) ;
 void* FUNC_7 (TYPE_1__*,char*,int,int ) ;
 struct trf7970a* FUNC_8 (TYPE_1__*,int,int ) ;
 void* FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,int ,int *,int ,int,char*,struct trf7970a*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,struct trf7970a*) ;
 int FUNC_17 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_18 (struct device_node*,char*) ;
 int FUNC_19 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (void*) ;
 int FUNC_23 (void*) ;
 int FUNC_24 (void*) ;
 int FUNC_25 (struct spi_device*,struct trf7970a*) ;
 int FUNC_26 (struct spi_device*) ;
 int FUNC_27 (struct device_node*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_28 (struct trf7970a*) ;
 int FUNC_29 (struct trf7970a*) ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_30(struct spi_device *VAR_21)
{
 struct device_node *VAR_22 = VAR_21->dev.of_node;
 struct trf7970a *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 u32 VAR_27 = VAR_9;

 if (!VAR_22) {
  FUNC_4(&VAR_21->dev, "No Device Tree entry\n");
  return -VAR_0;
 }

 VAR_23 = FUNC_8(&VAR_21->dev, sizeof(*VAR_23), VAR_2);
 if (!VAR_23)
  return -VAR_1;

 VAR_23->state = VAR_16;
 VAR_23->dev = &VAR_21->dev;
 VAR_23->spi = VAR_21;

 VAR_21->mode = VAR_8;
 VAR_21->bits_per_word = 8;

 VAR_26 = FUNC_26(VAR_21);
 if (VAR_26 < 0) {
  FUNC_4(VAR_23->dev, "Can't set up SPI Communication\n");
  return VAR_26;
 }

 if (FUNC_18(VAR_22, "irq-status-read-quirk"))
  VAR_23->quirks |= VAR_14;


 VAR_23->en_gpiod = FUNC_6(VAR_23->dev, "ti,enable", 0,
          VAR_3);
 if (FUNC_1(VAR_23->en_gpiod)) {
  FUNC_4(VAR_23->dev, "No EN GPIO property\n");
  return FUNC_2(VAR_23->en_gpiod);
 }

 VAR_23->en2_gpiod = FUNC_7(VAR_23->dev, "ti,enable", 1,
             VAR_3);
 if (!VAR_23->en2_gpiod) {
  FUNC_5(VAR_23->dev, "No EN2 GPIO property\n");
 } else if (FUNC_1(VAR_23->en2_gpiod)) {
  FUNC_4(VAR_23->dev, "Error getting EN2 GPIO property: %ld\n",
   FUNC_2(VAR_23->en2_gpiod));
  return FUNC_2(VAR_23->en2_gpiod);
 } else if (FUNC_18(VAR_22, "en2-rf-quirk")) {
  VAR_23->quirks |= VAR_13;
 }

 FUNC_19(VAR_22, "clock-frequency", &VAR_27);
 if ((VAR_27 != VAR_10) &&
     (VAR_27 != VAR_9)) {
  FUNC_4(VAR_23->dev,
   "clock-frequency (%u Hz) unsupported\n", VAR_27);
  return -VAR_0;
 }

 if (VAR_27 == VAR_10) {
  VAR_23->modulator_sys_clk_ctrl = VAR_12;
  FUNC_3(VAR_23->dev, "trf7970a configured for 27MHz crystal\n");
 } else {
  VAR_23->modulator_sys_clk_ctrl = 0;
 }

 VAR_26 = FUNC_10(VAR_23->dev, VAR_21->irq, ((void*)0),
     VAR_18,
     VAR_5 | VAR_4,
     "trf7970a", VAR_23);
 if (VAR_26) {
  FUNC_4(VAR_23->dev, "Can't request IRQ#%d: %d\n", VAR_21->irq, VAR_26);
  return VAR_26;
 }

 FUNC_12(&VAR_23->lock);
 FUNC_0(&VAR_23->timeout_work, VAR_20);

 VAR_23->regulator = FUNC_9(&VAR_21->dev, "vin");
 if (FUNC_1(VAR_23->regulator)) {
  VAR_26 = FUNC_2(VAR_23->regulator);
  FUNC_4(VAR_23->dev, "Can't get VIN regulator: %d\n", VAR_26);
  goto err_destroy_lock;
 }

 VAR_26 = FUNC_23(VAR_23->regulator);
 if (VAR_26) {
  FUNC_4(VAR_23->dev, "Can't enable VIN: %d\n", VAR_26);
  goto err_destroy_lock;
 }

 VAR_24 = FUNC_24(VAR_23->regulator);
 if (VAR_24 > 4000000)
  VAR_23->chip_status_ctrl = VAR_11;

 VAR_23->regulator = FUNC_9(&VAR_21->dev, "vdd-io");
 if (FUNC_1(VAR_23->regulator)) {
  VAR_26 = FUNC_2(VAR_23->regulator);
  FUNC_4(VAR_23->dev, "Can't get VDD_IO regulator: %d\n", VAR_26);
  goto err_destroy_lock;
 }

 VAR_26 = FUNC_23(VAR_23->regulator);
 if (VAR_26) {
  FUNC_4(VAR_23->dev, "Can't enable VDD_IO: %d\n", VAR_26);
  goto err_destroy_lock;
 }

 if (FUNC_24(VAR_23->regulator) == 1800000) {
  VAR_23->io_ctrl = VAR_15;
  FUNC_3(VAR_23->dev, "trf7970a config vdd_io to 1.8V\n");
 }

 VAR_23->ddev = FUNC_13(&VAR_19,
      VAR_17,
      VAR_6 |
      VAR_7, 0,
      0);
 if (!VAR_23->ddev) {
  FUNC_4(VAR_23->dev, "Can't allocate NFC digital device\n");
  VAR_26 = -VAR_1;
  goto err_disable_regulator;
 }

 FUNC_17(VAR_23->ddev, VAR_23->dev);
 FUNC_16(VAR_23->ddev, VAR_23);
 FUNC_25(VAR_21, VAR_23);

 VAR_25 = FUNC_27(VAR_22);

 FUNC_20(VAR_23->dev, VAR_25);
 FUNC_21(VAR_23->dev);

 VAR_26 = FUNC_29(VAR_23);
 if (VAR_26)
  goto err_free_ddev;

 VAR_26 = FUNC_15(VAR_23->ddev);
 if (VAR_26) {
  FUNC_4(VAR_23->dev, "Can't register NFC digital device: %d\n",
   VAR_26);
  goto err_shutdown;
 }

 return 0;

err_shutdown:
 FUNC_28(VAR_23);
err_free_ddev:
 FUNC_14(VAR_23->ddev);
err_disable_regulator:
 FUNC_22(VAR_23->regulator);
err_destroy_lock:
 FUNC_11(&VAR_23->lock);
 return VAR_26;
}
