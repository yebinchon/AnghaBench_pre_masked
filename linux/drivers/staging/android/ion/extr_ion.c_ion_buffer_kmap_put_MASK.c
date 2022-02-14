
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ion_buffer {int * vaddr; TYPE_2__* heap; int kmap_cnt; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* unmap_kernel ) (TYPE_2__*,struct ion_buffer*) ;} ;


 int FUNC_0 (TYPE_2__*,struct ion_buffer*) ;

__attribute__((used)) static void FUNC_1(struct ion_buffer *VAR_0)
{
 VAR_0->kmap_cnt--;
 if (!VAR_0->kmap_cnt) {
  VAR_0->heap->ops->unmap_kernel(VAR_0->heap, VAR_0);
  VAR_0->vaddr = ((void*)0);
 }
}
