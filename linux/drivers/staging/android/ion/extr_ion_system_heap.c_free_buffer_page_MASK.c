
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_system_heap {struct ion_page_pool** pools; } ;
struct ion_page_pool {int dummy; } ;
struct ion_buffer {int private_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,unsigned int) ;
 unsigned int FUNC_1 (struct page*) ;
 int FUNC_2 (struct ion_page_pool*,struct page*) ;
 size_t FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct ion_system_heap *VAR_1,
        struct ion_buffer *VAR_2, struct page *VAR_3)
{
 struct ion_page_pool *VAR_4;
 unsigned int VAR_5 = FUNC_1(VAR_3);


 if (VAR_2->private_flags & VAR_0) {
  FUNC_0(VAR_3, VAR_5);
  return;
 }

 VAR_4 = VAR_1->pools[FUNC_3(VAR_5)];

 FUNC_2(VAR_4, VAR_3);
}
