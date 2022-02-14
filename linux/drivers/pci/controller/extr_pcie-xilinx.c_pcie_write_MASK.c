
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xilinx_pcie_port {scalar_t__ reg_base; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct xilinx_pcie_port *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_0->reg_base + VAR_2);
}
