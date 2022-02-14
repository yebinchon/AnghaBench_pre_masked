
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int pcie_port; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct octeon_device*,int ,int ) ;

void FUNC_2(struct octeon_device *VAR_0,
          u32 VAR_1,
          u32 VAR_2)
{
 FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_1, VAR_0->pcie_port));
}
