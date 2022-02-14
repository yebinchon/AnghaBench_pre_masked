
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; int bus; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, int VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->bus, FUNC_0(VAR_3, 0));
 int VAR_5 = 0;

 if (VAR_4) {
  if (VAR_4->vendor == VAR_1 &&
      VAR_4->device == VAR_0)
   VAR_5 = 1;
  FUNC_1(VAR_4);
 }

 return VAR_5;
}
