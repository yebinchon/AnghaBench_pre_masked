
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {scalar_t__ reg_state; } ;
struct ixgbevf_adapter {int state; int rss_key; int hw; int io_addr; int service_task; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (int ) ;
 struct ixgbevf_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct net_device* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_10(VAR_3);
 struct ixgbevf_adapter *VAR_5;
 bool VAR_6;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_8(VAR_4);

 FUNC_12(VAR_2, &VAR_5->state);
 FUNC_0(&VAR_5->service_task);

 if (VAR_4->reg_state == VAR_0)
  FUNC_14(VAR_4);

 FUNC_6(VAR_5);
 FUNC_4(VAR_5);
 FUNC_5(VAR_5);

 FUNC_3(VAR_5->io_addr);
 FUNC_11(VAR_3);

 FUNC_2(&VAR_5->hw, "Remove complete\n");

 FUNC_7(VAR_5->rss_key);
 VAR_6 = !FUNC_13(VAR_1, &VAR_5->state);
 FUNC_1(VAR_4);

 if (VAR_6)
  FUNC_9(VAR_3);
}
