
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ head; } ;
struct rtw_pci_rx_ring {TYPE_1__ r; } ;
struct rtw_pci_rx_buffer_desc {int dma; int buf_size; } ;
struct rtw_dev {struct device* dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 (struct rtw_pci_rx_buffer_desc*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_2, dma_addr_t VAR_3,
     struct rtw_pci_rx_ring *VAR_4,
     u32 VAR_5, u32 VAR_6)
{
 struct device *VAR_7 = VAR_2->dev;
 struct rtw_pci_rx_buffer_desc *VAR_8;
 int VAR_9 = VAR_1;

 FUNC_2(VAR_7, VAR_3, VAR_9, VAR_0);

 VAR_8 = (struct rtw_pci_rx_buffer_desc *)(VAR_4->r.head +
           VAR_5 * VAR_6);
 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->buf_size = FUNC_0(VAR_1);
 VAR_8->dma = FUNC_1(VAR_3);
}
