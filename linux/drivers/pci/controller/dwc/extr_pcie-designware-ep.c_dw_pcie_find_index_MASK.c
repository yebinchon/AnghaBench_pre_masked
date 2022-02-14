
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dw_pcie_ep {size_t num_ob_windows; scalar_t__* outbound_addr; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dw_pcie_ep *VAR_1, phys_addr_t VAR_2,
         u32 *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_ob_windows; VAR_4++) {
  if (VAR_1->outbound_addr[VAR_4] != VAR_2)
   continue;
  *VAR_3 = VAR_4;
  return 0;
 }

 return -VAR_0;
}
