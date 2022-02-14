
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_pci {int pdev; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 struct rtl_hal* FUNC_1 (int ) ;
 struct rtl_pci* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_5(
   struct ieee80211_hw *VAR_1,
   u8 VAR_2)
{
 struct rtl_pci *VAR_3 = FUNC_2(FUNC_3(VAR_1));
 struct rtl_hal *VAR_4 = FUNC_1(FUNC_4(VAR_1));

 if (VAR_4->hw_type != VAR_0)
  VAR_2 |= 0x40;

 FUNC_0(VAR_3->pdev, 0x80, VAR_2);

 return 0;
}
