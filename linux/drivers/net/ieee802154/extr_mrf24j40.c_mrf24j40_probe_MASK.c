
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {scalar_t__ max_speed_hz; int dev; int irq; } ;
struct mrf24j40 {struct ieee802154_hw* hw; int regmap_long; int regmap_short; struct spi_device* spi; } ;
struct ieee802154_hw {int flags; TYPE_2__* phy; int * parent; struct mrf24j40* priv; } ;
struct TYPE_3__ {int * channels; } ;
struct TYPE_4__ {int flags; TYPE_1__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int FUNC_7 (int *,int *,struct spi_device*,int *) ;
 int FUNC_8 (struct spi_device*,int *) ;
 int FUNC_9 (int *,int ,int ,int,int ,struct mrf24j40*) ;
 struct ieee802154_hw* FUNC_10 (int,int *) ;
 int FUNC_11 (struct ieee802154_hw*) ;
 int FUNC_12 (struct ieee802154_hw*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mrf24j40*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (struct mrf24j40*) ;
 int FUNC_16 (struct mrf24j40*) ;
 int FUNC_17 (struct mrf24j40*) ;
 int FUNC_18 (struct mrf24j40*) ;
 int VAR_15 ;
 int FUNC_19 (struct mrf24j40*) ;
 int FUNC_20 (struct spi_device*,struct mrf24j40*) ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_16)
{
 int VAR_17 = -VAR_2, VAR_18;
 struct ieee802154_hw *VAR_19;
 struct mrf24j40 *VAR_20;

 FUNC_4(&VAR_16->dev, "probe(). IRQ: %d\n", VAR_16->irq);



 VAR_19 = FUNC_10(sizeof(*VAR_20), &VAR_14);
 if (!VAR_19)
  goto err_ret;

 VAR_20 = VAR_19->priv;
 VAR_20->spi = VAR_16;
 FUNC_20(VAR_16, VAR_20);
 VAR_20->hw = VAR_19;
 VAR_20->hw->parent = &VAR_16->dev;
 VAR_20->hw->phy->supported.channels[0] = VAR_0;
 VAR_20->hw->flags = VAR_6 | VAR_3 |
       VAR_4 |
       VAR_5;

 VAR_20->hw->phy->flags = VAR_10 |
     VAR_9;

 FUNC_18(VAR_20);
 FUNC_17(VAR_20);
 FUNC_16(VAR_20);

 VAR_20->regmap_short = FUNC_8(VAR_16,
          &VAR_15);
 if (FUNC_0(VAR_20->regmap_short)) {
  VAR_17 = FUNC_1(VAR_20->regmap_short);
  FUNC_3(VAR_16->dev, "Failed to allocate short register map: %d\n",
   VAR_17);
  goto err_register_device;
 }

 VAR_20->regmap_long = FUNC_7(&VAR_16->dev,
            &VAR_13,
            VAR_16, &VAR_12);
 if (FUNC_0(VAR_20->regmap_long)) {
  VAR_17 = FUNC_1(VAR_20->regmap_long);
  FUNC_3(VAR_16->dev, "Failed to allocate long register map: %d\n",
   VAR_17);
  goto err_register_device;
 }

 if (VAR_16->max_speed_hz > VAR_8) {
  FUNC_6(&VAR_16->dev, "spi clock above possible maximum: %d",
    VAR_8);
  VAR_17 = -VAR_1;
  goto err_register_device;
 }

 VAR_17 = FUNC_14(VAR_20);
 if (VAR_17)
  goto err_register_device;

 FUNC_15(VAR_20);


 VAR_18 = FUNC_13(VAR_16->irq);
 if (!VAR_18)
  VAR_18 = VAR_7;

 VAR_17 = FUNC_9(&VAR_16->dev, VAR_16->irq, VAR_11,
          VAR_18, FUNC_5(&VAR_16->dev), VAR_20);
 if (VAR_17) {
  FUNC_3(FUNC_19(VAR_20), "Unable to get IRQ");
  goto err_register_device;
 }

 FUNC_2(FUNC_19(VAR_20), "registered mrf24j40\n");
 VAR_17 = FUNC_12(VAR_20->hw);
 if (VAR_17)
  goto err_register_device;

 return 0;

err_register_device:
 FUNC_11(VAR_20->hw);
err_ret:
 return VAR_17;
}
