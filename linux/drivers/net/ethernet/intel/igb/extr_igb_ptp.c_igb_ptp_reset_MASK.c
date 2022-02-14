
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int ptp_flags; int ptp_overflow_work; int tmreg_lock; int cc; int tc; int pps_sys_wrap_on; struct e1000_hw hw; int tstamp_config; } ;


 int VAR_0 ;
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






 int FUNC_0 (struct igb_adapter*,int *) ;
 int FUNC_1 (struct igb_adapter*,struct timespec64*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct timespec64 FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 () ;

void FUNC_11(struct igb_adapter *VAR_12)
{
 struct e1000_hw *VAR_13 = &VAR_12->hw;
 unsigned long VAR_14;


 FUNC_0(VAR_12, &VAR_12->tstamp_config);

 FUNC_6(&VAR_12->tmreg_lock, VAR_14);

 switch (VAR_12->hw.mac.type) {
 case 133:

  FUNC_9(VAR_2, VAR_8 | VAR_9);
  break;
 case 132:
 case 128:
 case 129:
 case 131:
 case 130:
  FUNC_9(VAR_3, 0x0);
  FUNC_9(VAR_5, 0x0);
  FUNC_9(VAR_4,
       VAR_11 |
       (VAR_12->pps_sys_wrap_on ? VAR_10 : 0));
  FUNC_9(VAR_0, VAR_1);
  break;
 default:

  goto out;
 }


 if ((VAR_13->mac.type == 131) || (VAR_13->mac.type == 130)) {
  struct timespec64 VAR_15 = FUNC_4(FUNC_2());

  FUNC_1(VAR_12, &VAR_15);
 } else {
  FUNC_8(&VAR_12->tc, &VAR_12->cc,
     FUNC_3(FUNC_2()));
 }
out:
 FUNC_7(&VAR_12->tmreg_lock, VAR_14);

 FUNC_10();

 if (VAR_12->ptp_flags & VAR_6)
  FUNC_5(&VAR_12->ptp_overflow_work,
          VAR_7);
}
