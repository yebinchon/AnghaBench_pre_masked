
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int parent; } ;
struct net_device {int flags; int features; TYPE_1__ dev; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 struct e1000_adapter* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_8(VAR_6);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9;

 if (FUNC_9(VAR_6->dev.parent))
  return;


 VAR_9 = FUNC_6(VAR_5);


 VAR_9 &= ~(VAR_1 | VAR_0);

 if (VAR_6->flags & VAR_3) {
  VAR_9 |= (VAR_1 | VAR_0);

  FUNC_0(VAR_7);
 } else {
  int VAR_10;

  if (VAR_6->flags & VAR_2) {
   VAR_9 |= VAR_0;
  } else {




   VAR_10 = FUNC_4(VAR_6);
   if (VAR_10 < 0)
    VAR_9 |= VAR_0;
  }
  FUNC_1(VAR_7);




  VAR_10 = FUNC_5(VAR_6);
  if (VAR_10 < 0)
   VAR_9 |= VAR_1;
 }

 FUNC_7(VAR_5, VAR_9);

 if (VAR_6->features & VAR_4)
  FUNC_3(VAR_7);
 else
  FUNC_2(VAR_7);
}
