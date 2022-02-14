
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pcie_port {int dummy; } ;
typedef size_t phys_addr_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static void FUNC_2(struct mvebu_pcie_port *VAR_0,
       phys_addr_t VAR_1, size_t VAR_2)
{
 while (VAR_2) {
  size_t VAR_3 = 1 << (FUNC_0(VAR_2) - 1);

  FUNC_1(VAR_1, VAR_3);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }
}
