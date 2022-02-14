
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cqhci_host {int caps; int task_desc_len; int quirks; int trans_desc_len; int link_desc_len; int slot_sz; int desc_size; int num_slots; int data_size; scalar_t__ trans_desc_dma_base; scalar_t__ desc_dma_base; void* trans_desc_base; int * desc_base; TYPE_1__* mmc; scalar_t__ dma64; } ;
struct TYPE_3__ {int max_segs; int cqe_qdepth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cqhci_host*,int ) ;
 int FUNC_1 (struct cqhci_host*,int,int ) ;
 void* FUNC_2 (int ,int,scalar_t__*,int ) ;
 int FUNC_3 (int ,int,int *,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int ,int,int,unsigned long long,...) ;
 int FUNC_7 (struct cqhci_host*,int) ;

__attribute__((used)) static int FUNC_8(struct cqhci_host *VAR_6)
{
 int VAR_7 = 0;


 if (VAR_6->caps & VAR_3) {
  FUNC_1(VAR_6, FUNC_0(VAR_6, VAR_0) |
          VAR_2, VAR_0);
  VAR_6->task_desc_len = 16;
 } else {
  VAR_6->task_desc_len = 8;
 }






 if (VAR_6->dma64) {
  if (VAR_6->quirks & VAR_1)
   VAR_6->trans_desc_len = 12;
  else
   VAR_6->trans_desc_len = 16;
  VAR_6->link_desc_len = 16;
 } else {
  VAR_6->trans_desc_len = 8;
  VAR_6->link_desc_len = 8;
 }


 VAR_6->slot_sz = VAR_6->task_desc_len + VAR_6->link_desc_len;

 VAR_6->desc_size = VAR_6->slot_sz * VAR_6->num_slots;

 VAR_6->data_size = VAR_6->trans_desc_len * VAR_6->mmc->max_segs *
  VAR_6->mmc->cqe_qdepth;

 FUNC_6("%s: cqhci: desc_size: %zu data_sz: %zu slot-sz: %d\n",
   FUNC_5(VAR_6->mmc), VAR_6->desc_size, VAR_6->data_size,
   VAR_6->slot_sz);







 VAR_6->desc_base = FUNC_2(FUNC_4(VAR_6->mmc),
       VAR_6->desc_size,
       &VAR_6->desc_dma_base,
       VAR_5);
 if (!VAR_6->desc_base)
  return -VAR_4;

 VAR_6->trans_desc_base = FUNC_2(FUNC_4(VAR_6->mmc),
           VAR_6->data_size,
           &VAR_6->trans_desc_dma_base,
           VAR_5);
 if (!VAR_6->trans_desc_base) {
  FUNC_3(FUNC_4(VAR_6->mmc), VAR_6->desc_size,
       VAR_6->desc_base,
       VAR_6->desc_dma_base);
  VAR_6->desc_base = ((void*)0);
  VAR_6->desc_dma_base = 0;
  return -VAR_4;
 }

 FUNC_6("%s: cqhci: desc-base: 0x%p trans-base: 0x%p\n desc_dma 0x%llx trans_dma: 0x%llx\n",
   FUNC_5(VAR_6->mmc), *VAR_6->desc_base, VAR_6->trans_desc_base,
  (unsigned long long)VAR_6->desc_dma_base,
  (unsigned long long)VAR_6->trans_desc_dma_base);

 for (; VAR_7 < (VAR_6->num_slots); VAR_7++)
  FUNC_7(VAR_6, VAR_7);

 return 0;
}
