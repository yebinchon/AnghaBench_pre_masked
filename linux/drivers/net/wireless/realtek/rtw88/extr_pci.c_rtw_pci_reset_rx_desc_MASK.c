
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ cb; int data; } ;
struct TYPE_2__ {scalar_t__ head; } ;
struct rtw_pci_rx_ring {TYPE_1__ r; } ;
struct rtw_pci_rx_buffer_desc {int dma; int buf_size; } ;
struct rtw_dev {int dev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtw_pci_rx_buffer_desc*,int ,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int,int ) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rtw_dev *VAR_4, struct sk_buff *VAR_5,
     struct rtw_pci_rx_ring *VAR_6,
     u32 VAR_7, u32 VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_5(VAR_4->dev);
 struct rtw_pci_rx_buffer_desc *VAR_10;
 int VAR_11 = VAR_3;
 dma_addr_t VAR_12;

 if (!VAR_5)
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_9, VAR_5->data, VAR_11, VAR_2);
 if (FUNC_3(VAR_9, VAR_12))
  return -VAR_0;

 *((dma_addr_t *)VAR_5->cb) = VAR_12;
 VAR_10 = (struct rtw_pci_rx_buffer_desc *)(VAR_6->r.head +
           VAR_7 * VAR_8);
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->buf_size = FUNC_0(VAR_3);
 VAR_10->dma = FUNC_1(VAR_12);

 return 0;
}
