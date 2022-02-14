
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_pci_tx_ring {int dummy; } ;
struct rtw_pci {struct rtw_pci_tx_ring* tx_rings; } ;
struct rtw_dev {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct rtw_dev*,struct rtw_pci_tx_ring*) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_1, struct rtw_pci *VAR_2)
{
 struct rtw_pci_tx_ring *VAR_3;
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->tx_rings[VAR_4];
  FUNC_0(VAR_1, VAR_3);
 }
}
