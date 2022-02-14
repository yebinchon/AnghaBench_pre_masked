
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct TYPE_2__ {int len; } ;
struct rtw_pci_rx_ring {struct sk_buff** buf; TYPE_1__ r; } ;
struct rtw_dev {int dev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct pci_dev*,int ,int,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_2,
          struct rtw_pci_rx_ring *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->dev);
 struct sk_buff *VAR_5;
 int VAR_6 = VAR_1;
 dma_addr_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->r.len; VAR_8++) {
  VAR_5 = VAR_3->buf[VAR_8];
  if (!VAR_5)
   continue;

  VAR_7 = *((dma_addr_t *)VAR_5->cb);
  FUNC_1(VAR_4, VAR_7, VAR_6, VAR_0);
  FUNC_0(VAR_5);
  VAR_3->buf[VAR_8] = ((void*)0);
 }
}
