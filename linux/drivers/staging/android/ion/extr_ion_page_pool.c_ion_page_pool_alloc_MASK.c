
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_page_pool {int mutex; scalar_t__ low_count; scalar_t__ high_count; } ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (struct ion_page_pool*) ;
 struct page* FUNC_2 (struct ion_page_pool*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct page *FUNC_5(struct ion_page_pool *VAR_0)
{
 struct page *VAR_1 = ((void*)0);

 FUNC_0(!VAR_0);

 FUNC_3(&VAR_0->mutex);
 if (VAR_0->high_count)
  VAR_1 = FUNC_2(VAR_0, 1);
 else if (VAR_0->low_count)
  VAR_1 = FUNC_2(VAR_0, 0);
 FUNC_4(&VAR_0->mutex);

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
