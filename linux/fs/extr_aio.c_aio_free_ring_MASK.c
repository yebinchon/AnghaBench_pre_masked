
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct kioctx {int nr_pages; struct page** ring_pages; struct page** internal_pages; } ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct page**) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (char*,int ,int,int ) ;
 int FUNC_3 (struct kioctx*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct kioctx *VAR_1)
{
 int VAR_2;




 FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_pages; VAR_2++) {
  struct page *VAR_3;
  FUNC_2("pid(%d) [%d] page->count=%d\n", VAR_0->pid, VAR_2,
    FUNC_1(VAR_1->ring_pages[VAR_2]));
  VAR_3 = VAR_1->ring_pages[VAR_2];
  if (!VAR_3)
   continue;
  VAR_1->ring_pages[VAR_2] = ((void*)0);
  FUNC_4(VAR_3);
 }

 if (VAR_1->ring_pages && VAR_1->ring_pages != VAR_1->internal_pages) {
  FUNC_0(VAR_1->ring_pages);
  VAR_1->ring_pages = ((void*)0);
 }
}
