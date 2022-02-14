
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int link_up; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_12)
{
 struct ixgbe_hw *VAR_13 = &VAR_12->hw;
 bool VAR_14 = VAR_12->link_up;
 u32 VAR_15, VAR_16;
 u32 VAR_17;
 u32 VAR_18;


 VAR_18 = FUNC_0(VAR_13, VAR_8);
 VAR_18 |= VAR_9;
 FUNC_2(VAR_13, VAR_8, VAR_18);

 VAR_18 = FUNC_0(VAR_13, VAR_4);
 VAR_18 |= VAR_5;
 FUNC_2(VAR_13, VAR_4, VAR_18);





 VAR_15 = FUNC_0(VAR_13, VAR_10) &
  VAR_11;
 VAR_16 = FUNC_0(VAR_13, VAR_6) &
  VAR_7;
 if (VAR_15 && VAR_16)
  return;





 if (!VAR_14) {
  VAR_18 = FUNC_0(VAR_13, VAR_2);
  VAR_18 |= VAR_3;
  FUNC_2(VAR_13, VAR_2, VAR_18);

  VAR_18 = FUNC_0(VAR_13, VAR_0);
  VAR_18 |= VAR_1;
  FUNC_2(VAR_13, VAR_0, VAR_18);

  FUNC_1(VAR_13);
  FUNC_3(3);
 }


 VAR_17 = 20;
 do {
  FUNC_3(10);
  VAR_15 = FUNC_0(VAR_13, VAR_10) &
   VAR_11;
  VAR_16 = FUNC_0(VAR_13, VAR_6) &
   VAR_7;
 } while (!(VAR_15 && VAR_16) && VAR_17--);


 if (!VAR_14) {
  VAR_18 = FUNC_0(VAR_13, VAR_2);
  VAR_18 &= ~VAR_3;
  FUNC_2(VAR_13, VAR_2, VAR_18);

  VAR_18 = FUNC_0(VAR_13, VAR_0);
  VAR_18 &= ~VAR_1;
  FUNC_2(VAR_13, VAR_0, VAR_18);

  FUNC_1(VAR_13);
 }
}
