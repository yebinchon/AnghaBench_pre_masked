
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;


 char* VAR_0 ;

 char* VAR_1 ;






 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static inline char *FUNC_0(struct pci_dev *VAR_6)
{
 switch (VAR_6->device) {
 case 133:
  return VAR_2;
 case 132:
  return VAR_3;
 case 131:
 case 130:
  return VAR_4;
 case 134:
  return VAR_0;
 case 129:
 case 128:
  return VAR_5;
 default:
  return VAR_1;
 }
}
