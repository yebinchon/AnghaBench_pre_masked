
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int vendor; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static unsigned long FUNC_1(struct pci_dev *VAR_6)
{
 if (VAR_6->vendor == 0x144d && VAR_6->device == 0xa802) {
  if (FUNC_0(VAR_3, "Dell Inc.") &&
      (FUNC_0(VAR_2, "XPS 15 9550") ||
       FUNC_0(VAR_2, "Precision 5510")))
   return VAR_5;
 } else if (VAR_6->vendor == 0x144d && VAR_6->device == 0xa804) {






  if (FUNC_0(VAR_1, "ASUSTeK COMPUTER INC.") &&
      (FUNC_0(VAR_0, "PRIME B350M-A") ||
       FUNC_0(VAR_0, "PRIME Z370-A")))
   return VAR_4;
 }

 return 0;
}
