
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct niu {int * regs; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct niu* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);

 if (VAR_1) {
  struct niu *VAR_2 = FUNC_2(VAR_1);

  FUNC_8(VAR_1);
  if (VAR_2->regs) {
   FUNC_1(VAR_2->regs);
   VAR_2->regs = ((void*)0);
  }

  FUNC_3(VAR_2);

  FUNC_4(VAR_2);

  FUNC_0(VAR_1);
  FUNC_7(VAR_0);
  FUNC_5(VAR_0);
 }
}
