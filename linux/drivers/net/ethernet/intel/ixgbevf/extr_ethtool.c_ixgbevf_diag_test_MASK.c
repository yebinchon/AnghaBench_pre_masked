
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int hw_addr; } ;
struct ixgbevf_adapter {int state; TYPE_2__ hw; TYPE_1__* pdev; } ;
struct ethtool_test {int flags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct ixgbevf_adapter*,int*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct ixgbevf_adapter*,int*) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;
 int FUNC_9 (int) ;
 struct ixgbevf_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_3,
         struct ethtool_test *VAR_4, u64 *VAR_5)
{
 struct ixgbevf_adapter *VAR_6 = FUNC_10(VAR_3);
 bool VAR_7 = FUNC_11(VAR_3);

 if (FUNC_0(VAR_6->hw.hw_addr)) {
  FUNC_2(&VAR_6->pdev->dev,
   "Adapter removed - test blocked\n");
  VAR_5[0] = 1;
  VAR_5[1] = 1;
  VAR_4->flags |= VAR_0;
  return;
 }
 FUNC_12(VAR_2, &VAR_6->state);
 if (VAR_4->flags == VAR_1) {


  FUNC_3(&VAR_6->hw, "offline testing starting\n");




  if (FUNC_5(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_0;

  if (VAR_7)

   FUNC_4(VAR_3);
  else
   FUNC_8(VAR_6);

  FUNC_3(&VAR_6->hw, "register testing starting\n");
  if (FUNC_7(VAR_6, &VAR_5[0]))
   VAR_4->flags |= VAR_0;

  FUNC_8(VAR_6);

  FUNC_1(VAR_2, &VAR_6->state);
  if (VAR_7)
   FUNC_6(VAR_3);
 } else {
  FUNC_3(&VAR_6->hw, "online testing starting\n");

  if (FUNC_5(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_0;


  VAR_5[0] = 0;

  FUNC_1(VAR_2, &VAR_6->state);
 }
 FUNC_9(4 * 1000);
}
