
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxdma_mailbox {int dummy; } ;
struct rx_ring_info {int rcr_table_size; int rbr_table_size; scalar_t__ rbr_pending; scalar_t__ rbr_index; scalar_t__ rbr; int rbr_dma; scalar_t__ rcr_index; scalar_t__ rcr; int rcr_dma; scalar_t__ mbox; int mbox_dma; int rxhash; } ;
struct page {int dummy; } ;
struct niu {int dev; int device; TYPE_1__* ops; } ;
typedef int __le64 ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ (* alloc_coherent ) (int ,int,int *,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_5,
      struct rx_ring_info *VAR_6)
{
 FUNC_0(sizeof(struct rxdma_mailbox) != 64);

 VAR_6->rxhash = FUNC_1(VAR_3, sizeof(struct page *),
        VAR_2);
 if (!VAR_6->rxhash)
  return -VAR_1;

 VAR_6->mbox = VAR_5->ops->alloc_coherent(VAR_5->device,
        sizeof(struct rxdma_mailbox),
        &VAR_6->mbox_dma, VAR_2);
 if (!VAR_6->mbox)
  return -VAR_1;
 if ((unsigned long)VAR_6->mbox & (64UL - 1)) {
  FUNC_2(VAR_5->dev, "Coherent alloc gives misaligned RXDMA mailbox %p\n",
      VAR_6->mbox);
  return -VAR_0;
 }

 VAR_6->rcr = VAR_5->ops->alloc_coherent(VAR_5->device,
       VAR_4 * sizeof(__le64),
       &VAR_6->rcr_dma, VAR_2);
 if (!VAR_6->rcr)
  return -VAR_1;
 if ((unsigned long)VAR_6->rcr & (64UL - 1)) {
  FUNC_2(VAR_5->dev, "Coherent alloc gives misaligned RXDMA RCR table %p\n",
      VAR_6->rcr);
  return -VAR_0;
 }
 VAR_6->rcr_table_size = VAR_4;
 VAR_6->rcr_index = 0;

 VAR_6->rbr = VAR_5->ops->alloc_coherent(VAR_5->device,
       VAR_3 * sizeof(__le32),
       &VAR_6->rbr_dma, VAR_2);
 if (!VAR_6->rbr)
  return -VAR_1;
 if ((unsigned long)VAR_6->rbr & (64UL - 1)) {
  FUNC_2(VAR_5->dev, "Coherent alloc gives misaligned RXDMA RBR table %p\n",
      VAR_6->rbr);
  return -VAR_0;
 }
 VAR_6->rbr_table_size = VAR_3;
 VAR_6->rbr_index = 0;
 VAR_6->rbr_pending = 0;

 return 0;
}
