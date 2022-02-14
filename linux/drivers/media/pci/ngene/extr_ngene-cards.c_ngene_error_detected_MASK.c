
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static pci_ers_result_t FUNC_1(struct pci_dev *VAR_5,
          enum pci_channel_state VAR_6)
{
 FUNC_0(&VAR_5->dev, "PCI error\n");
 if (VAR_6 == VAR_4)
  return VAR_1;
 if (VAR_6 == VAR_3)
  return VAR_2;
 return VAR_0;
}
