
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; scalar_t__ revision; } ;
struct cas {int cas_flags; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_0(struct cas *VAR_11)
{
 struct pci_dev *VAR_12 = VAR_11->pdev;

 VAR_11->cas_flags = 0;
 if ((VAR_12->vendor == VAR_10) &&
     (VAR_12->device == VAR_8)) {
  if (VAR_12->revision >= VAR_5)
   VAR_11->cas_flags |= VAR_1;
  if (VAR_12->revision < VAR_6)
   VAR_11->cas_flags |= VAR_3;




  if (VAR_12->revision < VAR_4)
   VAR_11->cas_flags |= VAR_0;
 } else {

  VAR_11->cas_flags |= VAR_1;




  if ((VAR_12->vendor == VAR_9) &&
      (VAR_12->device == VAR_7))
   VAR_11->cas_flags |= VAR_2;
 }
}
