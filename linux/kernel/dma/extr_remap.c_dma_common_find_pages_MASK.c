
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {scalar_t__ flags; struct page** pages; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct vm_struct* FUNC_0 (void*) ;

struct page **FUNC_1(void *VAR_1)
{
 struct vm_struct *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || VAR_2->flags != VAR_0)
  return ((void*)0);
 return VAR_2->pages;
}
