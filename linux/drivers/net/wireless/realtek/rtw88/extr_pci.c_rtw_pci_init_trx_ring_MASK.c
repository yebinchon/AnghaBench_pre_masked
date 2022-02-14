
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_pci_tx_ring {int dummy; } ;
struct rtw_pci_rx_ring {int dummy; } ;
struct rtw_pci {struct rtw_pci_rx_ring* rx_rings; struct rtw_pci_tx_ring* tx_rings; } ;
struct rtw_dev {struct rtw_chip_info* chip; scalar_t__ priv; } ;
struct rtw_chip_info {int tx_buf_desc_sz; int rx_buf_desc_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_pci_rx_ring*) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_pci_tx_ring*) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_pci_rx_ring*,int,int ) ;
 int FUNC_4 (struct rtw_dev*,struct rtw_pci_tx_ring*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_3)
{
 struct rtw_pci *VAR_4 = (struct rtw_pci *)VAR_3->priv;
 struct rtw_pci_tx_ring *VAR_5;
 struct rtw_pci_rx_ring *VAR_6;
 struct rtw_chip_info *VAR_7 = VAR_3->chip;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_12 = VAR_7->tx_buf_desc_sz;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5 = &VAR_4->tx_rings[VAR_8];
  VAR_14 = FUNC_0(VAR_8);
  VAR_15 = FUNC_4(VAR_3, VAR_5, VAR_12, VAR_14);
  if (VAR_15)
   goto out;
 }

 VAR_13 = VAR_7->rx_buf_desc_sz;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_6 = &VAR_4->rx_rings[VAR_9];
  VAR_15 = FUNC_3(VAR_3, VAR_6, VAR_13,
        VAR_0);
  if (VAR_15)
   goto out;
 }

 return 0;

out:
 VAR_10 = VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_5 = &VAR_4->tx_rings[VAR_8];
  FUNC_2(VAR_3, VAR_5);
 }

 VAR_11 = VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_6 = &VAR_4->rx_rings[VAR_9];
  FUNC_1(VAR_3, VAR_6);
 }

 return VAR_15;
}
