
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int addr; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 struct vm_struct* FUNC_0 (size_t,int ,void const*) ;
 scalar_t__ FUNC_1 (struct vm_struct*,int ,struct page**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct vm_struct *FUNC_3(struct page **VAR_1,
   size_t VAR_2, pgprot_t VAR_3, const void *VAR_4)
{
 struct vm_struct *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_1(VAR_5, VAR_3, VAR_1)) {
  FUNC_2(VAR_5->addr);
  return ((void*)0);
 }

 return VAR_5;
}
