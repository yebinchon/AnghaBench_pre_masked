
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_page_pool {int order; int mutex; scalar_t__ high_count; scalar_t__ low_count; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct ion_page_pool*,struct page*) ;
 struct page* FUNC_2 (struct ion_page_pool*,int) ;
 int FUNC_3 (struct ion_page_pool*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ion_page_pool *VAR_1, gfp_t VAR_2,
    int VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5;

 if (FUNC_0())
  VAR_5 = 1;
 else
  VAR_5 = !!(VAR_2 & VAR_0);

 if (VAR_3 == 0)
  return FUNC_3(VAR_1, VAR_5);

 while (VAR_4 < VAR_3) {
  struct page *VAR_6;

  FUNC_4(&VAR_1->mutex);
  if (VAR_1->low_count) {
   VAR_6 = FUNC_2(VAR_1, 0);
  } else if (VAR_5 && VAR_1->high_count) {
   VAR_6 = FUNC_2(VAR_1, 1);
  } else {
   FUNC_5(&VAR_1->mutex);
   break;
  }
  FUNC_5(&VAR_1->mutex);
  FUNC_1(VAR_1, VAR_6);
  VAR_4 += (1 << VAR_1->order);
 }

 return VAR_4;
}
