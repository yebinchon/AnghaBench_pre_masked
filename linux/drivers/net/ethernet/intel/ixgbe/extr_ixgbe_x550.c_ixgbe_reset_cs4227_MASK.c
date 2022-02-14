
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_11)
{
 s32 VAR_12;
 u32 VAR_13;
 u16 VAR_14;
 u8 VAR_15;


 VAR_12 = FUNC_2(VAR_11, VAR_10, &VAR_15);
 if (VAR_12)
  return VAR_12;
 VAR_15 |= VAR_8;
 VAR_12 = FUNC_3(VAR_11, VAR_10, VAR_15);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_11, VAR_9, &VAR_15);
 if (VAR_12)
  return VAR_12;
 VAR_15 &= ~VAR_8;
 VAR_12 = FUNC_3(VAR_11, VAR_9, VAR_15);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_11, VAR_10, &VAR_15);
 if (VAR_12)
  return VAR_12;
 VAR_15 &= ~VAR_8;
 VAR_12 = FUNC_3(VAR_11, VAR_10, VAR_15);
 if (VAR_12)
  return VAR_12;

 FUNC_5(VAR_5, VAR_5 + 100);

 VAR_12 = FUNC_2(VAR_11, VAR_10, &VAR_15);
 if (VAR_12)
  return VAR_12;
 VAR_15 |= VAR_8;
 VAR_12 = FUNC_3(VAR_11, VAR_10, VAR_15);
 if (VAR_12)
  return VAR_12;


 FUNC_4(VAR_4);
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_12 = FUNC_1(VAR_11, VAR_3,
        &VAR_14);
  if (!VAR_12 && VAR_14 == VAR_1)
   break;
  FUNC_4(VAR_0);
 }
 if (VAR_13 == VAR_6) {
  FUNC_0(VAR_11, "CS4227 reset did not complete\n");
  return VAR_7;
 }

 VAR_12 = FUNC_1(VAR_11, VAR_2, &VAR_14);
 if (VAR_12 || !(VAR_14 & VAR_1)) {
  FUNC_0(VAR_11, "CS4227 EEPROM did not load successfully\n");
  return VAR_7;
 }

 return 0;
}
