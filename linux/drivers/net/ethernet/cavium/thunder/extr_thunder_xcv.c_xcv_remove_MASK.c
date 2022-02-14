
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;

 if (VAR_0) {
  FUNC_0(VAR_2, VAR_0);
  VAR_0 = ((void*)0);
 }

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
