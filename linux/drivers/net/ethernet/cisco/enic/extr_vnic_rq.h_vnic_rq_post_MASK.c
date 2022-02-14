
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct vnic_rq_buf {unsigned int os_buf_index; unsigned int len; int index; struct vnic_rq_buf* next; int wr_id; int dma_addr; void* os_buf; } ;
struct TYPE_3__ {int desc_avail; } ;
struct vnic_rq {TYPE_2__* ctrl; TYPE_1__ ring; struct vnic_rq_buf* to_use; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int posted_index; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vnic_rq *VAR_1,
 void *VAR_2, unsigned int VAR_3,
 dma_addr_t VAR_4, unsigned int VAR_5,
 uint64_t VAR_6)
{
 struct vnic_rq_buf *VAR_7 = VAR_1->to_use;

 VAR_7->os_buf = VAR_2;
 VAR_7->os_buf_index = VAR_3;
 VAR_7->dma_addr = VAR_4;
 VAR_7->len = VAR_5;
 VAR_7->wr_id = VAR_6;

 VAR_7 = VAR_7->next;
 VAR_1->to_use = VAR_7;
 VAR_1->ring.desc_avail--;
 if ((VAR_7->index & 0xf) == 0) {





  FUNC_1();
  FUNC_0(VAR_7->index, &VAR_1->ctrl->posted_index);
 }
}
