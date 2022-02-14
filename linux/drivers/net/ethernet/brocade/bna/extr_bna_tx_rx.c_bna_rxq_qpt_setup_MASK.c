
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void u8 ;
typedef int u64 ;
typedef void* u32 ;
struct TYPE_5__ {int msb; int lsb; } ;
struct TYPE_7__ {void* kv_qpt_ptr; int page_count; void* page_size; TYPE_1__ hw_qpt_ptr; } ;
struct bna_rxq {TYPE_3__ qpt; TYPE_2__* rcb; } ;
struct bna_rxp {int dummy; } ;
struct TYPE_8__ {int msb; int lsb; } ;
struct bna_mem_descr {void* kva; TYPE_4__ dma; } ;
struct bna_dma_addr {int msb; int lsb; } ;
struct TYPE_6__ {void** sw_qpt; void* sw_q; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,struct bna_dma_addr*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct bna_rxq *VAR_1,
  struct bna_rxp *VAR_2,
  u32 VAR_3,
  u32 VAR_4,
  struct bna_mem_descr *VAR_5,
  struct bna_mem_descr *VAR_6,
  struct bna_mem_descr *VAR_7)
{
 u8 *VAR_8;
 u64 VAR_9;
 struct bna_dma_addr VAR_10;
 int VAR_11;

 VAR_1->qpt.hw_qpt_ptr.lsb = VAR_5->dma.lsb;
 VAR_1->qpt.hw_qpt_ptr.msb = VAR_5->dma.msb;
 VAR_1->qpt.kv_qpt_ptr = VAR_5->kva;
 VAR_1->qpt.page_count = VAR_3;
 VAR_1->qpt.page_size = VAR_4;

 VAR_1->rcb->sw_qpt = (void **) VAR_6->kva;
 VAR_1->rcb->sw_q = VAR_7->kva;

 VAR_8 = VAR_7->kva;
 FUNC_0(&VAR_7->dma, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_1->qpt.page_count; VAR_11++) {
  VAR_1->rcb->sw_qpt[VAR_11] = VAR_8;
  VAR_8 += VAR_0;

  FUNC_1(VAR_9, &VAR_10);
  ((struct bna_dma_addr *)VAR_1->qpt.kv_qpt_ptr)[VAR_11].lsb =
   VAR_10.lsb;
  ((struct bna_dma_addr *)VAR_1->qpt.kv_qpt_ptr)[VAR_11].msb =
   VAR_10.msb;
  VAR_9 += VAR_0;
 }
}
