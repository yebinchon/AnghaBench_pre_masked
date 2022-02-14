
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7621_pcie_port {int pcie_rst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct mt7621_pcie_port *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_1);

 if ((VAR_3 & 0xFFFF) == VAR_0)
  FUNC_1(VAR_2->pcie_rst);
 else
  FUNC_0(VAR_2->pcie_rst);
}
