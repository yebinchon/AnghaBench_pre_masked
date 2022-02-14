
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_softc {struct ath_hw* sc_ah; TYPE_1__* dev; } ;
struct TYPE_4__ {int led_active_high; int tx_gain_buffalo; } ;
struct ath_hw {TYPE_2__ config; int ah_flags; int disable_5ghz; int disable_2ghz; int external_reset; int get_mac_revision; int is_clk_25mhz; int led_pin; int gpio_val; int gpio_mask; } ;
struct ath_common {int macaddr; } ;
struct ath9k_platform_data {scalar_t__ macaddr; scalar_t__ tx_gain_buffalo; scalar_t__ led_active_high; scalar_t__ eeprom_name; int endian_check; int disable_5ghz; int disable_2ghz; int external_reset; int get_mac_revision; int is_clk_25mhz; int led_pin; int gpio_val; int gpio_mask; int use_eeprom; } ;
struct TYPE_3__ {struct ath9k_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_softc*,scalar_t__) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ath_softc *VAR_2)
{
 struct ath9k_platform_data *VAR_3 = VAR_2->dev->platform_data;
 struct ath_hw *VAR_4 = VAR_2->sc_ah;
 struct ath_common *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (!VAR_3)
  return 0;

 if (!VAR_3->use_eeprom) {
  VAR_4->ah_flags &= ~VAR_1;
  VAR_4->gpio_mask = VAR_3->gpio_mask;
  VAR_4->gpio_val = VAR_3->gpio_val;
  VAR_4->led_pin = VAR_3->led_pin;
  VAR_4->is_clk_25mhz = VAR_3->is_clk_25mhz;
  VAR_4->get_mac_revision = VAR_3->get_mac_revision;
  VAR_4->external_reset = VAR_3->external_reset;
  VAR_4->disable_2ghz = VAR_3->disable_2ghz;
  VAR_4->disable_5ghz = VAR_3->disable_5ghz;

  if (!VAR_3->endian_check)
   VAR_4->ah_flags |= VAR_0;
 }

 if (VAR_3->eeprom_name) {
  VAR_6 = FUNC_0(VAR_2, VAR_3->eeprom_name);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_3->led_active_high)
  VAR_4->config.led_active_high = 1;

 if (VAR_3->tx_gain_buffalo)
  VAR_4->config.tx_gain_buffalo = 1;

 if (VAR_3->macaddr)
  FUNC_2(VAR_5->macaddr, VAR_3->macaddr);

 return 0;
}
