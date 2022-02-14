
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_pci {int dummy; } ;
struct TYPE_2__ {int type; int * ops; } ;
struct rtw_dev {TYPE_1__ hci; struct rtw_chip_info* chip; int * dev; struct ieee80211_hw* hw; } ;
struct rtw_chip_info {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int revision; int device; int vendor; int dev; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct ieee80211_hw* FUNC_1 (int,int *) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*) ;
 int FUNC_7 (struct rtw_dev*,int ,char*,int ,int ,int ) ;
 int FUNC_8 (struct rtw_dev*,char*) ;
 int VAR_3 ;
 int FUNC_9 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_10 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_11 (struct rtw_dev*,struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_12 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_13 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_14 (struct rtw_dev*,struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_5,
    const struct pci_device_id *VAR_6)
{
 struct ieee80211_hw *VAR_7;
 struct rtw_dev *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = sizeof(struct rtw_dev) + sizeof(struct rtw_pci);
 VAR_7 = FUNC_1(VAR_9, &VAR_3);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "failed to allocate hw\n");
  return -VAR_0;
 }

 VAR_8 = VAR_7->priv;
 VAR_8->hw = VAR_7;
 VAR_8->dev = &VAR_5->dev;
 VAR_8->chip = (struct rtw_chip_info *)VAR_6->driver_data;
 VAR_8->hci.ops = &VAR_4;
 VAR_8->hci.type = VAR_2;

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  goto err_release_hw;

 FUNC_7(VAR_8, VAR_1,
  "rtw88 pci probe: vendor=0x%4.04X device=0x%4.04X rev=%d\n",
  VAR_5->vendor, VAR_5->device, VAR_5->revision);

 VAR_10 = FUNC_9(VAR_8, VAR_5);
 if (VAR_10) {
  FUNC_8(VAR_8, "failed to claim pci device\n");
  goto err_deinit_core;
 }

 VAR_10 = FUNC_13(VAR_8, VAR_5);
 if (VAR_10) {
  FUNC_8(VAR_8, "failed to setup pci resources\n");
  goto err_pci_declaim;
 }

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10) {
  FUNC_8(VAR_8, "failed to setup chip information\n");
  goto err_destroy_pci;
 }

 VAR_10 = FUNC_14(VAR_8, VAR_7);
 if (VAR_10) {
  FUNC_8(VAR_8, "failed to register hw\n");
  goto err_destroy_pci;
 }

 VAR_10 = FUNC_12(VAR_8, VAR_5);
 if (VAR_10) {
  FUNC_3(VAR_7);
  goto err_destroy_pci;
 }

 return 0;

err_destroy_pci:
 FUNC_11(VAR_8, VAR_5);

err_pci_declaim:
 FUNC_10(VAR_8, VAR_5);

err_deinit_core:
 FUNC_5(VAR_8);

err_release_hw:
 FUNC_2(VAR_7);

 return VAR_10;
}
