
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ bdeFlags; int bdeSize; } ;
struct TYPE_6__ {void* w; TYPE_1__ f; } ;
struct TYPE_7__ {TYPE_2__ tus; void* addrLow; void* addrHigh; } ;
struct lpfc_hbq_entry {void* buffer_tag; TYPE_3__ bde; } ;
struct lpfc_hba {size_t hbq_put; struct hbq_s* hbqs; int hbalock; } ;
struct hbq_s {int hbq_buffer_list; int hbqPutIdx; int next_hbqPutIdx; } ;
struct TYPE_8__ {int list; int phys; } ;
struct hbq_dmabuf {TYPE_4__ dbuf; void* tag; int total_size; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 struct lpfc_hbq_entry* FUNC_3 (struct lpfc_hba*,size_t) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int ,size_t) ;

__attribute__((used)) static int
FUNC_8(struct lpfc_hba *VAR_1, uint32_t VAR_2,
       struct hbq_dmabuf *VAR_3)
{
 struct lpfc_hbq_entry *VAR_4;
 dma_addr_t VAR_5 = VAR_3->dbuf.phys;

 FUNC_2(&VAR_1->hbalock);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4) {
  struct hbq_s *VAR_6 = &VAR_1->hbqs[VAR_2];

  VAR_4->bde.addrHigh = FUNC_0(FUNC_4(VAR_5));
  VAR_4->bde.addrLow = FUNC_0(FUNC_5(VAR_5));
  VAR_4->bde.tus.f.bdeSize = VAR_3->total_size;
  VAR_4->bde.tus.f.bdeFlags = 0;
  VAR_4->bde.tus.w = FUNC_0(VAR_4->bde.tus.w);
  VAR_4->buffer_tag = FUNC_0(VAR_3->tag);

  VAR_6->hbqPutIdx = VAR_6->next_hbqPutIdx;
  FUNC_7(VAR_6->hbqPutIdx, VAR_1->hbq_put + VAR_2);

  FUNC_6(VAR_1->hbq_put + VAR_2);
  FUNC_1(&VAR_3->dbuf.list, &VAR_6->hbq_buffer_list);
  return 0;
 } else
  return -VAR_0;
}
