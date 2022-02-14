
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wl1251 {scalar_t__ mac_addr; scalar_t__ use_eeprom; int * nvs; TYPE_2__* hw; } ;
struct tx_double_buffer_desc {int dummy; } ;
struct TYPE_4__ {int queues; TYPE_1__* wiphy; scalar_t__ extra_tx_headroom; } ;
struct TYPE_3__ {int interface_modes; int max_scan_ssids; int ** bands; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int const*,int) ;
 int VAR_7 ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wl1251*) ;
 int FUNC_9 (struct wl1251*) ;
 int FUNC_10 (struct wl1251*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct wl1251*) ;

int FUNC_13(struct wl1251 *VAR_8)
{
 int VAR_9;


 VAR_8->hw->extra_tx_headroom = sizeof(struct tx_double_buffer_desc)
  + VAR_6;




 FUNC_2(VAR_8->hw, VAR_4);
 FUNC_2(VAR_8->hw, VAR_5);

 VAR_8->hw->wiphy->interface_modes = FUNC_0(VAR_3) |
      FUNC_0(VAR_2);
 VAR_8->hw->wiphy->max_scan_ssids = 1;
 VAR_8->hw->wiphy->bands[VAR_1] = &VAR_7;

 VAR_8->hw->queues = 4;

 if (VAR_8->nvs == ((void*)0) && !VAR_8->use_eeprom) {
  VAR_9 = FUNC_6(VAR_8);
  if (VAR_9 < 0)
   goto out;
 }

 if (VAR_8->use_eeprom)
  VAR_9 = FUNC_8(VAR_8);
 else
  VAR_9 = FUNC_9(VAR_8);

 if (VAR_9 == 0 && !FUNC_3(VAR_8->mac_addr))
  VAR_9 = -VAR_0;

 if (VAR_9 < 0) {




  static const u8 VAR_10[3] = {0x00, 0x1f, 0xdf};
  FUNC_4(VAR_8->mac_addr, VAR_10, 3);
  FUNC_1(VAR_8->mac_addr + 3, 3);
  if (!VAR_8->use_eeprom)
   FUNC_12(VAR_8);
  FUNC_11("MAC address in eeprom or nvs data is not valid");
  FUNC_11("Setting random MAC address: %pM", VAR_8->mac_addr);
 }

 VAR_9 = FUNC_10(VAR_8);
 if (VAR_9)
  goto out;

 FUNC_5(VAR_8);
 FUNC_7("initialized");

 VAR_9 = 0;

out:
 return VAR_9;
}
