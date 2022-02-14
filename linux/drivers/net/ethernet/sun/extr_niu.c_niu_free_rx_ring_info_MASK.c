
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxdma_mailbox {int dummy; } ;
struct rx_ring_info {int * rxhash; scalar_t__ rbr_index; scalar_t__ rbr_table_size; int * rbr; int rbr_dma; scalar_t__ rcr_index; scalar_t__ rcr_table_size; int * rcr; int rcr_dma; int * mbox; int mbox_dma; } ;
struct niu {int device; TYPE_1__* ops; } ;
typedef int __le64 ;
typedef int __le32 ;
struct TYPE_2__ {int (* free_coherent ) (int ,int,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct niu*,struct rx_ring_info*) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ,int,int *,int ) ;
 int FUNC_4 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct niu *VAR_2, struct rx_ring_info *VAR_3)
{
 if (VAR_3->mbox) {
  VAR_2->ops->free_coherent(VAR_2->device,
           sizeof(struct rxdma_mailbox),
           VAR_3->mbox, VAR_3->mbox_dma);
  VAR_3->mbox = ((void*)0);
 }
 if (VAR_3->rcr) {
  VAR_2->ops->free_coherent(VAR_2->device,
           VAR_1 * sizeof(__le64),
           VAR_3->rcr, VAR_3->rcr_dma);
  VAR_3->rcr = ((void*)0);
  VAR_3->rcr_table_size = 0;
  VAR_3->rcr_index = 0;
 }
 if (VAR_3->rbr) {
  FUNC_1(VAR_2, VAR_3);

  VAR_2->ops->free_coherent(VAR_2->device,
           VAR_0 * sizeof(__le32),
           VAR_3->rbr, VAR_3->rbr_dma);
  VAR_3->rbr = ((void*)0);
  VAR_3->rbr_table_size = 0;
  VAR_3->rbr_index = 0;
 }
 FUNC_0(VAR_3->rxhash);
 VAR_3->rxhash = ((void*)0);
}
