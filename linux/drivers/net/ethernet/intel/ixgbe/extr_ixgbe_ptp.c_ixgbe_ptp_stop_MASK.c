
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_adapter {TYPE_1__* netdev; int * ptp_clock; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ixgbe_adapter *VAR_0)
{

 FUNC_1(VAR_0);


 if (VAR_0->ptp_clock) {
  FUNC_2(VAR_0->ptp_clock);
  VAR_0->ptp_clock = ((void*)0);
  FUNC_0("removed PHC on %s\n",
      VAR_0->netdev->name);
 }
}
