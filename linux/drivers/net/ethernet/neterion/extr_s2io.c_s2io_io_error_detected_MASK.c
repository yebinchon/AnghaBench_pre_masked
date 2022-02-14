
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s2io_nic*,int ) ;
 struct s2io_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_3,
            pci_channel_state_t VAR_4)
{
 struct net_device *VAR_5 = FUNC_5(VAR_3);
 struct s2io_nic *VAR_6 = FUNC_1(VAR_5);

 FUNC_2(VAR_5);

 if (VAR_4 == VAR_2)
  return VAR_0;

 if (FUNC_3(VAR_5)) {

  FUNC_0(VAR_6, 0);
 }
 FUNC_4(VAR_3);

 return VAR_1;
}
