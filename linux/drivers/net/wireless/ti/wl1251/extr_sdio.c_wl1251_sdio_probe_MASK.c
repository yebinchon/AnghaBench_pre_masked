
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251_sdio {struct sdio_func* func; } ;
struct wl1251_platform_data {int use_eeprom; scalar_t__ irq; int power_gpio; struct wl1251* priv; } ;
struct wl1251 {scalar_t__ irq; int power_gpio; int use_eeprom; TYPE_1__* if_ops; struct wl1251_sdio* if_priv; } ;
struct sdio_func {int dev; } ;
struct sdio_device_id {int dummy; } ;
typedef struct ieee80211_hw {int use_eeprom; scalar_t__ irq; int power_gpio; struct wl1251* priv; } const ieee80211_hw ;
struct TYPE_2__ {int disable_irq; int enable_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct wl1251_platform_data const*) ;
 int FUNC_1 (struct wl1251_platform_data const*) ;
 int FUNC_2 (struct wl1251_platform_data const*,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (scalar_t__,struct wl1251*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct wl1251_sdio*) ;
 struct wl1251_sdio* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__,int ,int ,char*,struct wl1251*) ;
 int FUNC_12 (struct sdio_func*) ;
 int FUNC_13 (struct sdio_func*) ;
 int FUNC_14 (struct sdio_func*) ;
 int FUNC_15 (struct sdio_func*) ;
 int FUNC_16 (struct sdio_func*,int) ;
 int FUNC_17 (struct sdio_func*,struct wl1251*) ;
 struct wl1251_platform_data* FUNC_18 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (struct wl1251*) ;
 struct wl1251_platform_data* FUNC_21 () ;
 int FUNC_22 (char*) ;
 int FUNC_23 (struct wl1251*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int FUNC_24(struct sdio_func *VAR_10,
        const struct sdio_device_id *VAR_11)
{
 int VAR_12;
 struct wl1251 *VAR_13;
 struct ieee80211_hw *VAR_14;
 struct wl1251_sdio *VAR_15;
 const struct wl1251_platform_data *VAR_16;

 VAR_14 = FUNC_18();
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_13 = VAR_14->priv;

 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_1);
 if (VAR_15 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out_free_hw;
 }

 FUNC_12(VAR_10);
 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12)
  goto release;

 FUNC_16(VAR_10, 512);
 FUNC_15(VAR_10);

 FUNC_2(VAR_14, &VAR_10->dev);
 VAR_15->func = VAR_10;
 VAR_13->if_priv = VAR_15;
 VAR_13->if_ops = &VAR_9;

 VAR_16 = FUNC_21();
 if (!FUNC_0(VAR_16)) {
  VAR_13->power_gpio = VAR_16->power_gpio;
  VAR_13->irq = VAR_16->irq;
  VAR_13->use_eeprom = VAR_16->use_eeprom;
 }

 if (FUNC_5(VAR_13->power_gpio)) {
  VAR_12 = FUNC_3(&VAR_10->dev, VAR_13->power_gpio,
        "wl1251 power");
  if (VAR_12) {
   FUNC_19("Failed to request gpio: %d\n", VAR_12);
   goto disable;
  }
 }

 if (VAR_13->irq) {
  FUNC_7(VAR_13->irq, VAR_2);
  VAR_12 = FUNC_11(VAR_13->irq, VAR_6, 0, "wl1251", VAR_13);
  if (VAR_12 < 0) {
   FUNC_19("request_irq() failed: %d", VAR_12);
   goto disable;
  }

  FUNC_6(VAR_13->irq, VAR_3);

  VAR_9.enable_irq = VAR_5;
  VAR_9.disable_irq = VAR_4;

  FUNC_22("using dedicated interrupt line");
 } else {
  VAR_9.enable_irq = VAR_8;
  VAR_9.disable_irq = VAR_7;

  FUNC_22("using SDIO interrupt");
 }

 VAR_12 = FUNC_23(VAR_13);
 if (VAR_12)
  goto out_free_irq;

 FUNC_17(VAR_10, VAR_13);


 FUNC_10(&VAR_10->dev);

 return VAR_12;

out_free_irq:
 if (VAR_13->irq)
  FUNC_4(VAR_13->irq, VAR_13);
disable:
 FUNC_12(VAR_10);
 FUNC_13(VAR_10);
release:
 FUNC_15(VAR_10);
 FUNC_8(VAR_15);
out_free_hw:
 FUNC_20(VAR_13);
 return VAR_12;
}
