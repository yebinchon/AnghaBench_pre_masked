
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ a; } ;
struct TYPE_6__ {TYPE_1__ fddi_canon_addr; int irq; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_8__ {scalar_t__ SharedMemSize; int * LocalRxBuffer; int LocalRxBufferDMA; TYPE_3__ pdev; int * SharedMemAddr; int SharedMemDMA; scalar_t__ SharedMemHeap; int DriverLock; int base_addr; } ;
struct s_smc {TYPE_2__ hw; TYPE_4__ os; } ;
struct net_device {int dev_addr; int irq; int base_addr; } ;
typedef TYPE_4__ skfddi_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct s_smc*) ;
 void* FUNC_1 (int *,scalar_t__,int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct s_smc*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 struct s_smc* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct s_smc*,int *) ;
 int FUNC_10 (struct s_smc*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4)
{
 struct s_smc *VAR_5 = FUNC_6(VAR_4);
 skfddi_priv *VAR_6 = &VAR_5->os;
 int VAR_7 = -VAR_0;

 FUNC_7("entering skfp_driver_init\n");


 VAR_6->base_addr = VAR_4->base_addr;


 VAR_5->hw.irq = VAR_4->irq;

 FUNC_11(&VAR_6->DriverLock);


 VAR_6->LocalRxBuffer = FUNC_1(&VAR_6->pdev.dev, VAR_3,
            &VAR_6->LocalRxBufferDMA,
            VAR_2);
 if (!VAR_6->LocalRxBuffer) {
  FUNC_8("could not allocate mem for ");
  FUNC_8("LocalRxBuffer: %d byte\n", VAR_3);
  goto fail;
 }


 VAR_6->SharedMemSize = FUNC_3();
 FUNC_7("Memory for HWM: %ld\n", VAR_6->SharedMemSize);
 if (VAR_6->SharedMemSize > 0) {
  VAR_6->SharedMemSize += 16;

  VAR_6->SharedMemAddr = FUNC_1(&VAR_6->pdev.dev,
             VAR_6->SharedMemSize,
             &VAR_6->SharedMemDMA,
             VAR_2);
  if (!VAR_6->SharedMemAddr) {
   FUNC_8("could not allocate mem for ");
   FUNC_8("hardware module: %ld byte\n",
          VAR_6->SharedMemSize);
   goto fail;
  }

 } else {
  VAR_6->SharedMemAddr = ((void*)0);
 }

 VAR_6->SharedMemHeap = 0;

 FUNC_0(VAR_5);

 FUNC_7("mac_drv_init()..\n");
 if (FUNC_4(VAR_5) != 0) {
  FUNC_7("mac_drv_init() failed\n");
  goto fail;
 }
 FUNC_9(VAR_5, ((void*)0));
 FUNC_7("HW-Addr: %pMF\n", VAR_5->hw.fddi_canon_addr.a);
 FUNC_5(VAR_4->dev_addr, VAR_5->hw.fddi_canon_addr.a, VAR_1);

 FUNC_10(VAR_5, 0);

 return 0;

fail:
 if (VAR_6->SharedMemAddr) {
  FUNC_2(&VAR_6->pdev.dev,
      VAR_6->SharedMemSize,
      VAR_6->SharedMemAddr,
      VAR_6->SharedMemDMA);
  VAR_6->SharedMemAddr = ((void*)0);
 }
 if (VAR_6->LocalRxBuffer) {
  FUNC_2(&VAR_6->pdev.dev, VAR_3,
      VAR_6->LocalRxBuffer, VAR_6->LocalRxBufferDMA);
  VAR_6->LocalRxBuffer = ((void*)0);
 }
 return VAR_7;
}
