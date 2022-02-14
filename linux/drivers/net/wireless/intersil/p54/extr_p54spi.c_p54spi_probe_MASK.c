
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int bits_per_word; int max_speed_hz; int dev; } ;
struct TYPE_2__ {int tx; int stop; int open; } ;
struct p54s_priv {struct ieee80211_hw* hw; struct spi_device* spi; TYPE_1__ common; int tx_lock; int mutex; int tx_pending; int fw_comp; int work; } ;
struct ieee80211_hw {struct p54s_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211_hw*,int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct spi_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_15 (int) ;
 int FUNC_16 (struct ieee80211_hw*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*) ;
 int VAR_9 ;
 int FUNC_19 (int ,int ,int ,char*,struct spi_device*) ;
 int FUNC_20 (struct spi_device*,struct p54s_priv*) ;
 int FUNC_21 (struct spi_device*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct spi_device *VAR_10)
{
 struct p54s_priv *VAR_11 = ((void*)0);
 struct ieee80211_hw *VAR_12;
 int VAR_13 = -VAR_0;

 VAR_12 = FUNC_15(sizeof(*VAR_11));
 if (!VAR_12) {
  FUNC_3(&VAR_10->dev, "could not alloc ieee80211_hw");
  return -VAR_1;
 }

 VAR_11 = VAR_12->priv;
 VAR_11->hw = VAR_12;
 FUNC_20(VAR_10, VAR_11);
 VAR_11->spi = VAR_10;

 VAR_10->bits_per_word = 16;
 VAR_10->max_speed_hz = 24000000;

 VAR_13 = FUNC_21(VAR_10);
 if (VAR_13 < 0) {
  FUNC_3(&VAR_11->spi->dev, "spi_setup failed");
  goto err_free;
 }

 VAR_13 = FUNC_9(VAR_4, "p54spi power");
 if (VAR_13 < 0) {
  FUNC_3(&VAR_11->spi->dev, "power GPIO request failed: %d", VAR_13);
  goto err_free;
 }

 VAR_13 = FUNC_9(VAR_3, "p54spi irq");
 if (VAR_13 < 0) {
  FUNC_3(&VAR_11->spi->dev, "irq GPIO request failed: %d", VAR_13);
  goto err_free_gpio_power;
 }

 FUNC_7(VAR_4, 0);
 FUNC_6(VAR_3);

 VAR_13 = FUNC_19(FUNC_10(VAR_3),
     VAR_5, 0, "p54spi",
     VAR_11->spi);
 if (VAR_13 < 0) {
  FUNC_3(&VAR_11->spi->dev, "request_irq() failed");
  goto err_free_gpio_irq;
 }

 FUNC_12(FUNC_10(VAR_3), VAR_2);

 FUNC_4(FUNC_10(VAR_3));

 FUNC_1(&VAR_11->work, VAR_9);
 FUNC_11(&VAR_11->fw_comp);
 FUNC_0(&VAR_11->tx_pending);
 FUNC_13(&VAR_11->mutex);
 FUNC_22(&VAR_11->tx_lock);
 FUNC_2(VAR_12, &VAR_10->dev);
 VAR_11->common.open = VAR_6;
 VAR_11->common.stop = VAR_7;
 VAR_11->common.tx = VAR_8;

 VAR_13 = FUNC_18(VAR_12);
 if (VAR_13 < 0)
  goto err_free_common;

 VAR_13 = FUNC_17(VAR_12);
 if (VAR_13)
  goto err_free_common;

 VAR_13 = FUNC_16(VAR_12, &VAR_11->spi->dev);
 if (VAR_13)
  goto err_free_common;

 return 0;

err_free_common:
 FUNC_5(FUNC_10(VAR_3), VAR_10);
err_free_gpio_irq:
 FUNC_8(VAR_3);
err_free_gpio_power:
 FUNC_8(VAR_4);
err_free:
 FUNC_14(VAR_11->hw);
 return VAR_13;
}
