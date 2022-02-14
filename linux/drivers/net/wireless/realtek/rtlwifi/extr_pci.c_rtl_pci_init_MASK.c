
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,struct pci_dev*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_0, struct pci_dev *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, VAR_1);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_2("tx ring initialization failed\n");
  return VAR_2;
 }

 return 0;
}
