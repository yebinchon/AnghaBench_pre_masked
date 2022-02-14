
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pci_ers_result_t ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static pci_ers_result_t FUNC_0(enum pci_ers_result VAR_3,
      enum pci_ers_result VAR_4)
{
 if (VAR_4 == VAR_2)
  return VAR_2;

 if (VAR_4 == VAR_1)
  return VAR_3;

 switch (VAR_3) {
 case 130:
 case 128:
  VAR_3 = VAR_4;
  break;
 case 129:
  if (VAR_4 == VAR_0)
   VAR_3 = VAR_0;
  break;
 default:
  break;
 }

 return VAR_3;
}
