
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev_flags; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{




 if (!FUNC_0(VAR_1->bus))
  VAR_1->dev_flags |= VAR_0;
}
