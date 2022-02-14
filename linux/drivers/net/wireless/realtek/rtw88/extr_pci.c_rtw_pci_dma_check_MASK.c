
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ head; } ;
struct rtw_pci_rx_ring {TYPE_1__ r; } ;
struct rtw_pci_rx_buffer_desc {int total_pkt_size; } ;
struct rtw_pci {int rx_tag; } ;
struct rtw_dev {struct rtw_chip_info* chip; scalar_t__ priv; } ;
struct rtw_chip_info {int rx_buf_desc_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtw_dev*,char*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_1,
         struct rtw_pci_rx_ring *VAR_2,
         u32 VAR_3)
{
 struct rtw_pci *VAR_4 = (struct rtw_pci *)VAR_1->priv;
 struct rtw_chip_info *VAR_5 = VAR_1->chip;
 struct rtw_pci_rx_buffer_desc *VAR_6;
 u32 VAR_7 = VAR_5->rx_buf_desc_sz;
 u16 VAR_8;

 VAR_6 = (struct rtw_pci_rx_buffer_desc *)(VAR_2->r.head +
           VAR_3 * VAR_7);
 VAR_8 = FUNC_0(VAR_6->total_pkt_size);


 if (VAR_8 != VAR_4->rx_tag)
  FUNC_1(VAR_1, "pci bus timeout, check dma status\n");

 VAR_4->rx_tag = (VAR_4->rx_tag + 1) % VAR_0;
}
