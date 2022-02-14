
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mobiveil_pcie {int irq; void* ppio_wins; void* apio_wins; void* apb_csr_base; int pcie_reg_base; void* csr_axi_slave_base; struct resource* ob_io_res; void* config_axi_slave_base; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,void**) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct mobiveil_pcie *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct platform_device *VAR_5 = VAR_3->pdev;
 struct device_node *VAR_6 = VAR_4->of_node;
 struct resource *VAR_7;


 VAR_7 = FUNC_6(VAR_5, VAR_1,
        "config_axi_slave");
 VAR_3->config_axi_slave_base = FUNC_3(VAR_4, VAR_7);
 if (FUNC_0(VAR_3->config_axi_slave_base))
  return FUNC_1(VAR_3->config_axi_slave_base);
 VAR_3->ob_io_res = VAR_7;


 VAR_7 = FUNC_6(VAR_5, VAR_1,
        "csr_axi_slave");
 VAR_3->csr_axi_slave_base = FUNC_3(VAR_4, VAR_7);
 if (FUNC_0(VAR_3->csr_axi_slave_base))
  return FUNC_1(VAR_3->csr_axi_slave_base);
 VAR_3->pcie_reg_base = VAR_7->start;


 VAR_7 = FUNC_6(VAR_5, VAR_1, "apb_csr");
 VAR_3->apb_csr_base = FUNC_3(VAR_4, VAR_7);
 if (FUNC_0(VAR_3->apb_csr_base))
  return FUNC_1(VAR_3->apb_csr_base);


 if (FUNC_4(VAR_6, "apio-wins", &VAR_3->apio_wins))
  VAR_3->apio_wins = VAR_2;

 if (FUNC_4(VAR_6, "ppio-wins", &VAR_3->ppio_wins))
  VAR_3->ppio_wins = VAR_2;

 VAR_3->irq = FUNC_5(VAR_5, 0);
 if (VAR_3->irq <= 0) {
  FUNC_2(VAR_4, "failed to map IRQ: %d\n", VAR_3->irq);
  return -VAR_0;
 }

 return 0;
}
