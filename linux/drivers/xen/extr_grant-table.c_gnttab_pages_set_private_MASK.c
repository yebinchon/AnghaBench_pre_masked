
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_page_foreign {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct xen_page_foreign* FUNC_1 (int,int ) ;
 int FUNC_2 (struct page*,unsigned long) ;

int FUNC_3(int VAR_2, struct page **VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

  struct xen_page_foreign *VAR_5;

  VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;

  FUNC_2(VAR_3[VAR_4], (unsigned long)VAR_5);

  FUNC_0(VAR_3[VAR_4]);
 }

 return 0;
}
