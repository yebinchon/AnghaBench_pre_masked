
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_thermal_device {int hw_base; int tzd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pch_thermal_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct pch_thermal_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_5(VAR_1->tzd);
 FUNC_0(VAR_1->hw_base);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_3(VAR_0, 0);
 FUNC_1(VAR_0);
}
