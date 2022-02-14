
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
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*,char*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int) ;
 int FUNC_5 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_10, u32 VAR_11,
           u32 VAR_12, u32 *VAR_13)
{
 u32 VAR_14 = VAR_2 | VAR_1;
 u32 VAR_15, VAR_16;
 s32 VAR_17;

 VAR_17 = VAR_10->mac.ops.acquire_swfw_sync(VAR_10, VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_10, ((void*)0));
 if (VAR_17)
  goto out;

 VAR_15 = ((VAR_11 << VAR_3) |
     (VAR_12 << VAR_7));


 FUNC_1(VAR_10, VAR_8, VAR_15);

 VAR_17 = FUNC_3(VAR_10, &VAR_15);

 if ((VAR_15 & VAR_6) != 0) {
  VAR_16 = (VAR_15 & VAR_4) >>
    VAR_5;
  FUNC_2(VAR_10, "Failed to read, error %x\n", VAR_16);
  return VAR_0;
 }

 if (!VAR_17)
  *VAR_13 = FUNC_0(VAR_10, VAR_9);

out:
 VAR_10->mac.ops.release_swfw_sync(VAR_10, VAR_14);
 return VAR_17;
}
