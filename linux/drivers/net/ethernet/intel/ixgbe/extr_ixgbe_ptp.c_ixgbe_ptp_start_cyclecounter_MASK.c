
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int tmreg_lock; int hw_cc; int base_incval; struct ixgbe_hw hw; } ;
struct cyclecounter {int mult; int shift; void* read; int mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (int ,int) ;





 int FUNC_7 (struct ixgbe_adapter*,int*,int*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_8 (int *,struct cyclecounter*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

void FUNC_12(struct ixgbe_adapter *VAR_15)
{
 struct ixgbe_hw *VAR_16 = &VAR_15->hw;
 struct cyclecounter VAR_17;
 unsigned long VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 VAR_17.mask = FUNC_1(64);
 VAR_17.mult = 1;
 VAR_17.shift = 0;

 switch (VAR_16->mac.type) {
 case 129:






  VAR_21 = FUNC_3(VAR_16, FUNC_2(0));
  if (!(VAR_21 & VAR_2)) {
   VAR_17.mult = 3;
   VAR_17.shift = 2;
  }

 case 128:
 case 130:
  VAR_17.read = VAR_14;


  FUNC_5(VAR_16, VAR_7, 0);
  FUNC_5(VAR_16, VAR_6, 0);
  FUNC_5(VAR_16, VAR_5, 0);
  VAR_20 = FUNC_3(VAR_16, VAR_9);
  FUNC_5(VAR_16, VAR_9,
    VAR_20 & ~VAR_10);
  FUNC_5(VAR_16, VAR_11, VAR_12);
  FUNC_5(VAR_16, VAR_0, VAR_1);

  FUNC_4(VAR_16);
  break;
 case 131:
  VAR_17.read = VAR_13;

  FUNC_7(VAR_15, &VAR_17.shift, &VAR_19);
  FUNC_5(VAR_16, VAR_8, VAR_19);
  break;
 case 132:
  VAR_17.read = VAR_13;

  FUNC_7(VAR_15, &VAR_17.shift, &VAR_19);
  VAR_19 >>= VAR_4;
  VAR_17.shift -= VAR_4;
  FUNC_5(VAR_16, VAR_8,
    FUNC_0(VAR_3) | VAR_19);
  break;
 default:

  return;
 }


 FUNC_6(VAR_15->base_incval, VAR_19);
 FUNC_9();


 FUNC_10(&VAR_15->tmreg_lock, VAR_18);
 FUNC_8(&VAR_15->hw_cc, &VAR_17, sizeof(VAR_15->hw_cc));
 FUNC_11(&VAR_15->tmreg_lock, VAR_18);
}
