
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int * aux_pages; } ;
struct page {int * mapping; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ring_buffer *VAR_0, int VAR_1)
{
 struct page *VAR_2 = FUNC_2(VAR_0->aux_pages[VAR_1]);

 FUNC_0(VAR_2);
 VAR_2->mapping = ((void*)0);
 FUNC_1(VAR_2);
}
