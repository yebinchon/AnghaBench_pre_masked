
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ath9k_hw_mci {int bt_version_known; int wlan_channels_update; int query_bt; scalar_t__ bt_ver_minor; scalar_t__ bt_ver_major; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct ath_hw*,int) ;
 int FUNC_1 (struct ath_hw*,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_5, u8 VAR_6,
      u8 VAR_7, u32 *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_2(VAR_5);
 struct ath9k_hw_mci *VAR_10 = &VAR_5->btcoex_hw.mci;
 u8 *VAR_11 = (u8 *) VAR_8;

 if (VAR_6 != VAR_1)
  return;

 switch (VAR_7) {
 case 129:
  FUNC_3(VAR_9, VAR_0, "MCI Recv GPM COEX Version Query\n");
  FUNC_0(VAR_5, 1);
  break;
 case 128:
  FUNC_3(VAR_9, VAR_0, "MCI Recv GPM COEX Version Response\n");
  VAR_10->bt_ver_major =
   *(VAR_11 + VAR_2);
  VAR_10->bt_ver_minor =
   *(VAR_11 + VAR_3);
  VAR_10->bt_version_known = 1;
  FUNC_3(VAR_9, VAR_0, "MCI BT Coex version: %d.%d\n",
   VAR_10->bt_ver_major, VAR_10->bt_ver_minor);
  break;
 case 130:
  FUNC_3(VAR_9, VAR_0,
   "MCI Recv GPM COEX Status Query = 0x%02X\n",
   *(VAR_11 + VAR_4));
  VAR_10->wlan_channels_update = 1;
  FUNC_1(VAR_5, 1);
  break;
 case 132:
  VAR_10->query_bt = 1;
  FUNC_3(VAR_9, VAR_0, "MCI Recv GPM COEX BT_Profile_Info\n");
  break;
 case 131:
  VAR_10->query_bt = 1;
  FUNC_3(VAR_9, VAR_0,
   "MCI Recv GPM COEX BT_Status_Update SEQ=%d (drop&query)\n",
   *(VAR_8 + 3));
  break;
 default:
  break;
 }
}
