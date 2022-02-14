
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;



__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_3,
            pci_channel_state_t VAR_4)
{
 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_3);
  return VAR_0;
 case 128:
  FUNC_1(VAR_3);
  return VAR_1;
  break;
 default:
  break;
 }
 return VAR_2;
}
