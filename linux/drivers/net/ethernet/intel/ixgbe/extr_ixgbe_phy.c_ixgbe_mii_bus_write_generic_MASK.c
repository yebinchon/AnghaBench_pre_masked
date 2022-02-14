
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_9, int VAR_10,
           int VAR_11, u16 VAR_12, u32 VAR_13)
{
 u32 VAR_14, VAR_15;
 s32 VAR_16;

 if (VAR_9->mac.ops.acquire_swfw_sync(VAR_9, VAR_13))
  return -VAR_0;

 FUNC_1(VAR_9, VAR_7, (u32)VAR_12);

 VAR_14 = VAR_10 << VAR_5;
 if (VAR_11 & VAR_8) {
  VAR_14 |= VAR_11 & FUNC_0(21, 0);
  VAR_15 = VAR_14 | VAR_1 | VAR_3;
 } else {
  VAR_14 |= (VAR_11 & FUNC_0(5, 0)) << VAR_2;
  VAR_15 = VAR_14 | VAR_4 | VAR_6 |
   VAR_3;
 }




 VAR_16 = FUNC_2(VAR_9, VAR_15);
 if (VAR_16 < 0 || !(VAR_11 & VAR_8))
  goto mii_bus_write_done;

 VAR_15 = VAR_14 | VAR_6 | VAR_3;
 VAR_16 = FUNC_2(VAR_9, VAR_15);

mii_bus_write_done:
 VAR_9->mac.ops.release_swfw_sync(VAR_9, VAR_13);
 return VAR_16;
}
