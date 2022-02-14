
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct rtl_pci_priv {int dummy; } ;
struct rtl_pci {int using_msi; TYPE_1__* pdev; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int,int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int ,int ,struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_2 (struct rtl_pci_priv*) ;
 struct rtl_pci_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_4(VAR_6);
 struct rtl_pci_priv *VAR_8 = FUNC_3(VAR_6);
 struct rtl_pci *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9->pdev->irq, &VAR_5,
     VAR_3, VAR_4, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->using_msi = 0;
 FUNC_0(VAR_7, VAR_0 | VAR_1, VAR_2,
   "Pin-based Interrupt Mode!\n");
 return 0;
}
