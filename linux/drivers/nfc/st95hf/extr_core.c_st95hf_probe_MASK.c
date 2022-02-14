
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct st95hf_spi_context {int spi_lock; int done; struct spi_device* spidev; } ;
struct st95hf_context {int enable_gpio; scalar_t__ st95hf_supply; TYPE_3__* ddev; int rm_lock; int exchange_lock; TYPE_1__* nfcdev; int fwi; struct st95hf_spi_context spicontext; } ;
struct TYPE_19__ {int of_node; } ;
struct spi_device {scalar_t__ irq; TYPE_2__ dev; } ;
struct TYPE_20__ {TYPE_1__* nfc_dev; } ;
struct TYPE_18__ {TYPE_2__ dev; } ;
struct TYPE_17__ {int * cmd_params; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_16__* VAR_11 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,struct st95hf_spi_context*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int,int,char*) ;
 struct st95hf_context* FUNC_6 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__,int ,int ,int ,char*,void*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (int *,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,struct st95hf_context*) ;
 int FUNC_16 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,char*) ;
 int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_22 (struct st95hf_context*) ;
 int FUNC_23 (struct st95hf_context*) ;

__attribute__((used)) static int FUNC_24(struct spi_device *VAR_15)
{
 int VAR_16;

 struct st95hf_context *VAR_17;
 struct st95hf_spi_context *VAR_18;

 FUNC_17(&VAR_15->dev, "ST95HF driver probe called.\n");

 VAR_17 = FUNC_6(&VAR_15->dev,
       sizeof(struct st95hf_context),
       VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = &VAR_17->spicontext;

 VAR_18->spidev = VAR_15;

 VAR_17->fwi =
  VAR_11[VAR_0].cmd_params[2];

 if (FUNC_4(&VAR_15->dev, "st95hfvin")) {
  VAR_17->st95hf_supply =
   FUNC_7(&VAR_15->dev,
        "st95hfvin");
  if (FUNC_0(VAR_17->st95hf_supply)) {
   FUNC_2(&VAR_15->dev, "failed to acquire regulator\n");
   return FUNC_1(VAR_17->st95hf_supply);
  }

  VAR_16 = FUNC_20(VAR_17->st95hf_supply);
  if (VAR_16) {
   FUNC_2(&VAR_15->dev, "failed to enable regulator\n");
   return VAR_16;
  }
 }

 FUNC_10(&VAR_18->done);
 FUNC_11(&VAR_18->spi_lock);





 FUNC_3(&VAR_15->dev, VAR_18);

 VAR_17->enable_gpio =
  FUNC_18(VAR_15->dev.of_node,
      "enable-gpio",
      0);
 if (!FUNC_9(VAR_17->enable_gpio)) {
  FUNC_2(&VAR_15->dev, "No valid enable gpio\n");
  VAR_16 = VAR_17->enable_gpio;
  goto err_disable_regulator;
 }

 VAR_16 = FUNC_5(&VAR_15->dev, VAR_17->enable_gpio,
        VAR_4 | VAR_5,
        "enable_gpio");
 if (VAR_16)
  goto err_disable_regulator;

 if (VAR_15->irq > 0) {
  if (FUNC_8(&VAR_15->dev,
           VAR_15->irq,
           VAR_12,
           VAR_13,
           VAR_6,
           "st95hf",
           (void *)VAR_17) < 0) {
   FUNC_2(&VAR_15->dev, "err: irq request for st95hf is failed\n");
   VAR_16 = -VAR_1;
   goto err_disable_regulator;
  }
 } else {
  FUNC_2(&VAR_15->dev, "not a valid IRQ associated with ST95HF\n");
  VAR_16 = -VAR_1;
  goto err_disable_regulator;
 }







 VAR_16 = FUNC_23(VAR_17);
 if (VAR_16) {
  FUNC_2(&VAR_15->dev, "err: spi_reset_sequence failed\n");
  goto err_disable_regulator;
 }


 VAR_16 = FUNC_22(VAR_17);
 if (VAR_16) {
  FUNC_2(&VAR_15->dev, "err: por seq failed for st95hf\n");
  goto err_disable_regulator;
 }


 VAR_17->ddev = FUNC_12(&VAR_14,
       VAR_9,
       VAR_7,
       VAR_8,
       VAR_10);
 if (!VAR_17->ddev) {
  VAR_16 = -VAR_2;
  goto err_disable_regulator;
 }

 VAR_17->nfcdev = VAR_17->ddev->nfc_dev;
 FUNC_16(VAR_17->ddev, &VAR_15->dev);

 VAR_16 = FUNC_14(VAR_17->ddev);
 if (VAR_16) {
  FUNC_2(&VAR_17->nfcdev->dev, "st95hf registration failed\n");
  goto err_free_digital_device;
 }


 FUNC_15(VAR_17->ddev, VAR_17);

 FUNC_21(&VAR_17->exchange_lock, 1);
 FUNC_11(&VAR_17->rm_lock);

 return VAR_16;

err_free_digital_device:
 FUNC_13(VAR_17->ddev);
err_disable_regulator:
 if (VAR_17->st95hf_supply)
  FUNC_19(VAR_17->st95hf_supply);

 return VAR_16;
}
