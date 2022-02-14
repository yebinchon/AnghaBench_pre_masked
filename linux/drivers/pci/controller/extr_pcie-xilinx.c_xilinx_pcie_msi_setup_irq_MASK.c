
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xilinx_pcie_port {scalar_t__ msi_pages; int msi_domain; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct msi_msg {unsigned int data; int address_lo; scalar_t__ address_hi; } ;
struct msi_desc {int dummy; } ;
struct msi_controller {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {struct xilinx_pcie_port* sysdata; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned int,struct msi_desc*) ;
 int FUNC_2 (unsigned int,struct msi_msg*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct msi_controller *VAR_1,
         struct pci_dev *VAR_2,
         struct msi_desc *VAR_3)
{
 struct xilinx_pcie_port *VAR_4 = VAR_2->bus->sysdata;
 unsigned int VAR_5;
 int VAR_6;
 struct msi_msg VAR_7;
 phys_addr_t VAR_8;

 VAR_6 = FUNC_4();
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_4->msi_domain, VAR_6);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3);

 VAR_8 = FUNC_3((void *)VAR_4->msi_pages);

 VAR_7.address_hi = 0;
 VAR_7.address_lo = VAR_8;
 VAR_7.data = VAR_5;

 FUNC_2(VAR_5, &VAR_7);

 return 0;
}
