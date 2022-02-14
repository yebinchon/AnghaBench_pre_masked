
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vmxnet3_adapter {TYPE_3__* pdev; int cmd_lock; TYPE_2__* shared; } ;
struct net_device {int flags; } ;
struct Vmxnet3_RxFilterConf {int* vfTable; int rxMode; scalar_t__ mfTableLen; scalar_t__ mfTablePA; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct Vmxnet3_RxFilterConf rxFilterConf; } ;
struct TYPE_5__ {TYPE_1__ devRead; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,size_t,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (struct net_device*,char*) ;
 size_t FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 struct vmxnet3_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int * FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct vmxnet3_adapter*) ;

__attribute__((used)) static void
FUNC_17(struct net_device *VAR_15)
{
 struct vmxnet3_adapter *VAR_16 = FUNC_12(VAR_15);
 unsigned long VAR_17;
 struct Vmxnet3_RxFilterConf *VAR_18 =
     &VAR_16->shared->devRead.rxFilterConf;
 u8 *VAR_19 = ((void*)0);
 dma_addr_t VAR_20 = 0;
 bool VAR_21 = 0;
 u32 VAR_22 = VAR_13;

 if (VAR_15->flags & VAR_3) {
  u32 *VAR_23 = VAR_16->shared->devRead.rxFilterConf.vfTable;
  FUNC_8(VAR_23, 0, VAR_14 * sizeof(*VAR_23));

  VAR_22 |= VAR_12;
 } else {
  FUNC_16(VAR_16);
 }

 if (VAR_15->flags & VAR_2)
  VAR_22 |= VAR_10;

 if (VAR_15->flags & VAR_1)
  VAR_22 |= VAR_9;
 else
  if (!FUNC_11(VAR_15)) {
   VAR_19 = FUNC_15(VAR_15);
   if (VAR_19) {
    size_t VAR_24 = FUNC_10(VAR_15) * VAR_0;

    VAR_18->mfTableLen = FUNC_1(VAR_24);
    VAR_20 = FUNC_4(
       &VAR_16->pdev->dev,
       VAR_19,
       VAR_24,
       VAR_4);
    if (!FUNC_5(&VAR_16->pdev->dev,
             VAR_20)) {
     VAR_22 |= VAR_11;
     VAR_21 = 1;
     VAR_18->mfTablePA = FUNC_3(
        VAR_20);
    }
   }
   if (!VAR_21) {
    FUNC_9(VAR_15,
         "failed to copy mcast list, setting ALL_MULTI\n");
    VAR_22 |= VAR_9;
   }
  }

 if (!(VAR_22 & VAR_11)) {
  VAR_18->mfTableLen = 0;
  VAR_18->mfTablePA = 0;
 }

 FUNC_13(&VAR_16->cmd_lock, VAR_17);
 if (VAR_22 != VAR_18->rxMode) {
  VAR_18->rxMode = FUNC_2(VAR_22);
  FUNC_0(VAR_16, VAR_8,
           VAR_6);
  FUNC_0(VAR_16, VAR_8,
           VAR_7);
 }

 FUNC_0(VAR_16, VAR_8,
          VAR_5);
 FUNC_14(&VAR_16->cmd_lock, VAR_17);

 if (VAR_21)
  FUNC_6(&VAR_16->pdev->dev, VAR_20,
     VAR_18->mfTableLen, VAR_4);
 FUNC_7(VAR_19);
}
