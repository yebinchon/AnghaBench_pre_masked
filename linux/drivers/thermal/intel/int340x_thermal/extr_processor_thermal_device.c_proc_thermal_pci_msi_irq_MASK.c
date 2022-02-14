
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_thermal_device {int soc_dts; } ;
struct pci_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct proc_thermal_device* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct proc_thermal_device *VAR_3;
 struct pci_dev *VAR_4 = VAR_2;

 VAR_3 = FUNC_1(VAR_4);

 FUNC_0(VAR_3->soc_dts);

 return VAR_0;
}
