
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int state; int cmd_lock; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct vmxnet3_adapter*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_3(VAR_4);
 struct vmxnet3_adapter *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7;




 while (FUNC_6(VAR_3, &VAR_6->state))
  FUNC_7(1000, 2000);

 if (FUNC_6(VAR_2,
        &VAR_6->state)) {
  FUNC_1(VAR_3, &VAR_6->state);
  return;
 }
 FUNC_4(&VAR_6->cmd_lock, VAR_7);
 FUNC_0(VAR_6, VAR_1,
          VAR_0);
 FUNC_5(&VAR_6->cmd_lock, VAR_7);
 FUNC_8(VAR_6);

 FUNC_1(VAR_3, &VAR_6->state);
}
