
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {int flags; int type; int * ops; } ;
struct ion_system_heap {struct ion_heap heap; int pools; } ;


 int VAR_0 ;
 struct ion_heap* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ion_system_heap*) ;
 struct ion_system_heap* FUNC_3 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static struct ion_heap *FUNC_4(void)
{
 struct ion_system_heap *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_5->heap.ops = &VAR_4;
 VAR_5->heap.type = VAR_3;
 VAR_5->heap.flags = VAR_2;

 if (FUNC_1(VAR_5->pools))
  goto free_heap;

 return &VAR_5->heap;

free_heap:
 FUNC_2(VAR_5);
 return FUNC_0(-VAR_0);
}
