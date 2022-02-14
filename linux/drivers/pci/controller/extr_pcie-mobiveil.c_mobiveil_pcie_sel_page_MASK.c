
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mobiveil_pcie {scalar_t__ csr_axi_slave_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mobiveil_pcie *VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->csr_axi_slave_base + VAR_0);
 VAR_5 &= ~(VAR_1 << VAR_2);
 VAR_5 |= (VAR_4 & VAR_1) << VAR_2;

 FUNC_1(VAR_5, VAR_3->csr_axi_slave_base + VAR_0);
}
