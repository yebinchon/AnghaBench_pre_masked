
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_page_pool {scalar_t__ order; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct ion_page_pool*,struct page*) ;

void FUNC_3(struct ion_page_pool *VAR_0, struct page *VAR_1)
{
 FUNC_0(VAR_0->order != FUNC_1(VAR_1));

 FUNC_2(VAR_0, VAR_1);
}
