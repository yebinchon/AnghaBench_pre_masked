
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct __vxge_hw_device {struct net_device* ndev; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct pci_dev*) ;
 struct __vxge_hw_device* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_5(struct pci_dev *VAR_3,
      pci_channel_state_t VAR_4)
{
 struct __vxge_hw_device *VAR_5 = FUNC_4(VAR_3);
 struct net_device *VAR_6 = VAR_5->ndev;

 FUNC_1(VAR_6);

 if (VAR_4 == VAR_2)
  return VAR_0;

 if (FUNC_2(VAR_6)) {

  FUNC_0(VAR_6, 0);
 }

 FUNC_3(VAR_3);

 return VAR_1;
}
