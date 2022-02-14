
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {size_t free_list_size; int free_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t FUNC_2(struct ion_heap *VAR_0)
{
 size_t VAR_1;

 FUNC_0(&VAR_0->free_lock);
 VAR_1 = VAR_0->free_list_size;
 FUNC_1(&VAR_0->free_lock);

 return VAR_1;
}
