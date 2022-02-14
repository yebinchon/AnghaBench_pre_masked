
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flow_type; } ;
union ixgbe_atr_hash_dword {TYPE_1__ formatted; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;
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
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 int FUNC_1 (struct ixgbe_hw*,char*,...) ;
 int FUNC_2 (union ixgbe_atr_hash_dword,union ixgbe_atr_hash_dword) ;

s32 FUNC_3(struct ixgbe_hw *VAR_10,
       union ixgbe_atr_hash_dword VAR_11,
       union ixgbe_atr_hash_dword VAR_12,
       u8 VAR_13)
{
 u64 VAR_14;
 u8 VAR_15;
 bool VAR_16;
 u32 VAR_17;





 VAR_16 = !!(VAR_11.formatted.flow_type & VAR_0);
 VAR_15 = VAR_11.formatted.flow_type &
      (VAR_0 - 1);
 switch (VAR_15) {
 case 131:
 case 129:
 case 133:
 case 130:
 case 128:
 case 132:
  break;
 default:
  FUNC_1(VAR_10, " Error on flow type input\n");
  return VAR_1;
 }


 VAR_17 = VAR_2 | VAR_3 |
    VAR_5 | VAR_6;
 VAR_17 |= (u32)VAR_15 << VAR_4;
 VAR_17 |= (u32)VAR_13 << VAR_7;
 if (VAR_16)
  VAR_17 |= VAR_8;





 VAR_14 = (u64)VAR_17 << 32;
 VAR_14 |= FUNC_2(VAR_11, VAR_12);
 FUNC_0(VAR_10, VAR_9, VAR_14);

 FUNC_1(VAR_10, "Tx Queue=%x hash=%x\n", VAR_13, (u32)VAR_14);

 return 0;
}
