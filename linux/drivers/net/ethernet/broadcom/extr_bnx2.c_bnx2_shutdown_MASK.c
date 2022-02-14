
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2 {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (int ) ;
 struct bnx2* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);
 struct bnx2 *VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return;

 FUNC_5();
 if (FUNC_3(VAR_4))
  FUNC_1(VAR_5->dev);

 if (VAR_2 == VAR_1)
  FUNC_0(VAR_5, VAR_0);

 FUNC_6();
}
