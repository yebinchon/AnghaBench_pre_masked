
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_thermal_device {scalar_t__ soc_dts; } ;
struct pci_dev {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct pci_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 struct proc_thermal_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct proc_thermal_device*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct proc_thermal_device *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->soc_dts) {
  FUNC_1(VAR_1->soc_dts);
  if (VAR_0->irq) {
   FUNC_0(VAR_0->irq, VAR_0);
   FUNC_2(VAR_0);
  }
 }
 FUNC_4();
 FUNC_5(VAR_1);
}
