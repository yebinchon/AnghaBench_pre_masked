
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_page_pool {int gfp_mask; unsigned int order; int list; int mutex; int high_items; int low_items; scalar_t__ low_count; scalar_t__ high_count; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ion_page_pool* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;

struct ion_page_pool *FUNC_4(gfp_t VAR_2, unsigned int VAR_3)
{
 struct ion_page_pool *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);
 VAR_4->high_count = 0;
 VAR_4->low_count = 0;
 FUNC_0(&VAR_4->low_items);
 FUNC_0(&VAR_4->high_items);
 VAR_4->gfp_mask = VAR_2 | VAR_1;
 VAR_4->order = VAR_3;
 FUNC_2(&VAR_4->mutex);
 FUNC_3(&VAR_4->list, VAR_3);

 return VAR_4;
}
