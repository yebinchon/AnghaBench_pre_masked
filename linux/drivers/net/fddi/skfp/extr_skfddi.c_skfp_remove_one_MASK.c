
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iop; } ;
struct TYPE_3__ {int * LocalRxBuffer; int LocalRxBufferDMA; int * SharedMemAddr; int SharedMemDMA; int SharedMemSize; } ;
struct s_smc {TYPE_2__ hw; TYPE_1__ os; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct s_smc* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_6(VAR_1);
 struct s_smc *VAR_3 = FUNC_4(VAR_2);

 FUNC_8(VAR_2);

 if (VAR_3->os.SharedMemAddr) {
  FUNC_0(&VAR_1->dev,
      VAR_3->os.SharedMemSize,
      VAR_3->os.SharedMemAddr,
      VAR_3->os.SharedMemDMA);
  VAR_3->os.SharedMemAddr = ((void*)0);
 }
 if (VAR_3->os.LocalRxBuffer) {
  FUNC_0(&VAR_1->dev,
      VAR_0,
      VAR_3->os.LocalRxBuffer,
      VAR_3->os.LocalRxBufferDMA);
  VAR_3->os.LocalRxBuffer = ((void*)0);
 }



 FUNC_2(VAR_3->hw.iop);

 FUNC_7(VAR_1);
 FUNC_1(VAR_2);

 FUNC_5(VAR_1);
}
