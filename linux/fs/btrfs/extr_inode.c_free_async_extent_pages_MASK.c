
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct async_extent {int nr_pages; TYPE_1__** pages; } ;
struct TYPE_3__ {int mapping; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct async_extent *VAR_0)
{
 int VAR_1;

 if (!VAR_0->pages)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_pages; VAR_1++) {
  FUNC_0(VAR_0->pages[VAR_1]->mapping);
  FUNC_2(VAR_0->pages[VAR_1]);
 }
 FUNC_1(VAR_0->pages);
 VAR_0->nr_pages = 0;
 VAR_0->pages = ((void*)0);
}
