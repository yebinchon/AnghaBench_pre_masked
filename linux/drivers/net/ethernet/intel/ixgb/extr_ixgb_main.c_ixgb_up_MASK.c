
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; int name; int dev_addr; } ;
struct ixgb_hw {int max_frame_size; } ;
struct ixgb_adapter {int have_msi; int watchdog_timer; int napi; int flags; struct net_device* netdev; TYPE_1__* pdev; struct ixgb_hw hw; int rx_ring; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgb_hw*,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct ixgb_hw*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ixgb_adapter*,int ) ;
 int FUNC_5 (struct ixgb_adapter*) ;
 int FUNC_6 (struct ixgb_adapter*) ;
 int VAR_12 ;
 int FUNC_7 (struct ixgb_adapter*) ;
 int FUNC_8 (struct ixgb_hw*,int ,int ) ;
 int FUNC_9 (struct ixgb_adapter*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct ixgb_adapter*) ;
 int VAR_13 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ixgb_adapter*,int ,struct net_device*,char*,int) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_18 (int ,int ,int,int ,struct net_device*) ;

int
FUNC_19(struct ixgb_adapter *VAR_15)
{
 struct net_device *VAR_16 = VAR_15->netdev;
 int VAR_17, VAR_18 = VAR_4;
 int VAR_19 = VAR_16->mtu + VAR_2 + VAR_1;
 struct ixgb_hw *VAR_20 = &VAR_15->hw;



 FUNC_8(VAR_20, VAR_16->dev_addr, 0);
 FUNC_10(VAR_16);

 FUNC_9(VAR_15);

 FUNC_6(VAR_15);
 FUNC_11(VAR_15);
 FUNC_5(VAR_15);
 FUNC_4(VAR_15, FUNC_0(&VAR_15->rx_ring));


 FUNC_2(&VAR_15->hw, VAR_3, 0xffffffff);


 if (FUNC_1(&VAR_15->hw, VAR_10) & VAR_8) {
  VAR_17 = FUNC_17(VAR_15->pdev);
  if (!VAR_17) {
   VAR_15->have_msi = 1;
   VAR_18 = 0;
  }

 }

 VAR_17 = FUNC_18(VAR_15->pdev->irq, VAR_12, VAR_18,
                   VAR_16->name, VAR_16);
 if (VAR_17) {
  if (VAR_15->have_msi)
   FUNC_16(VAR_15->pdev);
  FUNC_14(VAR_15, VAR_14, VAR_15->netdev,
     "Unable to allocate interrupt Error: %d\n", VAR_17);
  return VAR_17;
 }

 if ((VAR_20->max_frame_size != VAR_19) ||
  (VAR_20->max_frame_size !=
  (FUNC_1(VAR_20, VAR_9) >> VAR_7))) {

  VAR_20->max_frame_size = VAR_19;

  FUNC_2(VAR_20, VAR_9, VAR_20->max_frame_size << VAR_7);

  if (VAR_20->max_frame_size >
     VAR_6 + VAR_1) {
   u32 VAR_21 = FUNC_1(VAR_20, VAR_0);

   if (!(VAR_21 & VAR_5)) {
    VAR_21 |= VAR_5;
    FUNC_2(VAR_20, VAR_0, VAR_21);
   }
  }
 }

 FUNC_3(VAR_11, &VAR_15->flags);

 FUNC_13(&VAR_15->napi);
 FUNC_7(VAR_15);

 FUNC_15(VAR_16);

 FUNC_12(&VAR_15->watchdog_timer, VAR_13);

 return 0;
}
