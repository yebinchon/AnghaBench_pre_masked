
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {int type; int * ops; } ;
struct ion_cma_heap {struct ion_heap heap; struct cma* cma; } ;
struct cma {int dummy; } ;


 int VAR_0 ;
 struct ion_heap* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ion_cma_heap* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ion_heap *FUNC_2(struct cma *VAR_4)
{
 struct ion_cma_heap *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->heap.ops = &VAR_3;
 VAR_5->cma = VAR_4;
 VAR_5->heap.type = VAR_2;
 return &VAR_5->heap;
}
