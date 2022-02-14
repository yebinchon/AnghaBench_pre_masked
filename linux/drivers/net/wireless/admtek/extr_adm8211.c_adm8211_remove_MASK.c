
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int rx_ring_size; int tx_ring_size; int map; int eeprom; int rx_buffers; int rx_ring_dma; int rx_ring; } ;
struct adm8211_desc {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int,int ,int ) ;
 struct ieee80211_hw* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_5(VAR_0);
 struct adm8211_priv *VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1);

 VAR_2 = VAR_1->priv;

 FUNC_4(VAR_0,
       sizeof(struct adm8211_desc) * VAR_2->rx_ring_size +
       sizeof(struct adm8211_desc) * VAR_2->tx_ring_size,
       VAR_2->rx_ring, VAR_2->rx_ring_dma);

 FUNC_2(VAR_2->rx_buffers);
 FUNC_2(VAR_2->eeprom);
 FUNC_6(VAR_0, VAR_2->map);
 FUNC_7(VAR_0);
 FUNC_3(VAR_0);
 FUNC_0(VAR_1);
}
