
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vm_struct {int nr_pages; struct page** pages; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ stack; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct device*,int *,char*,void*) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (struct page*) ;
 struct vm_struct* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2,
       struct page *VAR_3, size_t VAR_4)
{
 void *VAR_5;
 struct vm_struct *VAR_6 = FUNC_4(VAR_1);

 if (!VAR_6) {

  if (FUNC_0(VAR_3))
   return;
  VAR_5 = FUNC_3(VAR_3) + VAR_4;
  if (FUNC_2(VAR_5))
   FUNC_1(VAR_2, ((void*)0), "device driver maps memory from stack [addr=%p]\n", VAR_5);
 } else {

  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_6->nr_pages; VAR_7++) {
   if (VAR_3 != VAR_6->pages[VAR_7])
    continue;

   VAR_5 = (u8 *)VAR_1->stack + VAR_7 * VAR_0 + VAR_4;
   FUNC_1(VAR_2, ((void*)0), "device driver maps memory from stack [probable addr=%p]\n", VAR_5);
   break;
  }
 }
}
