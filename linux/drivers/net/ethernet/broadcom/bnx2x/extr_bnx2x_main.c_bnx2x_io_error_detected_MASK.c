
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static pci_ers_result_t FUNC_10(struct pci_dev *VAR_3,
      pci_channel_state_t VAR_4)
{
 struct net_device *VAR_5 = FUNC_7(VAR_3);
 struct bnx2x *VAR_6 = FUNC_3(VAR_5);

 FUNC_8();

 FUNC_0("IO error detected\n");

 FUNC_4(VAR_5);

 if (VAR_4 == VAR_2) {
  FUNC_9();
  return VAR_0;
 }

 if (FUNC_5(VAR_5))
  FUNC_1(VAR_6);

 FUNC_2(VAR_6);

 FUNC_6(VAR_3);

 FUNC_9();


 return VAR_1;
}
