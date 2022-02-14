
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_page_pool {int order; int gfp_mask; } ;


 struct page* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline struct page *FUNC_2(struct ion_page_pool *VAR_1)
{
 if (FUNC_1(VAR_0))
  return ((void*)0);
 return FUNC_0(VAR_1->gfp_mask, VAR_1->order);
}
