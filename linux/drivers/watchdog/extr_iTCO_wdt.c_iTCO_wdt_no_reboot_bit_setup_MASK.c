
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itco_wdt_platform_data {struct iTCO_wdt_private* no_reboot_priv; scalar_t__ update_no_reboot_bit; } ;
struct iTCO_wdt_private {int iTCO_version; struct iTCO_wdt_private* no_reboot_priv; scalar_t__ update_no_reboot_bit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct iTCO_wdt_private *VAR_4,
  struct itco_wdt_platform_data *VAR_5)
{
 if (VAR_5->update_no_reboot_bit) {
  VAR_4->update_no_reboot_bit = VAR_5->update_no_reboot_bit;
  VAR_4->no_reboot_priv = VAR_5->no_reboot_priv;
  return;
 }

 if (VAR_4->iTCO_version >= 6)
  VAR_4->update_no_reboot_bit = VAR_0;
 else if (VAR_4->iTCO_version >= 2)
  VAR_4->update_no_reboot_bit = VAR_2;
 else if (VAR_4->iTCO_version == 1)
  VAR_4->update_no_reboot_bit = VAR_3;
 else
  VAR_4->update_no_reboot_bit = VAR_1;

 VAR_4->no_reboot_priv = VAR_4;
}
