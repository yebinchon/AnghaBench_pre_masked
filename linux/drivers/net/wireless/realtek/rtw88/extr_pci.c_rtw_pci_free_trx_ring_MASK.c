
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci_tx_ring {int dummy; } ;
struct rtw_pci_rx_ring {int dummy; } ;
struct rtw_pci {struct rtw_pci_rx_ring* rx_rings; struct rtw_pci_tx_ring* tx_rings; } ;
struct rtw_dev {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,struct rtw_pci_rx_ring*) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_pci_tx_ring*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_2)
{
 struct rtw_pci *VAR_3 = (struct rtw_pci *)VAR_2->priv;
 struct rtw_pci_tx_ring *VAR_4;
 struct rtw_pci_rx_ring *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = &VAR_3->tx_rings[VAR_6];
  FUNC_1(VAR_2, VAR_4);
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_3->rx_rings[VAR_6];
  FUNC_0(VAR_2, VAR_5);
 }
}
