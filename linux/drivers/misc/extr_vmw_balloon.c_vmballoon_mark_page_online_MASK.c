
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum vmballoon_page_size_type { ____Placeholder_vmballoon_page_size_type } vmballoon_page_size_type ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct page *VAR_0,
      enum vmballoon_page_size_type VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++)
  FUNC_0(VAR_0 + VAR_2);
}
