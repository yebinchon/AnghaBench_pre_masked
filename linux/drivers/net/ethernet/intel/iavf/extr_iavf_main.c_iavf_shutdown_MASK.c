
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct iavf_adapter {scalar_t__ aq_required; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_5(VAR_1);
 struct iavf_adapter *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 if (FUNC_3(VAR_2))
  FUNC_0(VAR_2);


 VAR_3->state = VAR_0;
 VAR_3->aq_required = 0;





 FUNC_4(VAR_1);
}
