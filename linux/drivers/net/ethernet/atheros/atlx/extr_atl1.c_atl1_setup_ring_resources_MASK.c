
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tx_packet_desc {int dummy; } ;
struct stats_msg_block {int dummy; } ;
struct rx_return_desc {int dummy; } ;
struct rx_free_desc {int dummy; } ;
struct pci_dev {int dev; } ;
struct coals_msg_block {int dummy; } ;
struct atl1_tpd_ring {int count; int dma; int* desc; int size; scalar_t__ buffer_info; } ;
struct atl1_rrd_ring {int count; int dma; int* desc; int size; } ;
struct atl1_ring_header {int size; int dma; scalar_t__ desc; } ;
struct atl1_rfd_ring {int count; int dma; int* desc; int size; scalar_t__ buffer_info; } ;
struct atl1_buffer {int dummy; } ;
struct TYPE_4__ {int dma; struct coals_msg_block* cmb; } ;
struct TYPE_3__ {int dma; struct stats_msg_block* smb; } ;
struct atl1_adapter {TYPE_2__ cmb; TYPE_1__ smb; struct pci_dev* pdev; struct atl1_ring_header ring_header; struct atl1_rrd_ring rrd_ring; struct atl1_rfd_ring rfd_ring; struct atl1_tpd_ring tpd_ring; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct atl1_adapter*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct atl1_adapter *VAR_2)
{
 struct atl1_tpd_ring *VAR_3 = &VAR_2->tpd_ring;
 struct atl1_rfd_ring *VAR_4 = &VAR_2->rfd_ring;
 struct atl1_rrd_ring *VAR_5 = &VAR_2->rrd_ring;
 struct atl1_ring_header *VAR_6 = &VAR_2->ring_header;
 struct pci_dev *VAR_7 = VAR_2->pdev;
 int VAR_8;
 u8 VAR_9 = 0;

 VAR_8 = sizeof(struct atl1_buffer) * (VAR_3->count + VAR_4->count);
 VAR_3->buffer_info = FUNC_2(VAR_8, VAR_1);
 if (FUNC_5(!VAR_3->buffer_info)) {
  if (FUNC_3(VAR_2))
   FUNC_0(&VAR_7->dev, "kzalloc failed , size = D%d\n",
    VAR_8);
  goto err_nomem;
 }
 VAR_4->buffer_info =
  (VAR_3->buffer_info + VAR_3->count);






 VAR_6->size = VAR_8 =
  sizeof(struct tx_packet_desc) * VAR_3->count
  + sizeof(struct rx_free_desc) * VAR_4->count
  + sizeof(struct rx_return_desc) * VAR_5->count
  + sizeof(struct coals_msg_block)
  + sizeof(struct stats_msg_block)
  + 40;

 VAR_6->desc = FUNC_4(VAR_7, VAR_6->size,
  &VAR_6->dma);
 if (FUNC_5(!VAR_6->desc)) {
  if (FUNC_3(VAR_2))
   FUNC_0(&VAR_7->dev, "pci_alloc_consistent failed\n");
  goto err_nomem;
 }


 VAR_3->dma = VAR_6->dma;
 VAR_9 = (VAR_3->dma & 0x7) ? (8 - (VAR_6->dma & 0x7)) : 0;
 VAR_3->dma += VAR_9;
 VAR_3->desc = (u8 *) VAR_6->desc + VAR_9;
 VAR_3->size = sizeof(struct tx_packet_desc) * VAR_3->count;


 VAR_4->dma = VAR_3->dma + VAR_3->size;
 VAR_9 = (VAR_4->dma & 0x7) ? (8 - (VAR_4->dma & 0x7)) : 0;
 VAR_4->dma += VAR_9;
 VAR_4->desc = (u8 *) VAR_3->desc + (VAR_3->size + VAR_9);
 VAR_4->size = sizeof(struct rx_free_desc) * VAR_4->count;



 VAR_5->dma = VAR_4->dma + VAR_4->size;
 VAR_9 = (VAR_5->dma & 0x7) ? (8 - (VAR_5->dma & 0x7)) : 0;
 VAR_5->dma += VAR_9;
 VAR_5->desc = (u8 *) VAR_4->desc + (VAR_4->size + VAR_9);
 VAR_5->size = sizeof(struct rx_return_desc) * VAR_5->count;



 VAR_2->cmb.dma = VAR_5->dma + VAR_5->size;
 VAR_9 = (VAR_2->cmb.dma & 0x7) ? (8 - (VAR_2->cmb.dma & 0x7)) : 0;
 VAR_2->cmb.dma += VAR_9;
 VAR_2->cmb.cmb = (struct coals_msg_block *)
  ((u8 *) VAR_5->desc + (VAR_5->size + VAR_9));


 VAR_2->smb.dma = VAR_2->cmb.dma + sizeof(struct coals_msg_block);
 VAR_9 = (VAR_2->smb.dma & 0x7) ? (8 - (VAR_2->smb.dma & 0x7)) : 0;
 VAR_2->smb.dma += VAR_9;
 VAR_2->smb.smb = (struct stats_msg_block *)
  ((u8 *) VAR_2->cmb.cmb +
  (sizeof(struct coals_msg_block) + VAR_9));

 return 0;

err_nomem:
 FUNC_1(VAR_3->buffer_info);
 return -VAR_0;
}
