
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int private; } ;
struct TYPE_2__ {char* pcie_irq_count; } ;
struct qtnf_pcie_pearl_state {char* pcie_irq_tx_count; char* pcie_irq_rx_count; char* pcie_irq_uf_count; TYPE_1__ base; int pcie_reg_base; } ;
struct qtnf_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qtnf_bus* FUNC_1 (int ) ;
 struct qtnf_pcie_pearl_state* FUNC_2 (struct qtnf_bus*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_3, void *VAR_4)
{
 struct qtnf_bus *VAR_5 = FUNC_1(VAR_3->private);
 struct qtnf_pcie_pearl_state *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7 = FUNC_3(FUNC_0(VAR_6->pcie_reg_base));
 u32 VAR_8;

 FUNC_4(VAR_3, "pcie_irq_count(%u)\n", VAR_6->base.pcie_irq_count);
 FUNC_4(VAR_3, "pcie_irq_tx_count(%u)\n", VAR_6->pcie_irq_tx_count);
 VAR_8 = VAR_7 & VAR_2;
 FUNC_4(VAR_3, "pcie_irq_tx_status(%s)\n",
     (VAR_8 == VAR_2) ? "EN" : "DIS");
 FUNC_4(VAR_3, "pcie_irq_rx_count(%u)\n", VAR_6->pcie_irq_rx_count);
 VAR_8 = VAR_7 & VAR_1;
 FUNC_4(VAR_3, "pcie_irq_rx_status(%s)\n",
     (VAR_8 == VAR_1) ? "EN" : "DIS");
 FUNC_4(VAR_3, "pcie_irq_uf_count(%u)\n", VAR_6->pcie_irq_uf_count);
 VAR_8 = VAR_7 & VAR_0;
 FUNC_4(VAR_3, "pcie_irq_hhbm_uf_status(%s)\n",
     (VAR_8 == VAR_0) ? "EN" : "DIS");

 return 0;
}
