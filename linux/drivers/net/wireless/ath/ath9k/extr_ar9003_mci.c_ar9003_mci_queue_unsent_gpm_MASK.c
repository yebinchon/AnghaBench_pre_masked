
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ath9k_hw_mci {int update_2g5g; int wlan_channels_update; int unhalt_bt_gpm; int halted_bt_gpm; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_7, u8 VAR_8,
     u32 *VAR_9, bool VAR_10)
{
 struct ath9k_hw_mci *VAR_11 = &VAR_7->btcoex_hw.mci;
 u8 VAR_12, VAR_13;


 if (VAR_8 != VAR_0)
  return;

 VAR_12 = FUNC_1(VAR_9);
 VAR_13 = FUNC_0(VAR_9);

 if (VAR_12 != VAR_1)
  return;

 switch (VAR_13) {
 case 130:
  if (*(((u8 *)VAR_9) + VAR_5) ==
      VAR_2)
   break;

  VAR_11->update_2g5g = VAR_10;

  break;
 case 128:
  VAR_11->wlan_channels_update = VAR_10;
  break;
 case 129:
  if (*(((u8 *)VAR_9) + VAR_6) ==
      VAR_4) {
   VAR_11->unhalt_bt_gpm = VAR_10;

   if (!VAR_10)
    VAR_11->halted_bt_gpm = 0;
  }

  if (*(((u8 *)VAR_9) + VAR_6) ==
    VAR_3) {

   VAR_11->halted_bt_gpm = !VAR_10;
  }

  break;
 default:
  break;
 }
}
