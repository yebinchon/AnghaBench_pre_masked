
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2 {int timer; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int) ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (int *) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static pci_ers_result_t FUNC_10(struct pci_dev *VAR_4,
            pci_channel_state_t VAR_5)
{
 struct net_device *VAR_6 = FUNC_7(VAR_4);
 struct bnx2 *VAR_7 = FUNC_3(VAR_6);

 FUNC_8();
 FUNC_4(VAR_6);

 if (VAR_5 == VAR_3) {
  FUNC_9();
  return VAR_1;
 }

 if (FUNC_5(VAR_6)) {
  FUNC_0(VAR_7, 1);
  FUNC_2(&VAR_7->timer);
  FUNC_1(VAR_7, VAR_0);
 }

 FUNC_6(VAR_4);
 FUNC_9();


 return VAR_2;
}
