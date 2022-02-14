
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int (* ptp_setup_sdp ) (struct ixgbe_adapter*) ;int last_overflow_check; int tmreg_lock; int hw_cc; int hw_tc; int tstamp_config; struct ixgbe_hw hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*,int *) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (int *,int *,int ) ;

void FUNC_8(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 unsigned long VAR_4;


 FUNC_0(VAR_2, &VAR_2->tstamp_config);


 if (VAR_3->mac.type == VAR_0)
  return;

 FUNC_1(VAR_2);

 FUNC_4(&VAR_2->tmreg_lock, VAR_4);
 FUNC_7(&VAR_2->hw_tc, &VAR_2->hw_cc,
    FUNC_3(FUNC_2()));
 FUNC_5(&VAR_2->tmreg_lock, VAR_4);

 VAR_2->last_overflow_check = VAR_1;




 if (VAR_2->ptp_setup_sdp)
  VAR_2->ptp_setup_sdp(VAR_2);
}
