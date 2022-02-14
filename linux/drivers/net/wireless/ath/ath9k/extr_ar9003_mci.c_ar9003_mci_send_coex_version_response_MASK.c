
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {int wlan_ver_minor; int wlan_ver_major; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_5,
        bool VAR_6)
{
 struct ath9k_hw_mci *VAR_7 = &VAR_5->btcoex_hw.mci;
 u32 VAR_8[4] = {0, 0, 0, 0};

 FUNC_0(VAR_8, VAR_1,
    VAR_4);
 *(((u8 *)VAR_8) + VAR_2) =
  VAR_7->wlan_ver_major;
 *(((u8 *)VAR_8) + VAR_3) =
  VAR_7->wlan_ver_minor;
 FUNC_1(VAR_5, VAR_0, 0, VAR_8, 16, VAR_6, 1);
}
