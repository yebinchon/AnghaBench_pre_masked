
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {int waitqueue; int free_lock; int free_list_size; int free_list; } ;
struct ion_buffer {scalar_t__ size; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ion_heap *VAR_0, struct ion_buffer *VAR_1)
{
 FUNC_1(&VAR_0->free_lock);
 FUNC_0(&VAR_1->list, &VAR_0->free_list);
 VAR_0->free_list_size += VAR_1->size;
 FUNC_2(&VAR_0->free_lock);
 FUNC_3(&VAR_0->waitqueue);
}
