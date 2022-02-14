
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {scalar_t__ reg_state; } ;
struct fm10k_intfc {scalar_t__ uc_addr; scalar_t__ sw_addr; int glort; int service_timer; struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fm10k_intfc*,int ,int) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_intfc*) ;
 int FUNC_7 (struct fm10k_intfc*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct fm10k_intfc* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_1)
{
 struct fm10k_intfc *VAR_2 = FUNC_12(VAR_1);
 struct net_device *VAR_3 = VAR_2->netdev;

 FUNC_0(&VAR_2->service_timer);

 FUNC_7(VAR_2);
 FUNC_6(VAR_2);


 FUNC_1(VAR_2, VAR_2->glort, 1);


 if (VAR_3->reg_state == VAR_0)
  FUNC_14(VAR_3);


 FUNC_4(VAR_1);


 FUNC_5(VAR_2);


 FUNC_2(VAR_2);


 FUNC_3(VAR_2);

 if (VAR_2->sw_addr)
  FUNC_9(VAR_2->sw_addr);
 FUNC_9(VAR_2->uc_addr);

 FUNC_8(VAR_3);

 FUNC_13(VAR_1);

 FUNC_11(VAR_1);

 FUNC_10(VAR_1);
}
