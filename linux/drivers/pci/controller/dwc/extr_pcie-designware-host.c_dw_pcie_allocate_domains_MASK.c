
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_port {int irq_domain; int msi_domain; int num_vectors; } ;
struct fwnode_handle {int dummy; } ;
struct dw_pcie {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fwnode_handle*,int ,int *,struct pcie_port*) ;
 int FUNC_2 (int ) ;
 struct fwnode_handle* FUNC_3 (int ) ;
 int FUNC_4 (struct fwnode_handle*,int *,int ) ;
 struct dw_pcie* FUNC_5 (struct pcie_port*) ;

int FUNC_6(struct pcie_port *VAR_3)
{
 struct dw_pcie *VAR_4 = FUNC_5(VAR_3);
 struct fwnode_handle *VAR_5 = FUNC_3(VAR_4->dev->of_node);

 VAR_3->irq_domain = FUNC_1(VAR_5, VAR_3->num_vectors,
            &VAR_2, VAR_3);
 if (!VAR_3->irq_domain) {
  FUNC_0(VAR_4->dev, "Failed to create IRQ domain\n");
  return -VAR_0;
 }

 VAR_3->msi_domain = FUNC_4(VAR_5,
         &VAR_1,
         VAR_3->irq_domain);
 if (!VAR_3->msi_domain) {
  FUNC_0(VAR_4->dev, "Failed to create MSI domain\n");
  FUNC_2(VAR_3->irq_domain);
  return -VAR_0;
 }

 return 0;
}
