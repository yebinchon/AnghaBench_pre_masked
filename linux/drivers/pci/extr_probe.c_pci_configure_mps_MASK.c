
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int pcie_mpss; scalar_t__ is_virtfn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,char*,int,int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,char*,int,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_4(VAR_4);
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (!FUNC_1(VAR_4) || !VAR_5 || !FUNC_1(VAR_5))
  return;


 if (VAR_4->is_virtfn)
  return;

 VAR_6 = FUNC_6(VAR_4);
 VAR_8 = FUNC_6(VAR_5);

 if (VAR_6 == VAR_8)
  return;

 if (VAR_3 == VAR_1) {
  FUNC_5(VAR_4, "Max Payload Size %d, but upstream %s set to %d; if necessary, use \"pci=pcie_bus_safe\" and report a bug\n",
    VAR_6, FUNC_2(VAR_5), VAR_8);
  return;
 }





 if (VAR_3 != VAR_0)
  return;

 VAR_7 = 128 << VAR_4->pcie_mpss;
 if (VAR_7 < VAR_8 && FUNC_3(VAR_5) == VAR_2) {
  FUNC_7(VAR_5, VAR_7);
  FUNC_0(VAR_4, "Upstream bridge's Max Payload Size set to %d (was %d, max %d)\n",
    VAR_7, VAR_8, 128 << VAR_5->pcie_mpss);
  VAR_8 = FUNC_6(VAR_5);
 }

 VAR_9 = FUNC_7(VAR_4, VAR_8);
 if (VAR_9) {
  FUNC_5(VAR_4, "can't set Max Payload Size to %d; if necessary, use \"pci=pcie_bus_safe\" and report a bug\n",
    VAR_8);
  return;
 }

 FUNC_0(VAR_4, "Max Payload Size set to %d (was %d, max %d)\n",
   VAR_8, VAR_6, VAR_7);
}
