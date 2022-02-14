
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_page_pool {int order; } ;


 int FUNC_0 (struct page*,int ) ;

__attribute__((used)) static void FUNC_1(struct ion_page_pool *VAR_0,
         struct page *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->order);
}
