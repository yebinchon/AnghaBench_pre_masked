
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {int dev; } ;
struct msi_desc {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct irq_data* FUNC_2 (unsigned int) ;
 struct msi_desc* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct irq_data*) ;
 struct xilinx_pcie_port* FUNC_5 (struct msi_desc*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_1)
{
 struct msi_desc *VAR_2;
 struct xilinx_pcie_port *VAR_3;
 struct irq_data *VAR_4 = FUNC_2(VAR_1);
 irq_hw_number_t VAR_5 = FUNC_4(VAR_4);

 if (!FUNC_6(VAR_5, VAR_0)) {
  VAR_2 = FUNC_3(VAR_1);
  VAR_3 = FUNC_5(VAR_2);
  FUNC_1(VAR_3->dev, "Trying to free unused MSI#%d\n", VAR_1);
 } else {
  FUNC_0(VAR_5, VAR_0);
 }
}
