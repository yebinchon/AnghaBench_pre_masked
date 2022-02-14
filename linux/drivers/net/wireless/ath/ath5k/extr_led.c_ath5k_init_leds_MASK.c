
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;
struct ieee80211_hw {int wiphy; } ;
struct ath5k_hw {int tx_led; int rx_led; int status; int led_on; int led_pin; struct pci_dev* pdev; struct ieee80211_hw* hw; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int *,char*,int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct pci_device_id* FUNC_7 (int *,struct pci_dev*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (int ) ;

int FUNC_11(struct ath5k_hw *VAR_3)
{
 int VAR_4 = 0;
 struct ieee80211_hw *VAR_5 = VAR_3->hw;

 struct pci_dev *VAR_6 = VAR_3->pdev;

 char VAR_7[VAR_0 + 1];
 const struct pci_device_id *VAR_8;

 if (!VAR_3->pdev)
  return 0;




 VAR_8 = FUNC_7(&VAR_2[0], VAR_6);

 if (VAR_8) {
  FUNC_2(VAR_1, VAR_3->status);
  VAR_3->led_pin = FUNC_0(VAR_8->driver_data);
  VAR_3->led_on = FUNC_1(VAR_8->driver_data);
 }

 if (!FUNC_9(VAR_1, VAR_3->status))
  goto out;

 FUNC_3(VAR_3);

 FUNC_8(VAR_7, sizeof(VAR_7), "ath5k-%s::rx", FUNC_10(VAR_5->wiphy));
 VAR_4 = FUNC_4(VAR_3, &VAR_3->rx_led, VAR_7,
  FUNC_5(VAR_5));
 if (VAR_4)
  goto out;

 FUNC_8(VAR_7, sizeof(VAR_7), "ath5k-%s::tx", FUNC_10(VAR_5->wiphy));
 VAR_4 = FUNC_4(VAR_3, &VAR_3->tx_led, VAR_7,
  FUNC_6(VAR_5));
out:
 return VAR_4;
}
