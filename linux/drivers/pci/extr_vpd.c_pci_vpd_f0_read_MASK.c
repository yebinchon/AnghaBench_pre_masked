
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; int bus; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ,size_t,void*) ;

__attribute__((used)) static ssize_t FUNC_5(struct pci_dev *VAR_1, loff_t VAR_2, size_t VAR_3,
          void *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_1->bus,
         FUNC_0(FUNC_1(VAR_1->devfn), 0));
 ssize_t VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
