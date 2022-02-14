
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ion_buffer {void* vaddr; scalar_t__ kmap_cnt; TYPE_2__* heap; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {void* (* map_kernel ) (TYPE_2__*,struct ion_buffer*) ;} ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int,char*) ;
 void* FUNC_3 (TYPE_2__*,struct ion_buffer*) ;

__attribute__((used)) static void *FUNC_4(struct ion_buffer *VAR_1)
{
 void *VAR_2;

 if (VAR_1->kmap_cnt) {
  VAR_1->kmap_cnt++;
  return VAR_1->vaddr;
 }
 VAR_2 = VAR_1->heap->ops->map_kernel(VAR_1->heap, VAR_1);
 if (FUNC_2(!VAR_2,
        "heap->ops->map_kernel should return ERR_PTR on error"))
  return FUNC_0(-VAR_0);
 if (FUNC_1(VAR_2))
  return VAR_2;
 VAR_1->vaddr = VAR_2;
 VAR_1->kmap_cnt++;
 return VAR_2;
}
