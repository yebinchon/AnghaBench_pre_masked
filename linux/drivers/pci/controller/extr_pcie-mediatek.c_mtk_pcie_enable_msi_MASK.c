
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_pcie_port {scalar_t__ base; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mtk_pcie_port *VAR_4)
{
 u32 VAR_5;
 phys_addr_t VAR_6;

 VAR_6 = FUNC_2(VAR_4->base + VAR_3);
 VAR_5 = FUNC_0(VAR_6);
 FUNC_3(VAR_5, VAR_4->base + VAR_1);

 VAR_5 = FUNC_1(VAR_4->base + VAR_2);
 VAR_5 &= ~VAR_0;
 FUNC_3(VAR_5, VAR_4->base + VAR_2);
}
