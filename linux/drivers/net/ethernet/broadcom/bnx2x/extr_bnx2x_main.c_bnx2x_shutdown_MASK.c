
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct pci_dev*,struct net_device*,struct bnx2x*,int) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct bnx2x *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return;

 FUNC_4();
 FUNC_2(VAR_1);
 FUNC_5();





 FUNC_0(VAR_0, VAR_1, VAR_2, 0);
}
