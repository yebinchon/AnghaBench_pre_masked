
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {int dummy; } ;
struct rtw_dev {scalar_t__ priv; } ;
struct pci_dev {int dummy; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_4 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_5 (struct rtw_dev*,struct rtw_pci*) ;
 int FUNC_6 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_7 (struct rtw_dev*,struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_1(VAR_0);
 struct rtw_dev *VAR_2;
 struct rtw_pci *VAR_3;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->priv;
 VAR_3 = (struct rtw_pci *)VAR_2->priv;

 FUNC_7(VAR_2, VAR_1);
 FUNC_5(VAR_2, VAR_3);
 FUNC_4(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_0);
 FUNC_6(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 FUNC_0(VAR_1);
}
