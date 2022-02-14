
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,int ,int) ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (int *,char*) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(struct pci_dev *VAR_2, pm_message_t VAR_3)
{
 struct net_device *VAR_4 = FUNC_7(VAR_2);
 struct bnx2x *VAR_5;

 if (!VAR_4) {
  FUNC_2(&VAR_2->dev, "BAD net device from bnx2x_init_one\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_3(VAR_4);

 FUNC_9();

 FUNC_8(VAR_2);

 if (!FUNC_5(VAR_4)) {
  FUNC_10();
  return 0;
 }

 FUNC_4(VAR_4);

 FUNC_0(VAR_5, VAR_1, 0);

 FUNC_1(VAR_5, FUNC_6(VAR_2, VAR_3));

 FUNC_10();

 return 0;
}
