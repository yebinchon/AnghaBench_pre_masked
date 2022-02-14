
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void u8 ;
typedef int u64 ;
typedef void* u32 ;
struct TYPE_6__ {int msb; int lsb; } ;
struct TYPE_8__ {void* kv_qpt_ptr; int page_count; void* page_size; TYPE_1__ hw_qpt_ptr; } ;
struct TYPE_9__ {TYPE_3__ qpt; TYPE_2__* ccb; } ;
struct bna_rxp {TYPE_4__ cq; } ;
struct TYPE_10__ {int msb; int lsb; } ;
struct bna_mem_descr {void* kva; TYPE_5__ dma; } ;
struct bna_dma_addr {int msb; int lsb; } ;
struct TYPE_7__ {void** sw_qpt; void* sw_q; } ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ,struct bna_dma_addr*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct bna_rxp *VAR_1,
  u32 VAR_2,
  u32 VAR_3,
  struct bna_mem_descr *VAR_4,
  struct bna_mem_descr *VAR_5,
  struct bna_mem_descr *VAR_6)
{
 u8 *VAR_7;
 u64 VAR_8;
 struct bna_dma_addr VAR_9;
 int VAR_10;

 VAR_1->cq.qpt.hw_qpt_ptr.lsb = VAR_4->dma.lsb;
 VAR_1->cq.qpt.hw_qpt_ptr.msb = VAR_4->dma.msb;
 VAR_1->cq.qpt.kv_qpt_ptr = VAR_4->kva;
 VAR_1->cq.qpt.page_count = VAR_2;
 VAR_1->cq.qpt.page_size = VAR_3;

 VAR_1->cq.ccb->sw_qpt = (void **) VAR_5->kva;
 VAR_1->cq.ccb->sw_q = VAR_6->kva;

 VAR_7 = VAR_6->kva;
 FUNC_0(&VAR_6->dma, VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_1->cq.qpt.page_count; VAR_10++) {
  VAR_1->cq.ccb->sw_qpt[VAR_10] = VAR_7;
  VAR_7 += VAR_0;

  FUNC_1(VAR_8, &VAR_9);
  ((struct bna_dma_addr *)VAR_1->cq.qpt.kv_qpt_ptr)[VAR_10].lsb =
   VAR_9.lsb;
  ((struct bna_dma_addr *)VAR_1->cq.qpt.kv_qpt_ptr)[VAR_10].msb =
   VAR_9.msb;
  VAR_8 += VAR_0;
 }
}
