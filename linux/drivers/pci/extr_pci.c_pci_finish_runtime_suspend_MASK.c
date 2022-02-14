
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int runtime_d3cold; int dev; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;

int FUNC_6(struct pci_dev *VAR_3)
{
 pci_power_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_3, FUNC_1(&VAR_3->dev));
 if (VAR_4 == VAR_2)
  return -VAR_0;

 VAR_3->runtime_d3cold = VAR_4 == VAR_1;

 FUNC_0(VAR_3, VAR_4, FUNC_2(VAR_3));

 VAR_5 = FUNC_4(VAR_3, VAR_4);

 if (VAR_5) {
  FUNC_3(VAR_3, VAR_4, 0);
  VAR_3->runtime_d3cold = 0;
 }

 return VAR_5;
}
