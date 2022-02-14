
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct ion_page_pool {int order; int mutex; int low_count; int low_items; int high_count; int high_items; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct ion_page_pool *VAR_1, struct page *VAR_2)
{
 FUNC_3(&VAR_1->mutex);
 if (FUNC_0(VAR_2)) {
  FUNC_1(&VAR_2->lru, &VAR_1->high_items);
  VAR_1->high_count++;
 } else {
  FUNC_1(&VAR_2->lru, &VAR_1->low_items);
  VAR_1->low_count++;
 }

 FUNC_2(FUNC_5(VAR_2), VAR_0,
       1 << VAR_1->order);
 FUNC_4(&VAR_1->mutex);
}
