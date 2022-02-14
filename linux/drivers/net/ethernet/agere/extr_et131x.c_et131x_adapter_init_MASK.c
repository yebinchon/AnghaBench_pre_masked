
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct et131x_adapter {int registry_jumbo_packet; int addr; int rcv_lock; int tcb_ready_qlock; int tcb_send_qlock; struct net_device* netdev; int pdev; } ;


 int FUNC_0 (int ,int const*) ;
 struct et131x_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct et131x_adapter *FUNC_4(struct net_device *VAR_0,
        struct pci_dev *VAR_1)
{
 static const u8 VAR_2[] = { 0x00, 0x05, 0x3d, 0x00, 0x02, 0x00 };

 struct et131x_adapter *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_3->pdev = FUNC_2(VAR_1);
 VAR_3->netdev = VAR_0;

 FUNC_3(&VAR_3->tcb_send_qlock);
 FUNC_3(&VAR_3->tcb_ready_qlock);
 FUNC_3(&VAR_3->rcv_lock);

 VAR_3->registry_jumbo_packet = 1514;

 FUNC_0(VAR_3->addr, VAR_2);

 return VAR_3;
}
