
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct de_private {int regs; int ee_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct de_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct de_private *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(!VAR_1);
 FUNC_8(VAR_1);
 FUNC_3(VAR_2->ee_data);
 FUNC_2(VAR_2->regs);
 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 FUNC_1(VAR_1);
}
