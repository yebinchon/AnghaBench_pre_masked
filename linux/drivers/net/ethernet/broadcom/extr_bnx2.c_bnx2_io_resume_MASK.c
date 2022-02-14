
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2 {int dummy; } ;


 int FUNC_0 (struct bnx2*,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct bnx2 *VAR_2 = FUNC_1(VAR_1);

 FUNC_5();
 if (FUNC_3(VAR_1))
  FUNC_0(VAR_2, 1);

 FUNC_2(VAR_1);
 FUNC_6();
}
