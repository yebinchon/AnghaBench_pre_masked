
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port_service_driver {scalar_t__ (* reset_link ) (struct pci_dev*) ;} ;
struct pci_dev {int dummy; } ;
typedef scalar_t__ pci_ers_result_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,struct pci_dev*,char*,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pcie_port_service_driver* FUNC_4 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_3, u32 VAR_4)
{
 pci_ers_result_t VAR_5;
 struct pcie_port_service_driver *VAR_6 = ((void*)0);

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6 && VAR_6->reset_link) {
  VAR_5 = VAR_6->reset_link(VAR_3);
 } else if (FUNC_3(VAR_3)) {
  VAR_5 = FUNC_0(VAR_3);
 } else {
  FUNC_2(VAR_0, VAR_3, "no link-reset support at upstream device %s\n",
   FUNC_1(VAR_3));
  return VAR_1;
 }

 if (VAR_5 != VAR_2) {
  FUNC_2(VAR_0, VAR_3, "link reset at upstream device %s failed\n",
   FUNC_1(VAR_3));
  return VAR_1;
 }

 return VAR_5;
}
