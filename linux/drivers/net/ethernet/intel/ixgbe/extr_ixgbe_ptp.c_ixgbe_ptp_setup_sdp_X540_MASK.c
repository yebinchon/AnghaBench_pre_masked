
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_2__ {int cycle_last; } ;
struct cyclecounter {int shift; int mult; } ;
struct ixgbe_adapter {int flags2; int tmreg_lock; TYPE_1__ hw_tc; struct ixgbe_hw hw; struct cyclecounter hw_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int,int*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_adapter *VAR_14)
{
 struct cyclecounter *VAR_15 = &VAR_14->hw_cc;
 struct ixgbe_hw *VAR_16 = &VAR_14->hw;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 u64 VAR_24 = 0, VAR_25 = 0, VAR_26;
 unsigned long VAR_27;


 FUNC_2(VAR_16, VAR_8, 0x0);
 FUNC_1(VAR_16);

 if (!(VAR_14->flags2 & VAR_5))
  return;

 VAR_17 = FUNC_0(VAR_16, VAR_2);




 VAR_17 |= VAR_3 |
  VAR_4;




 VAR_18 = (VAR_9 |
    VAR_11 |
    VAR_10);




 VAR_26 = FUNC_3((VAR_12 << VAR_15->shift), VAR_15->mult);
 VAR_19 = (u32)(VAR_26);
 VAR_20 = (u32)(VAR_26 >> 32);


 FUNC_5(&VAR_14->tmreg_lock, VAR_27);
 VAR_24 = FUNC_7(&VAR_14->hw_tc);
 VAR_25 = VAR_14->hw_tc.cycle_last;
 FUNC_6(&VAR_14->tmreg_lock, VAR_27);


 FUNC_4(VAR_24, VAR_13, &VAR_23);




 VAR_23 = (VAR_13 - VAR_23);


 VAR_25 += FUNC_3(((u64)VAR_23 << VAR_15->shift), VAR_15->mult);
 VAR_21 = (u32)VAR_25;
 VAR_22 = (u32)(VAR_25 >> 32);

 FUNC_2(VAR_16, VAR_1, VAR_19);
 FUNC_2(VAR_16, VAR_0, VAR_20);
 FUNC_2(VAR_16, VAR_7, VAR_21);
 FUNC_2(VAR_16, VAR_6, VAR_22);

 FUNC_2(VAR_16, VAR_2, VAR_17);
 FUNC_2(VAR_16, VAR_8, VAR_18);

 FUNC_1(VAR_16);
}
