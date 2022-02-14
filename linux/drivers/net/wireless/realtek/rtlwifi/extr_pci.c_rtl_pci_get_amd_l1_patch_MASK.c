
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_pci {int pdev; } ;
struct ieee80211_hw {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,unsigned int*) ;
 int FUNC_3 (int ,int,int) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_hw *VAR_0)
{
 struct rtl_pci *VAR_1 = FUNC_4(FUNC_5(VAR_0));

 bool VAR_2 = 0;
 u8 VAR_3;
 unsigned int VAR_4;

 FUNC_3(VAR_1->pdev, 0xe0, 0xa0);

 FUNC_1(VAR_1->pdev, 0xe0, &VAR_3);

 if (VAR_3 == 0xA0) {
  FUNC_2(VAR_1->pdev, 0xe4, &VAR_4);
  if (VAR_4 & FUNC_0(23))
   VAR_2 = 1;
 }

 return VAR_2;
}
