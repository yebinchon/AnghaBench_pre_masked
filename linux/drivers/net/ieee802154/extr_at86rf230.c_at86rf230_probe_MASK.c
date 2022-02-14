
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int irq; int dev; } ;
struct ieee802154_hw {TYPE_1__* phy; int * parent; struct at86rf230_local* priv; } ;
struct at86rf230_local {int slp_tr; struct ieee802154_hw* hw; int state_complete; int tx; int state; int regmap; struct spi_device* spi; } ;
struct TYPE_2__ {int perm_extended_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct at86rf230_local*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct at86rf230_local*) ;
 int FUNC_5 (struct spi_device*,int*,int*,int *) ;
 int FUNC_6 (struct at86rf230_local*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct at86rf230_local*,int ,int,int ,unsigned int*) ;
 int VAR_9 ;
 int FUNC_8 (struct at86rf230_local*,int *) ;
 int FUNC_9 (struct at86rf230_local*) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int ,char*) ;
 int FUNC_13 (struct spi_device*,int *) ;
 int FUNC_14 (int *,int ,int ,int,int ,struct at86rf230_local*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int,int) ;
 struct ieee802154_hw* FUNC_18 (int,int *) ;
 int FUNC_19 (struct ieee802154_hw*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct ieee802154_hw*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct spi_device*,struct at86rf230_local*) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int,int) ;

__attribute__((used)) static int FUNC_27(struct spi_device *VAR_10)
{
 struct ieee802154_hw *VAR_11;
 struct at86rf230_local *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 u8 VAR_18 = 0;

 if (!VAR_10->irq) {
  FUNC_10(&VAR_10->dev, "no IRQ specified\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_5(VAR_10, &VAR_16, &VAR_17, &VAR_18);
 if (VAR_14 < 0) {
  FUNC_10(&VAR_10->dev, "failed to parse platform_data: %d\n", VAR_14);
  return VAR_14;
 }

 if (FUNC_16(VAR_16)) {
  VAR_14 = FUNC_12(&VAR_10->dev, VAR_16,
        VAR_2, "rstn");
  if (VAR_14)
   return VAR_14;
 }

 if (FUNC_16(VAR_17)) {
  VAR_14 = FUNC_12(&VAR_10->dev, VAR_17,
        VAR_3, "slp_tr");
  if (VAR_14)
   return VAR_14;
 }


 if (FUNC_16(VAR_16)) {
  FUNC_25(1);
  FUNC_17(VAR_16, 0);
  FUNC_25(1);
  FUNC_17(VAR_16, 1);
  FUNC_26(120, 240);
 }

 VAR_11 = FUNC_18(sizeof(*VAR_12), &VAR_8);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = VAR_11->priv;
 VAR_12->hw = VAR_11;
 VAR_12->spi = VAR_10;
 VAR_12->slp_tr = VAR_17;
 VAR_11->parent = &VAR_10->dev;
 FUNC_20(&VAR_11->phy->perm_extended_addr);

 VAR_12->regmap = FUNC_13(VAR_10, &VAR_9);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_14 = FUNC_1(VAR_12->regmap);
  FUNC_10(&VAR_10->dev, "Failed to allocate register map: %d\n",
   VAR_14);
  goto free_dev;
 }

 FUNC_8(VAR_12, &VAR_12->state);
 FUNC_8(VAR_12, &VAR_12->tx);

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 < 0)
  goto free_dev;

 FUNC_22(&VAR_12->state_complete);

 FUNC_24(VAR_10, VAR_12);

 VAR_14 = FUNC_6(VAR_12, VAR_18);
 if (VAR_14)
  goto free_dev;


 VAR_14 = FUNC_7(VAR_12, VAR_6, 0xff, 0, &VAR_13);
 if (VAR_14)
  goto free_dev;

 VAR_15 = FUNC_23(VAR_10->irq);
 if (!VAR_15)
  VAR_15 = VAR_5;

 VAR_14 = FUNC_14(&VAR_10->dev, VAR_10->irq, VAR_7,
         VAR_4 | VAR_15, FUNC_11(&VAR_10->dev), VAR_12);
 if (VAR_14)
  goto free_dev;


 FUNC_15(VAR_10->irq);


 FUNC_9(VAR_12);

 FUNC_2(VAR_12);

 VAR_14 = FUNC_21(VAR_12->hw);
 if (VAR_14)
  goto free_debugfs;

 return VAR_14;

free_debugfs:
 FUNC_3();
free_dev:
 FUNC_19(VAR_12->hw);

 return VAR_14;
}
