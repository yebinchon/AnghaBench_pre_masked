
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_system_heap {struct ion_page_pool** pools; } ;
struct ion_page_pool {int dummy; } ;
struct ion_buffer {int dummy; } ;


 struct page* FUNC_0 (struct ion_page_pool*) ;
 size_t FUNC_1 (unsigned long) ;

__attribute__((used)) static struct page *FUNC_2(struct ion_system_heap *VAR_0,
          struct ion_buffer *VAR_1,
          unsigned long VAR_2)
{
 struct ion_page_pool *VAR_3 = VAR_0->pools[FUNC_1(VAR_2)];

 return FUNC_0(VAR_3);
}
