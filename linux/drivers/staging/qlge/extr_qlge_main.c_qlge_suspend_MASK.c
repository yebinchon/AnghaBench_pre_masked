
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int timer; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 struct ql_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct ql_adapter*) ;
 int FUNC_10 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct net_device *VAR_2 = FUNC_6(VAR_0);
 struct ql_adapter *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_2(VAR_2);
 FUNC_0(&VAR_3->timer);

 if (FUNC_3(VAR_2)) {
  VAR_4 = FUNC_9(VAR_3);
  if (!VAR_4)
   return VAR_4;
 }

 FUNC_10(VAR_3);
 VAR_4 = FUNC_7(VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_0);

 FUNC_8(VAR_0, FUNC_4(VAR_0, VAR_1));

 return 0;
}
