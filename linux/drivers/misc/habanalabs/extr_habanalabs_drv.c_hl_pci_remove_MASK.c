
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hl_device {int dummy; } ;


 int FUNC_0 (struct hl_device*) ;
 int FUNC_1 (struct hl_device*) ;
 struct hl_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct hl_device *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return;

 FUNC_1(VAR_1);
 FUNC_3(VAR_0, ((void*)0));

 FUNC_0(VAR_1);
}
