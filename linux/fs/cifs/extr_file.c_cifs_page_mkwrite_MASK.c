
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {struct page* page; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static vm_fault_t
FUNC_1(struct vm_fault *VAR_1)
{
 struct page *VAR_2 = VAR_1->page;

 FUNC_0(VAR_2);
 return VAR_0;
}
