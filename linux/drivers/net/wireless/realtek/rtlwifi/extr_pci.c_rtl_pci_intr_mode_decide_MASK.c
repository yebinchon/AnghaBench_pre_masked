
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_pci_priv {int dummy; } ;
struct rtl_pci {scalar_t__ msi_support; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_2 (struct rtl_pci_priv*) ;
 struct rtl_pci_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct rtl_pci_priv *VAR_1 = FUNC_3(VAR_0);
 struct rtl_pci *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (VAR_2->msi_support) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 < 0)
   VAR_3 = FUNC_0(VAR_0);
 } else {
  VAR_3 = FUNC_0(VAR_0);
 }
 return VAR_3;
}
