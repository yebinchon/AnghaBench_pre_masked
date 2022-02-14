
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct ath9k_hw_mci {int bt_version_known; void* bt_ver_minor; void* bt_ver_major; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,int ,char*,void*,void*) ;

void FUNC_2(struct ath_hw *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ath9k_hw_mci *VAR_4 = &VAR_1->btcoex_hw.mci;

 VAR_4->bt_ver_major = VAR_2;
 VAR_4->bt_ver_minor = VAR_3;
 VAR_4->bt_version_known = 1;
 FUNC_1(FUNC_0(VAR_1), VAR_0, "MCI BT version set: %d.%d\n",
  VAR_4->bt_ver_major, VAR_4->bt_ver_minor);
}
