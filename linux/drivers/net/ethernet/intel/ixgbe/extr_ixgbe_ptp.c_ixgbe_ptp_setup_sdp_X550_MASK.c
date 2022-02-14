
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct timespec64 {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_2__ {int cycle_last; } ;
struct cyclecounter {int shift; int mult; } ;
struct ixgbe_adapter {int flags2; int tmreg_lock; TYPE_1__ hw_tc; struct ixgbe_hw hw; struct cyclecounter hw_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
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
 int VAR_15 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int,int*) ;
 struct timespec64 FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(struct ixgbe_adapter *VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 struct cyclecounter *VAR_26 = &VAR_18->hw_cc;
 struct ixgbe_hw *VAR_27 = &VAR_18->hw;
 u64 VAR_28 = 0, VAR_29 = 0;
 struct timespec64 VAR_30;
 unsigned long VAR_31;


 FUNC_2(VAR_27, VAR_7, 0x0);
 FUNC_1(VAR_27);

 if (!(VAR_18->flags2 & VAR_3))
  return;

 VAR_19 = FUNC_0(VAR_27, VAR_0);




 VAR_19 |= VAR_1 |
  VAR_2;





 VAR_20 = (VAR_9 | VAR_12 |
    VAR_10 | VAR_11 |
    0x40000000);

 VAR_25 = (VAR_15 |
   VAR_14);





 VAR_21 = FUNC_3(VAR_16 << VAR_26->shift, VAR_26->mult);


 FUNC_6(&VAR_18->tmreg_lock, VAR_31);
 VAR_28 = FUNC_8(&VAR_18->hw_tc);
 VAR_29 = VAR_18->hw_tc.cycle_last;
 FUNC_7(&VAR_18->tmreg_lock, VAR_31);


 FUNC_4(VAR_28, VAR_17, &VAR_24);




 VAR_24 = (VAR_17 - VAR_24);


 VAR_29 += FUNC_3(((u64)VAR_24 << VAR_26->shift), VAR_26->mult);
 VAR_30 = FUNC_5(VAR_29);
 VAR_22 = (u32)VAR_30.tv_nsec;
 VAR_23 = (u32)VAR_30.tv_sec;

 FUNC_2(VAR_27, VAR_4, VAR_21);
 FUNC_2(VAR_27, VAR_6, VAR_22);
 FUNC_2(VAR_27, VAR_5, VAR_23);

 FUNC_2(VAR_27, VAR_0, VAR_19);
 FUNC_2(VAR_27, VAR_13, VAR_25);
 FUNC_2(VAR_27, VAR_7, VAR_20);

 FUNC_1(VAR_27);
}
