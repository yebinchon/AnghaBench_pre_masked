
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ksz_hw_desc {int dummy; } ;
struct ksz_desc_info {int alloc; int avail; struct ksz_desc* ring; struct ksz_desc* cur; scalar_t__ next; scalar_t__ last; int ring_phys; scalar_t__ size; struct ksz_hw_desc* ring_virt; } ;
struct TYPE_6__ {int end_of_ring; } ;
struct TYPE_9__ {int data; TYPE_1__ rx; } ;
struct TYPE_10__ {TYPE_4__ buf; } ;
struct ksz_desc {TYPE_5__ sw; TYPE_3__* phw; } ;
struct TYPE_7__ {void* data; } ;
struct TYPE_8__ {TYPE_2__ buf; void* next; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_desc_info *VAR_0, int VAR_1)
{
 int VAR_2;
 u32 VAR_3 = VAR_0->ring_phys;
 struct ksz_hw_desc *VAR_4 = VAR_0->ring_virt;
 struct ksz_desc *VAR_5 = VAR_0->ring;
 struct ksz_desc *VAR_6 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->alloc; VAR_2++) {
  VAR_5->phw = VAR_4++;
  VAR_3 += VAR_0->size;
  VAR_6 = VAR_5++;
  VAR_6->phw->next = FUNC_0(VAR_3);
 }
 VAR_6->phw->next = FUNC_0(VAR_0->ring_phys);
 VAR_6->sw.buf.rx.end_of_ring = 1;
 VAR_6->phw->buf.data = FUNC_0(VAR_6->sw.buf.data);

 VAR_0->avail = VAR_0->alloc;
 VAR_0->last = VAR_0->next = 0;

 VAR_0->cur = VAR_0->ring;
}
