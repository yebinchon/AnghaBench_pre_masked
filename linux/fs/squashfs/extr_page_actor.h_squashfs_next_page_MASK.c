
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_page_actor {scalar_t__ next_page; scalar_t__ pages; void** page; } ;



__attribute__((used)) static inline void *FUNC_0(struct squashfs_page_actor *VAR_0)
{
 return VAR_0->next_page == VAR_0->pages ? ((void*)0) :
  VAR_0->page[VAR_0->next_page++];
}
