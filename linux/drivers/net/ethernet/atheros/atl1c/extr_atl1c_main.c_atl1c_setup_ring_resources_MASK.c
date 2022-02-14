
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct atl1c_tpd_ring {int count; int dma; int size; scalar_t__ buffer_info; int * desc; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_rx_free_desc {int dummy; } ;
struct atl1c_rrd_ring {int count; int dma; int size; int * desc; } ;
struct atl1c_ring_header {int size; int dma; scalar_t__ desc; } ;
struct atl1c_rfd_ring {int count; int dma; int size; int * desc; scalar_t__ buffer_info; } ;
struct atl1c_recv_ret_status {int dummy; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {struct atl1c_ring_header ring_header; struct atl1c_rrd_ring rrd_ring; struct atl1c_rfd_ring rfd_ring; struct atl1c_tpd_ring* tpd_ring; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int,int*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct atl1c_adapter *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct atl1c_tpd_ring *VAR_5 = VAR_3->tpd_ring;
 struct atl1c_rfd_ring *VAR_6 = &VAR_3->rfd_ring;
 struct atl1c_rrd_ring *VAR_7 = &VAR_3->rrd_ring;
 struct atl1c_ring_header *VAR_8 = &VAR_3->ring_header;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 u32 VAR_13 = 0;

 VAR_7->count = VAR_6->count;
 for (VAR_10 = 1; VAR_10 < VAR_0; VAR_10++)
  VAR_5[VAR_10].count = VAR_5[0].count;



 VAR_9 = sizeof(struct atl1c_buffer) * (VAR_5->count * 2 +
  VAR_6->count);
 VAR_5->buffer_info = FUNC_3(VAR_9, VAR_2);
 if (FUNC_5(!VAR_5->buffer_info))
  goto err_nomem;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_5[VAR_10].buffer_info =
   (VAR_5->buffer_info + VAR_11);
  VAR_11 += VAR_5[VAR_10].count;
 }

 VAR_6->buffer_info =
  (VAR_5->buffer_info + VAR_11);
 VAR_11 += VAR_6->count;
 VAR_12 += VAR_6->count;






 VAR_8->size = VAR_9 =
  sizeof(struct atl1c_tpd_desc) * VAR_5->count * 2 +
  sizeof(struct atl1c_rx_free_desc) * VAR_12 +
  sizeof(struct atl1c_recv_ret_status) * VAR_12 +
  8 * 4;

 VAR_8->desc = FUNC_1(&VAR_4->dev, VAR_8->size,
            &VAR_8->dma, VAR_2);
 if (FUNC_5(!VAR_8->desc)) {
  FUNC_0(&VAR_4->dev, "could not get memory for DMA buffer\n");
  goto err_nomem;
 }


 VAR_5[0].dma = FUNC_4(VAR_8->dma, 8);
 VAR_13 = VAR_5[0].dma - VAR_8->dma;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_5[VAR_10].dma = VAR_8->dma + VAR_13;
  VAR_5[VAR_10].desc = (u8 *) VAR_8->desc + VAR_13;
  VAR_5[VAR_10].size =
   sizeof(struct atl1c_tpd_desc) * VAR_5[VAR_10].count;
  VAR_13 += FUNC_4(VAR_5[VAR_10].size, 8);
 }

 VAR_6->dma = VAR_8->dma + VAR_13;
 VAR_6->desc = (u8 *) VAR_8->desc + VAR_13;
 VAR_6->size = sizeof(struct atl1c_rx_free_desc) * VAR_6->count;
 VAR_13 += FUNC_4(VAR_6->size, 8);


 VAR_7->dma = VAR_8->dma + VAR_13;
 VAR_7->desc = (u8 *) VAR_8->desc + VAR_13;
 VAR_7->size = sizeof(struct atl1c_recv_ret_status) *
  VAR_7->count;
 VAR_13 += FUNC_4(VAR_7->size, 8);

 return 0;

err_nomem:
 FUNC_2(VAR_5->buffer_info);
 return -VAR_1;
}
