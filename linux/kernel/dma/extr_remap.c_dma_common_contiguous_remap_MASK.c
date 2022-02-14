
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {void* addr; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct vm_struct* FUNC_0 (struct page**,size_t,int ,void const*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (int,int ) ;
 struct page* FUNC_4 (struct page*,int) ;

void *FUNC_5(struct page *VAR_2, size_t VAR_3,
   pgprot_t VAR_4, const void *VAR_5)
{
 int VAR_6;
 struct page **VAR_7;
 struct vm_struct *VAR_8;

 VAR_7 = FUNC_3(sizeof(struct page *) << FUNC_1(VAR_3), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < (VAR_3 >> VAR_1); VAR_6++)
  VAR_7[VAR_6] = FUNC_4(VAR_2, VAR_6);

 VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_7);

 if (!VAR_8)
  return ((void*)0);
 return VAR_8->addr;
}
