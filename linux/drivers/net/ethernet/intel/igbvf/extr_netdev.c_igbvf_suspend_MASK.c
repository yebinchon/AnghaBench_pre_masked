
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int state; } ;
typedef int pm_message_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct igbvf_adapter*) ;
 int FUNC_2 (struct igbvf_adapter*) ;
 struct igbvf_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_1, pm_message_t VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_1);
 struct igbvf_adapter *VAR_4 = FUNC_3(VAR_3);




 FUNC_4(VAR_3);

 if (FUNC_5(VAR_3)) {
  FUNC_0(FUNC_9(VAR_0, &VAR_4->state));
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
 }







 FUNC_6(VAR_1);

 return 0;
}
