
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct ixgbe_adapter {int flags; int state; TYPE_2__ hw; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int) ;

void FUNC_10(struct ixgbe_adapter *VAR_3)
{
 FUNC_0(FUNC_2());

 FUNC_7(VAR_3->netdev);

 while (FUNC_8(VAR_1, &VAR_3->state))
  FUNC_9(1000, 2000);
 if (VAR_3->hw.phy.type == VAR_2)
  FUNC_5(VAR_3);
 FUNC_3(VAR_3);






 if (VAR_3->flags & VAR_0)
  FUNC_6(2000);
 FUNC_4(VAR_3);
 FUNC_1(VAR_1, &VAR_3->state);
}
