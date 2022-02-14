
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_2__ {int flags; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_adapter*,int ) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct e1000_adapter *VAR_5,
         bool VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_5->hw;
 u32 VAR_8;

 if (!FUNC_6(VAR_4, &VAR_5->flags))
  FUNC_1(VAR_5);

 FUNC_0(VAR_5, VAR_5->netdev->features);
 if (VAR_6) {

  VAR_8 = FUNC_4(VAR_3);
  VAR_8 &= ~VAR_0;
  if (!(VAR_5->netdev->flags & VAR_2))
   VAR_8 |= VAR_1;
  FUNC_5(VAR_3, VAR_8);
  FUNC_3(VAR_5);
 } else {

  VAR_8 = FUNC_4(VAR_3);
  VAR_8 &= ~VAR_1;
  FUNC_5(VAR_3, VAR_8);
 }

 if (!FUNC_6(VAR_4, &VAR_5->flags))
  FUNC_2(VAR_5);
}
