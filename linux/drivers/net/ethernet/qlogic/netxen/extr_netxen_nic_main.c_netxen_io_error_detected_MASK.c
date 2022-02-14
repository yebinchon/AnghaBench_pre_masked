
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct netxen_adapter {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netxen_adapter*) ;
 scalar_t__ FUNC_1 (struct netxen_adapter*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct pci_dev*) ;
 struct netxen_adapter* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_4,
      pci_channel_state_t VAR_5)
{
 struct netxen_adapter *VAR_6 = FUNC_3(VAR_4);

 if (VAR_5 == VAR_3)
  return VAR_0;

 if (FUNC_1(VAR_6))
  return VAR_2;

 FUNC_0(VAR_6);

 FUNC_2(VAR_4);

 return VAR_1;
}
