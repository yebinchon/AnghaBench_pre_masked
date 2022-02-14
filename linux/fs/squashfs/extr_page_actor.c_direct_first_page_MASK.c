
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_page_actor {int next_page; void* pageaddr; int * page; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct squashfs_page_actor *VAR_0)
{
 VAR_0->next_page = 1;
 return VAR_0->pageaddr = FUNC_0(VAR_0->page[0]);
}
