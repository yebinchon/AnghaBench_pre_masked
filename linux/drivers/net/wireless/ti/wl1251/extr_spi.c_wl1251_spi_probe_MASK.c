
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct wl1251_platform_data {int power_gpio; int use_eeprom; } ;
struct wl1251 {int power_gpio; scalar_t__ irq; struct ieee80211_hw* vio; int use_eeprom; int * if_ops; struct spi_device* if_priv; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct spi_device {int bits_per_word; scalar_t__ irq; TYPE_1__ dev; } ;
struct ieee80211_hw {struct wl1251* priv; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,TYPE_1__*) ;
 struct wl1251_platform_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int ,char*) ;
 struct ieee80211_hw* FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ,int ,int ,struct wl1251*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct device_node*,char*,int ) ;
 int FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct spi_device*,struct wl1251*) ;
 int FUNC_16 (struct spi_device*) ;
 struct ieee80211_hw* FUNC_17 () ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (struct wl1251*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_20(struct spi_device *VAR_8)
{
 struct wl1251_platform_data *VAR_9 = FUNC_3(&VAR_8->dev);
 struct device_node *VAR_10 = VAR_8->dev.of_node;
 struct ieee80211_hw *VAR_11;
 struct wl1251 *VAR_12;
 int VAR_13;

 if (!VAR_10 && !VAR_9) {
  FUNC_18("no platform data");
  return -VAR_1;
 }

 VAR_11 = FUNC_17();
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = VAR_11->priv;

 FUNC_2(VAR_11, &VAR_8->dev);
 FUNC_15(VAR_8, VAR_12);
 VAR_12->if_priv = VAR_8;
 VAR_12->if_ops = &VAR_7;




 VAR_8->bits_per_word = 32;

 VAR_13 = FUNC_16(VAR_8);
 if (VAR_13 < 0) {
  FUNC_18("spi_setup failed");
  goto out_free;
 }

 if (VAR_10) {
  VAR_12->use_eeprom = FUNC_12(VAR_10, "ti,wl1251-has-eeprom");
  VAR_12->power_gpio = FUNC_11(VAR_10, "ti,power-gpio", 0);
 } else if (VAR_9) {
  VAR_12->power_gpio = VAR_9->power_gpio;
  VAR_12->use_eeprom = VAR_9->use_eeprom;
 }

 if (VAR_12->power_gpio == -VAR_2) {
  VAR_13 = -VAR_2;
  goto out_free;
 }

 if (FUNC_7(VAR_12->power_gpio)) {
  VAR_13 = FUNC_4(&VAR_8->dev, VAR_12->power_gpio,
     VAR_3, "wl1251 power");
  if (VAR_13) {
   FUNC_18("Failed to request gpio: %d\n", VAR_13);
   goto out_free;
  }
 } else {
  FUNC_18("set power gpio missing in platform data");
  VAR_13 = -VAR_1;
  goto out_free;
 }

 VAR_12->irq = VAR_8->irq;
 if (VAR_12->irq < 0) {
  FUNC_18("irq missing in platform data");
  VAR_13 = -VAR_1;
  goto out_free;
 }

 FUNC_10(VAR_12->irq, VAR_4);
 VAR_13 = FUNC_6(&VAR_8->dev, VAR_12->irq, VAR_6, 0,
       VAR_0, VAR_12);
 if (VAR_13 < 0) {
  FUNC_18("request_irq() failed: %d", VAR_13);
  goto out_free;
 }

 FUNC_9(VAR_12->irq, VAR_5);

 VAR_12->vio = FUNC_5(&VAR_8->dev, "vio");
 if (FUNC_0(VAR_12->vio)) {
  VAR_13 = FUNC_1(VAR_12->vio);
  FUNC_18("vio regulator missing: %d", VAR_13);
  goto out_free;
 }

 VAR_13 = FUNC_14(VAR_12->vio);
 if (VAR_13)
  goto out_free;

 VAR_13 = FUNC_19(VAR_12);
 if (VAR_13)
  goto disable_regulator;

 return 0;

disable_regulator:
 FUNC_13(VAR_12->vio);
out_free:
 FUNC_8(VAR_11);

 return VAR_13;
}
