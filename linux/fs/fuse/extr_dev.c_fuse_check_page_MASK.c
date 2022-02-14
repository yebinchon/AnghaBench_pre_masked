
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; int * mapping; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_7)
{
 if (FUNC_1(VAR_7) ||
     VAR_7->mapping != ((void*)0) ||
     FUNC_0(VAR_7) != 1 ||
     (VAR_7->flags & VAR_0 &
      ~(1 << VAR_2 |
        1 << VAR_5 |
        1 << VAR_6 |
        1 << VAR_3 |
        1 << VAR_1 |
        1 << VAR_4))) {
  FUNC_2("trying to steal weird page\n");
  FUNC_2("  page=%p index=%li flags=%08lx, count=%i, mapcount=%i, mapping=%p\n", VAR_7, VAR_7->index, VAR_7->flags, FUNC_0(VAR_7), FUNC_1(VAR_7), VAR_7->mapping);
  return 1;
 }
 return 0;
}
