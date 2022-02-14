
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmem_device {int virt_addr; } ;
struct page {int dummy; } ;
typedef unsigned int phys_addr_t ;


 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 struct page* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct pmem_device *VAR_0,
  phys_addr_t VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;


 if (FUNC_2(VAR_0->virt_addr))
  return;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = VAR_3 + FUNC_0(VAR_2);
 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
  struct page *VAR_6 = FUNC_3(VAR_5);






  if (FUNC_4(VAR_6))
   FUNC_1(VAR_5);
 }
}
