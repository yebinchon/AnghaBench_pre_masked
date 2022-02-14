
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_page_actor {void* pageaddr; scalar_t__ next_page; scalar_t__ pages; int * page; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void *FUNC_2(struct squashfs_page_actor *VAR_0)
{
 if (VAR_0->pageaddr)
  FUNC_1(VAR_0->pageaddr);

 return VAR_0->pageaddr = VAR_0->next_page == VAR_0->pages ? ((void*)0) :
  FUNC_0(VAR_0->page[VAR_0->next_page++]);
}
