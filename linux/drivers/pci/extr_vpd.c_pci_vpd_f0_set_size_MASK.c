
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pci_dev*,size_t) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1, size_t VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_1->bus,
         FUNC_0(FUNC_1(VAR_1->devfn), 0));
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_3, VAR_2);
 FUNC_2(VAR_3);
 return VAR_4;
}
