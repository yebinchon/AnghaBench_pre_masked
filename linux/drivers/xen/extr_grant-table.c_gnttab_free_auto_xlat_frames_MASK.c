
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vaddr; scalar_t__ count; int * pfn; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
 if (!VAR_0.count)
  return;
 FUNC_0(VAR_0.pfn);
 FUNC_1(VAR_0.vaddr);

 VAR_0.pfn = ((void*)0);
 VAR_0.count = 0;
 VAR_0.vaddr = ((void*)0);
}
