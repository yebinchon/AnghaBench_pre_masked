
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {scalar_t__ cooling_method_supported; scalar_t__ wwan_supported; scalar_t__ usb_three_supported; scalar_t__ panel_power_on_supported; scalar_t__ kbd_function_keys_supported; scalar_t__ usb_sleep_music_supported; scalar_t__ usb_rapid_charge_supported; scalar_t__ usb_sleep_charge_supported; scalar_t__ accelerometer_supported; scalar_t__ eco_supported; scalar_t__ touchpad_supported; scalar_t__ kbd_illum_supported; scalar_t__ illumination_supported; scalar_t__ tr_backlight_supported; scalar_t__ fan_supported; scalar_t__ video_supported; scalar_t__ backlight_dev; scalar_t__ hotkey_dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct toshiba_acpi_dev *VAR_0)
{
 FUNC_1("Supported laptop features:");

 if (VAR_0->hotkey_dev)
  FUNC_0(" hotkeys");
 if (VAR_0->backlight_dev)
  FUNC_0(" backlight");
 if (VAR_0->video_supported)
  FUNC_0(" video-out");
 if (VAR_0->fan_supported)
  FUNC_0(" fan");
 if (VAR_0->tr_backlight_supported)
  FUNC_0(" transflective-backlight");
 if (VAR_0->illumination_supported)
  FUNC_0(" illumination");
 if (VAR_0->kbd_illum_supported)
  FUNC_0(" keyboard-backlight");
 if (VAR_0->touchpad_supported)
  FUNC_0(" touchpad");
 if (VAR_0->eco_supported)
  FUNC_0(" eco-led");
 if (VAR_0->accelerometer_supported)
  FUNC_0(" accelerometer-axes");
 if (VAR_0->usb_sleep_charge_supported)
  FUNC_0(" usb-sleep-charge");
 if (VAR_0->usb_rapid_charge_supported)
  FUNC_0(" usb-rapid-charge");
 if (VAR_0->usb_sleep_music_supported)
  FUNC_0(" usb-sleep-music");
 if (VAR_0->kbd_function_keys_supported)
  FUNC_0(" special-function-keys");
 if (VAR_0->panel_power_on_supported)
  FUNC_0(" panel-power-on");
 if (VAR_0->usb_three_supported)
  FUNC_0(" usb3");
 if (VAR_0->wwan_supported)
  FUNC_0(" wwan");
 if (VAR_0->cooling_method_supported)
  FUNC_0(" cooling-method");

 FUNC_0("\n");
}
