
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgb_hw {int dummy; } ;
struct ixgb_adapter {int napi; struct ixgb_hw hw; int watchdog_timer; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgb_hw*,int ) ;
 int FUNC_1 (struct ixgb_hw*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 struct ixgb_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct ixgb_adapter *VAR_11 = FUNC_5(VAR_10);
 struct ixgb_hw *VAR_12 = &VAR_11->hw;
 u32 VAR_13 = FUNC_0(VAR_12, VAR_0);

 if (FUNC_7(!VAR_13))
  return VAR_3;

 if (FUNC_7(VAR_13 & (VAR_5 | VAR_4)))
  if (!FUNC_6(VAR_6, &VAR_11->flags))
   FUNC_3(&VAR_11->watchdog_timer, VAR_7);

 if (FUNC_4(&VAR_11->napi)) {





  FUNC_1(&VAR_11->hw, VAR_1, ~0);
  FUNC_2(&VAR_11->napi);
 }
 return VAR_2;
}
