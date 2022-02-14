
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_27, u64 *VAR_28)
{
 u32 VAR_29, VAR_30, VAR_31;
 u32 VAR_32, VAR_33;
 struct e1000_hw *VAR_34 = &VAR_27->hw;






 VAR_33 = 0xFFFFF833;

 VAR_30 = FUNC_3(VAR_16);
 VAR_29 = (FUNC_3(VAR_16) & VAR_33);
 FUNC_4(VAR_16, VAR_33);
 VAR_31 = FUNC_3(VAR_16) & VAR_33;
 if (VAR_29 != VAR_31) {
  FUNC_2(VAR_25, "failed STATUS register test got: "
        "0x%08X expected: 0x%08X\n", VAR_31, VAR_29);
  *VAR_28 = 1;
  return 1;
 }

 FUNC_4(VAR_16, VAR_30);

 FUNC_0(VAR_3, 0xFFFFFFFF, 0xFFFFFFFF);
 FUNC_0(VAR_2, 0x0000FFFF, 0xFFFFFFFF);
 FUNC_0(VAR_5, 0x0000FFFF, 0xFFFFFFFF);
 FUNC_0(VAR_24, 0x0000FFFF, 0xFFFFFFFF);

 FUNC_0(VAR_15, 0x0000FFFF, 0xFFFFFFFF);
 FUNC_0(VAR_10, 0xFFFFFFFF, 0xFFFFFFFF);
 FUNC_0(VAR_13, 0x000FFF80, 0x000FFFFF);
 FUNC_0(VAR_12, 0x0000FFFF, 0x0000FFFF);
 FUNC_0(VAR_14, 0x0000FFFF, 0x0000FFFF);
 FUNC_0(VAR_4, 0x0000FFF8, 0x0000FFF8);
 FUNC_0(VAR_6, 0x0000FFFF, 0x0000FFFF);
 FUNC_0(VAR_22, 0x3FFFFFFF, 0x3FFFFFFF);
 FUNC_0(VAR_18, 0xFFFFFFFF, 0xFFFFFFFF);
 FUNC_0(VAR_20, 0x000FFF80, 0x000FFFFF);

 FUNC_1(VAR_9, 0xFFFFFFFF, 0x00000000);

 VAR_30 = 0x06DFB3FE;
 FUNC_1(VAR_9, VAR_30, 0x003FFFFB);
 FUNC_1(VAR_17, 0xFFFFFFFF, 0x00000000);

 if (VAR_34->mac_type >= VAR_26) {
  FUNC_1(VAR_9, VAR_30, 0xFFFFFFFF);
  FUNC_0(VAR_11, 0xFFFFFFF0, 0xFFFFFFFF);
  FUNC_0(VAR_23, 0xC000FFFF, 0x0000FFFF);
  FUNC_0(VAR_19, 0xFFFFFFF0, 0xFFFFFFFF);
  FUNC_0(VAR_21, 0x0000FFFF, 0x0000FFFF);
  VAR_29 = VAR_1;
  for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++) {
   FUNC_0(VAR_8 + (((VAR_32 << 1) + 1) << 2),
      0x8003FFFF, 0xFFFFFFFF);
  }
 } else {
  FUNC_1(VAR_9, 0xFFFFFFFF, 0x01FFFFFF);
  FUNC_0(VAR_11, 0xFFFFF000, 0xFFFFFFFF);
  FUNC_0(VAR_23, 0x0000FFFF, 0x0000FFFF);
  FUNC_0(VAR_19, 0xFFFFF000, 0xFFFFFFFF);
 }

 VAR_29 = VAR_0;
 for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++)
  FUNC_0(VAR_7 + (VAR_32 << 2), 0xFFFFFFFF, 0xFFFFFFFF);

 *VAR_28 = 0;
 return 0;
}
