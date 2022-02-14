
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct atl1e_tx_ring {int dma; int count; int cmb_dma; int cmb; int * tx_buffer; int desc; } ;
struct atl1e_tx_buffer {int dummy; } ;
struct atl1e_tpd_desc {int dummy; } ;
struct atl1e_rx_ring {scalar_t__ real_page_size; struct atl1e_rx_page_desc* rx_page_desc; } ;
struct atl1e_rx_page_desc {TYPE_1__* rx_page; } ;
struct atl1e_adapter {int ring_size; int ring_dma; int num_rx_queues; int * ring_vir_addr; int netdev; struct atl1e_rx_ring rx_ring; struct atl1e_tx_ring tx_ring; struct pci_dev* pdev; } ;
struct TYPE_2__ {int dma; int write_offset_dma; int write_offset_addr; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct pci_dev*,int,int *,int) ;
 int * FUNC_3 (struct pci_dev*,int,int*) ;
 void* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct atl1e_adapter *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct atl1e_tx_ring *VAR_5;
 struct atl1e_rx_ring *VAR_6;
 struct atl1e_rx_page_desc *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_3->ring_vir_addr != ((void*)0))
  return 0;

 VAR_5 = &VAR_3->tx_ring;
 VAR_6 = &VAR_3->rx_ring;



 VAR_8 = VAR_3->ring_size;
 VAR_3->ring_vir_addr = FUNC_3(VAR_4, VAR_3->ring_size,
             &VAR_3->ring_dma);
 if (VAR_3->ring_vir_addr == ((void*)0)) {
  FUNC_1(VAR_3->netdev,
      "pci_alloc_consistent failed, size = D%d\n", VAR_8);
  return -VAR_1;
 }

 VAR_7 = VAR_6->rx_page_desc;


 VAR_5->dma = FUNC_4(VAR_3->ring_dma, 8);
 VAR_11 = VAR_5->dma - VAR_3->ring_dma;
 VAR_5->desc = *(VAR_3->ring_vir_addr + VAR_11);
 VAR_8 = sizeof(struct atl1e_tx_buffer) * (VAR_5->count);
 VAR_5->tx_buffer = FUNC_0(VAR_8, VAR_2);
 if (VAR_5->tx_buffer == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto failed;
 }


 VAR_11 += (sizeof(struct atl1e_tpd_desc) * VAR_5->count);
 VAR_11 = FUNC_4(VAR_11, 32);

 for (VAR_9 = 0; VAR_9 < VAR_3->num_rx_queues; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_7[VAR_9].rx_page[VAR_10].dma =
    VAR_3->ring_dma + VAR_11;
   VAR_7[VAR_9].rx_page[VAR_10].addr =
    *(VAR_3->ring_vir_addr + VAR_11);
   VAR_11 += VAR_6->real_page_size;
  }
 }


 VAR_5->cmb_dma = VAR_3->ring_dma + VAR_11;
 VAR_5->cmb = *(VAR_3->ring_vir_addr + VAR_11);
 VAR_11 += sizeof(u32);

 for (VAR_9 = 0; VAR_9 < VAR_3->num_rx_queues; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_7[VAR_9].rx_page[VAR_10].write_offset_dma =
    VAR_3->ring_dma + VAR_11;
   VAR_7[VAR_9].rx_page[VAR_10].write_offset_addr =
    *(VAR_3->ring_vir_addr + VAR_11);
   VAR_11 += sizeof(u32);
  }
 }

 if (FUNC_5(VAR_11 > VAR_3->ring_size)) {
  FUNC_1(VAR_3->netdev, "offset(%d) > ring size(%d) !!\n",
      VAR_11, VAR_3->ring_size);
  VAR_12 = -1;
  goto failed;
 }

 return 0;
failed:
 if (VAR_3->ring_vir_addr != ((void*)0)) {
  FUNC_2(VAR_4, VAR_3->ring_size,
    VAR_3->ring_vir_addr, VAR_3->ring_dma);
  VAR_3->ring_vir_addr = ((void*)0);
 }
 return VAR_12;
}
