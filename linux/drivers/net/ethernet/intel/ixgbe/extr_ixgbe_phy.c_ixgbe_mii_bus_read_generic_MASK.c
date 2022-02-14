
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_10 ;
 int FUNC_2 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_11, int VAR_12,
          int VAR_13, u32 VAR_14)
{
 u32 VAR_15, VAR_16;
 s32 VAR_17;

 if (VAR_11->mac.ops.acquire_swfw_sync(VAR_11, VAR_14))
  return -VAR_0;

 VAR_15 = VAR_12 << VAR_5;
 if (VAR_13 & VAR_10) {
  VAR_15 |= VAR_13 & FUNC_0(21, 0);
  VAR_16 = VAR_15 | VAR_1 | VAR_3;
 } else {
  VAR_15 |= (VAR_13 & FUNC_0(5, 0)) << VAR_2;
  VAR_16 = VAR_15 | VAR_4 |
   VAR_7 | VAR_3;
 }

 VAR_17 = FUNC_2(VAR_11, VAR_16);
 if (VAR_17 < 0)
  goto mii_bus_read_done;




 if (!(VAR_13 & VAR_10))
  goto do_mii_bus_read;

 VAR_16 = VAR_15 | VAR_6 | VAR_3;
 VAR_17 = FUNC_2(VAR_11, VAR_16);
 if (VAR_17 < 0)
  goto mii_bus_read_done;

do_mii_bus_read:
 VAR_17 = FUNC_1(VAR_11, VAR_8);
 VAR_17 = (VAR_17 >> VAR_9) & FUNC_0(16, 0);

mii_bus_read_done:
 VAR_11->mac.ops.release_swfw_sync(VAR_11, VAR_14);
 return VAR_17;
}
