
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tx_pkt_status {int dummy; } ;
struct rx_desc {int dummy; } ;
struct pci_dev {int dummy; } ;
struct atl2_adapter {int ring_size; int txd_ring_size; int txs_ring_size; int rxd_ring_size; int ring_dma; int txd_dma; int txs_dma; int rxd_dma; struct tx_pkt_status* txs_ring; struct rx_desc* rxd_ring; scalar_t__ txd_ring; int ring_vir_addr; struct pci_dev* pdev; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;

__attribute__((used)) static s32 FUNC_1(struct atl2_adapter *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;
 u8 VAR_4 = 0;


 VAR_1->ring_size = VAR_3 =
  VAR_1->txd_ring_size * 1 + 7 +
  VAR_1->txs_ring_size * 4 + 7 +
  VAR_1->rxd_ring_size * 1536 + 127;

 VAR_1->ring_vir_addr = FUNC_0(VAR_2, VAR_3,
  &VAR_1->ring_dma);
 if (!VAR_1->ring_vir_addr)
  return -VAR_0;


 VAR_1->txd_dma = VAR_1->ring_dma ;
 VAR_4 = (VAR_1->txd_dma & 0x7) ? (8 - (VAR_1->txd_dma & 0x7)) : 0;
 VAR_1->txd_dma += VAR_4;
 VAR_1->txd_ring = VAR_1->ring_vir_addr + VAR_4;


 VAR_1->txs_dma = VAR_1->txd_dma + VAR_1->txd_ring_size;
 VAR_4 = (VAR_1->txs_dma & 0x7) ? (8 - (VAR_1->txs_dma & 0x7)) : 0;
 VAR_1->txs_dma += VAR_4;
 VAR_1->txs_ring = (struct tx_pkt_status *)
  (((u8 *)VAR_1->txd_ring) + (VAR_1->txd_ring_size + VAR_4));


 VAR_1->rxd_dma = VAR_1->txs_dma + VAR_1->txs_ring_size * 4;
 VAR_4 = (VAR_1->rxd_dma & 127) ?
  (128 - (VAR_1->rxd_dma & 127)) : 0;
 if (VAR_4 > 7)
  VAR_4 -= 8;
 else
  VAR_4 += (128 - 8);

 VAR_1->rxd_dma += VAR_4;
 VAR_1->rxd_ring = (struct rx_desc *) (((u8 *)VAR_1->txs_ring) +
  (VAR_1->txs_ring_size * 4 + VAR_4));





 return 0;
}
