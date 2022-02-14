
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_bd_num; } ;
struct qtnf_pcie_pearl_state {int pcie_reg_base; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qtnf_pcie_pearl_state *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_2(FUNC_0(VAR_2->pcie_reg_base));
 VAR_3 |= VAR_1;
 FUNC_4(VAR_3, FUNC_0(VAR_2->pcie_reg_base));
 FUNC_3(50, 100);
 VAR_3 &= ~VAR_1;



 FUNC_4(VAR_3, FUNC_0(VAR_2->pcie_reg_base));
 FUNC_4(VAR_2->base.rx_bd_num, FUNC_1(VAR_2->pcie_reg_base));

 return 0;
}
