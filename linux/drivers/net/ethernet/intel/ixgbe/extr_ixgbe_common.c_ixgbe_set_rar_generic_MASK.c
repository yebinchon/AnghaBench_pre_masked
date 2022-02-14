
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* set_vmdq ) (struct ixgbe_hw*,scalar_t__,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_5 (struct ixgbe_hw*,char*,scalar_t__) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__,scalar_t__) ;

s32 FUNC_7(struct ixgbe_hw *VAR_2, u32 VAR_3, u8 *VAR_4, u32 VAR_5,
     u32 VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9 = VAR_2->mac.num_rar_entries;


 if (VAR_3 >= VAR_9) {
  FUNC_5(VAR_2, "RAR index %d is out of range.\n", VAR_3);
  return VAR_0;
 }


 VAR_2->mac.ops.set_vmdq(VAR_2, VAR_3, VAR_5);





 VAR_7 = ((u32)VAR_4[0] |
     ((u32)VAR_4[1] << 8) |
     ((u32)VAR_4[2] << 16) |
     ((u32)VAR_4[3] << 24));





 VAR_8 = FUNC_2(VAR_2, FUNC_0(VAR_3));
 VAR_8 &= ~(0x0000FFFF | VAR_1);
 VAR_8 |= ((u32)VAR_4[4] | ((u32)VAR_4[5] << 8));

 if (VAR_6 != 0)
  VAR_8 |= VAR_1;





 FUNC_4(VAR_2, FUNC_1(VAR_3), VAR_7);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2, FUNC_0(VAR_3), VAR_8);

 return 0;
}
