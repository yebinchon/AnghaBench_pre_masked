
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct tg3* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (struct tg3*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_4(VAR_2);
 struct tg3 *VAR_4 = FUNC_1(VAR_3);

 FUNC_5();
 FUNC_2(VAR_3);

 if (FUNC_3(VAR_3))
  FUNC_0(VAR_3);

 if (VAR_1 == VAR_0)
  FUNC_7(VAR_4);

 FUNC_6();
}
