
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xen_pfn_t ;
typedef int phys_addr_t ;
typedef int pfn ;
struct TYPE_2__ {int count; scalar_t__* pfn; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 () ;
 scalar_t__* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (char*,int *) ;
 TYPE_1__ VAR_4 ;
 void* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (void*) ;

int FUNC_6(phys_addr_t VAR_5)
{
 xen_pfn_t *VAR_6;
 unsigned int VAR_7 = FUNC_1();
 unsigned int VAR_8;
 void *VAR_9;

 if (VAR_4.count)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_5, VAR_3 * VAR_7);
 if (VAR_9 == ((void*)0)) {
  FUNC_3("Failed to ioremap gnttab share frames (addr=%pa)!\n",
   &VAR_5);
  return -VAR_1;
 }
 VAR_6 = FUNC_2(VAR_7, sizeof(VAR_6[0]), VAR_2);
 if (!VAR_6) {
  FUNC_5(VAR_9);
  return -VAR_1;
 }
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_6[VAR_8] = FUNC_0(VAR_5) + VAR_8;

 VAR_4.vaddr = VAR_9;
 VAR_4.pfn = VAR_6;
 VAR_4.count = VAR_7;

 return 0;
}
