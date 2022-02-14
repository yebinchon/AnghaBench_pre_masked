
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcie_port {TYPE_1__* ops; } ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {int (* wr_other_conf ) (struct pcie_port*,struct pci_bus*,int ,int,int,int ) ;} ;


 int FUNC_0 (struct pcie_port*,struct pci_bus*,int ,int,int,int *,int) ;
 int FUNC_1 (struct pcie_port*,struct pci_bus*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pcie_port *VAR_0, struct pci_bus *VAR_1,
     u32 VAR_2, int VAR_3, int VAR_4, u32 VAR_5)
{
 if (VAR_0->ops->wr_other_conf)
  return VAR_0->ops->wr_other_conf(VAR_0, VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5,
      1);
}
