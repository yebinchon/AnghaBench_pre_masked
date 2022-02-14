
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_pci {int pdev; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 struct rtl_pci* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct rtl_pci *VAR_1 = FUNC_2(FUNC_3(VAR_0));
 u32 VAR_2;

 FUNC_0(VAR_1->pdev, 0x40, &VAR_2);
 if ((VAR_2 & 0x0000ff00) != 0)
  FUNC_1(VAR_1->pdev, 0x40,
   VAR_2 & 0xffff00ff);
}
