
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_3,
                                         enum pci_channel_state VAR_4)
{

 if (VAR_4 == VAR_2) {
  FUNC_2(VAR_3);
  return VAR_1;
 }

 FUNC_0(VAR_3->irq);
 FUNC_1(VAR_3);


 return VAR_0;
}
