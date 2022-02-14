
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {void* msi_domain; void* leg_domain; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_4 ;
 void* FUNC_2 (struct device_node*,int ,int *,struct xilinx_pcie_port*) ;
 int VAR_5 ;
 struct device_node* FUNC_3 (struct device_node*,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct xilinx_pcie_port*) ;
 struct xilinx_pcie_port VAR_6 ;

__attribute__((used)) static int FUNC_6(struct xilinx_pcie_port *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct device_node *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_3(VAR_9, ((void*)0));
 if (!VAR_10) {
  FUNC_1(VAR_8, "No PCIe Intc node found\n");
  return -VAR_1;
 }

 VAR_7->leg_domain = FUNC_2(VAR_10, VAR_2,
       &VAR_4,
       VAR_7);
 FUNC_4(VAR_10);
 if (!VAR_7->leg_domain) {
  FUNC_1(VAR_8, "Failed to get a INTx IRQ domain\n");
  return -VAR_1;
 }


 if (FUNC_0(VAR_0)) {
  VAR_7->msi_domain = FUNC_2(VAR_9,
        VAR_3,
        &VAR_5,
        &VAR_6);
  if (!VAR_7->msi_domain) {
   FUNC_1(VAR_8, "Failed to get a MSI IRQ domain\n");
   return -VAR_1;
  }

  VAR_11 = FUNC_5(VAR_7);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
