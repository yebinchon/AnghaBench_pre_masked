
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txdma_mailbox {int dummy; } ;
struct tx_ring_info {int pending; int mark_freq; scalar_t__ wrap_bit; scalar_t__ cons; scalar_t__ prod; scalar_t__ descr; int descr_dma; scalar_t__ mbox; int mbox_dma; } ;
struct niu {int dev; int device; TYPE_1__* ops; } ;
typedef int __le64 ;
struct TYPE_2__ {scalar_t__ (* alloc_coherent ) (int ,int,int *,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct niu*,struct tx_ring_info*) ;
 scalar_t__ FUNC_3 (int ,int,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_4,
      struct tx_ring_info *VAR_5)
{
 FUNC_0(sizeof(struct txdma_mailbox) != 64);

 VAR_5->mbox = VAR_4->ops->alloc_coherent(VAR_4->device,
        sizeof(struct txdma_mailbox),
        &VAR_5->mbox_dma, VAR_2);
 if (!VAR_5->mbox)
  return -VAR_1;
 if ((unsigned long)VAR_5->mbox & (64UL - 1)) {
  FUNC_1(VAR_4->dev, "Coherent alloc gives misaligned TXDMA mailbox %p\n",
      VAR_5->mbox);
  return -VAR_0;
 }

 VAR_5->descr = VAR_4->ops->alloc_coherent(VAR_4->device,
         VAR_3 * sizeof(__le64),
         &VAR_5->descr_dma, VAR_2);
 if (!VAR_5->descr)
  return -VAR_1;
 if ((unsigned long)VAR_5->descr & (64UL - 1)) {
  FUNC_1(VAR_4->dev, "Coherent alloc gives misaligned TXDMA descr table %p\n",
      VAR_5->descr);
  return -VAR_0;
 }

 VAR_5->pending = VAR_3;
 VAR_5->prod = 0;
 VAR_5->cons = 0;
 VAR_5->wrap_bit = 0;


 VAR_5->mark_freq = VAR_5->pending / 4;

 FUNC_2(VAR_4, VAR_5);

 return 0;
}
