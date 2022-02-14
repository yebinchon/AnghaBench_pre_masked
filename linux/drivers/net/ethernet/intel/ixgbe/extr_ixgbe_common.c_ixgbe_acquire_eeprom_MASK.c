
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 if (VAR_8->mac.ops.acquire_swfw_sync(VAR_8, VAR_7) != 0)
  return VAR_6;

 VAR_9 = FUNC_1(VAR_8, FUNC_0(VAR_8));


 VAR_9 |= VAR_2;
 FUNC_3(VAR_8, FUNC_0(VAR_8), VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_1(VAR_8, FUNC_0(VAR_8));
  if (VAR_9 & VAR_1)
   break;
  FUNC_7(5);
 }


 if (!(VAR_9 & VAR_1)) {
  VAR_9 &= ~VAR_2;
  FUNC_3(VAR_8, FUNC_0(VAR_8), VAR_9);
  FUNC_4(VAR_8, "Could not acquire EEPROM grant\n");

  VAR_8->mac.ops.release_swfw_sync(VAR_8, VAR_7);
  return VAR_5;
 }



 VAR_9 &= ~(VAR_0 | VAR_3);
 FUNC_3(VAR_8, FUNC_0(VAR_8), VAR_9);
 FUNC_2(VAR_8);
 FUNC_7(1);
 return 0;
}
