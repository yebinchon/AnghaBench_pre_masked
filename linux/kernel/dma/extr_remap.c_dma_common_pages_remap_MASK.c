
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {void* addr; struct page** pages; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 struct vm_struct* FUNC_0 (struct page**,size_t,int ,void const*) ;

void *FUNC_1(struct page **VAR_0, size_t VAR_1,
    pgprot_t VAR_2, const void *VAR_3)
{
 struct vm_struct *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->pages = VAR_0;

 return VAR_4->addr;
}
