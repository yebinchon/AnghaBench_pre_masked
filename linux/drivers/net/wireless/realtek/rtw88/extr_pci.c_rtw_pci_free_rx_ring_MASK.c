
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int desc_size; int len; int dma; int * head; } ;
struct rtw_pci_rx_ring {TYPE_1__ r; } ;
struct rtw_dev {int dev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int *,int ) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_pci_rx_ring*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_0,
     struct rtw_pci_rx_ring *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_2(VAR_0->dev);
 u8 *VAR_3 = VAR_1->r.head;
 int VAR_4 = VAR_1->r.desc_size * VAR_1->r.len;

 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_2, VAR_4, VAR_3, VAR_1->r.dma);
}
