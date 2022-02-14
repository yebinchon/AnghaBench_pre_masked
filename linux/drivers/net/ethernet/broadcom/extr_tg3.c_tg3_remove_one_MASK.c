
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int * regs; int * aperegs; int fw; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct tg3* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct tg3*,int ) ;
 int FUNC_8 (struct tg3*) ;
 int FUNC_9 (struct tg3*) ;
 int FUNC_10 (struct tg3*) ;
 int FUNC_11 (struct tg3*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2) {
  struct tg3 *VAR_3 = FUNC_2(VAR_2);

  FUNC_10(VAR_3);

  FUNC_6(VAR_3->fw);

  FUNC_11(VAR_3);

  if (FUNC_7(VAR_3, VAR_0)) {
   FUNC_9(VAR_3);
   FUNC_8(VAR_3);
  }

  FUNC_12(VAR_2);
  if (VAR_3->aperegs) {
   FUNC_1(VAR_3->aperegs);
   VAR_3->aperegs = ((void*)0);
  }
  if (VAR_3->regs) {
   FUNC_1(VAR_3->regs);
   VAR_3->regs = ((void*)0);
  }
  FUNC_0(VAR_2);
  FUNC_5(VAR_1);
  FUNC_3(VAR_1);
 }
}
