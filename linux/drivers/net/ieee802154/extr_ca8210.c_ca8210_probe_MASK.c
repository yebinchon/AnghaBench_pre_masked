
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct ca8210_platform_data* platform_data; } ;
struct spi_device {TYPE_2__ dev; } ;
struct ieee802154_hw {TYPE_1__* phy; TYPE_2__* parent; struct ca8210_priv* priv; } ;
struct ca8210_priv {int async_tx_pending; int hw_registered; int promiscuous; struct spi_device* spi; int sync_exchange_complete; int spi_transfer_complete; int ca8210_is_awake; scalar_t__ retries; scalar_t__ sync_down; scalar_t__ sync_up; int lock; struct ieee802154_hw* hw; } ;
struct ca8210_platform_data {scalar_t__ extclockenable; } ;
struct TYPE_4__ {int perm_extended_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ca8210_platform_data*,struct spi_device*,int) ;
 int FUNC_2 (struct ca8210_priv*) ;
 int FUNC_3 (struct spi_device*,struct ca8210_platform_data*) ;
 int FUNC_4 (struct ieee802154_hw*) ;
 int FUNC_5 (struct spi_device*) ;
 int VAR_3 ;
 int FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,int) ;
 int * VAR_4 ;
 int FUNC_10 (struct ca8210_priv*) ;
 int * VAR_5 ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 struct ieee802154_hw* FUNC_13 (int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ieee802154_hw*) ;
 int FUNC_16 (int *) ;
 struct ca8210_platform_data* FUNC_17 (int,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct spi_device*,struct ca8210_priv*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct spi_device*) ;

__attribute__((used)) static int FUNC_23(struct spi_device *VAR_6)
{
 struct ca8210_priv *VAR_7;
 struct ieee802154_hw *VAR_8;
 struct ca8210_platform_data *VAR_9;
 int VAR_10;

 FUNC_12(&VAR_6->dev, "Inserting ca8210\n");


 VAR_8 = FUNC_13(sizeof(struct ca8210_priv), &VAR_3);
 if (!VAR_8) {
  FUNC_11(&VAR_6->dev, "ieee802154_alloc_hw failed\n");
  VAR_10 = -VAR_1;
  goto error;
 }

 VAR_7 = VAR_8->priv;
 VAR_7->hw = VAR_8;
 VAR_7->spi = VAR_6;
 VAR_8->parent = &VAR_6->dev;
 FUNC_21(&VAR_7->lock);
 VAR_7->async_tx_pending = 0;
 VAR_7->hw_registered = 0;
 VAR_7->sync_up = 0;
 VAR_7->sync_down = 0;
 VAR_7->promiscuous = 0;
 VAR_7->retries = 0;
 FUNC_16(&VAR_7->ca8210_is_awake);
 FUNC_16(&VAR_7->spi_transfer_complete);
 FUNC_16(&VAR_7->sync_exchange_complete);
 FUNC_20(VAR_7->spi, VAR_7);
 if (FUNC_0(VAR_0)) {
  VAR_5 = VAR_4;
  FUNC_10(VAR_7);
 } else {
  VAR_5 = ((void*)0);
 }
 FUNC_4(VAR_8);
 FUNC_14(&VAR_8->phy->perm_extended_addr);

 VAR_9 = FUNC_17(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto error;
 }

 VAR_7->spi->dev.platform_data = VAR_9;
 VAR_10 = FUNC_3(VAR_7->spi, VAR_9);
 if (VAR_10) {
  FUNC_11(&VAR_6->dev, "ca8210_get_platform_data failed\n");
  goto error;
 }

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10) {
  FUNC_11(&VAR_6->dev, "ca8210_dev_com_init failed\n");
  goto error;
 }
 VAR_10 = FUNC_8(VAR_7->spi);
 if (VAR_10) {
  FUNC_11(&VAR_6->dev, "ca8210_reset_init failed\n");
  goto error;
 }

 VAR_10 = FUNC_5(VAR_7->spi);
 if (VAR_10) {
  FUNC_11(&VAR_6->dev, "ca8210_interrupt_init failed\n");
  goto error;
 }

 FUNC_19(100);

 FUNC_9(VAR_7->spi, 1);

 VAR_10 = FUNC_22(VAR_7->spi);
 if (VAR_10) {
  FUNC_11(&VAR_6->dev, "tdme_chipinit failed\n");
  goto error;
 }

 if (VAR_9->extclockenable) {
  VAR_10 = FUNC_1(VAR_9, VAR_7->spi, 1);
  if (VAR_10) {
   FUNC_11(
    &VAR_6->dev,
    "ca8210_config_extern_clk failed\n"
   );
   goto error;
  }
  VAR_10 = FUNC_6(VAR_7->spi);
  if (VAR_10) {
   FUNC_11(
    &VAR_6->dev,
    "ca8210_register_ext_clock failed\n"
   );
   goto error;
  }
 }

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10) {
  FUNC_11(&VAR_6->dev, "ieee802154_register_hw failed\n");
  goto error;
 }
 VAR_7->hw_registered = 1;

 return 0;
error:
 FUNC_19(100);
 FUNC_7(VAR_6);
 return FUNC_18(VAR_10);
}
