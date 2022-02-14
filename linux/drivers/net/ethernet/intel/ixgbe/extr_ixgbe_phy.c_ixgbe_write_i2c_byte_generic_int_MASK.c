
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct ixgbe_hw*,scalar_t__) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,scalar_t__) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_7 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_8 (struct ixgbe_hw*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_1, u8 VAR_2,
         u8 VAR_3, u8 VAR_4, bool VAR_5)
{
 s32 VAR_6;
 u32 VAR_7 = 1;
 u32 VAR_8 = 0;
 u32 VAR_9 = VAR_1->phy.phy_semaphore_mask;

 if (VAR_5 && VAR_1->mac.ops.acquire_swfw_sync(VAR_1, VAR_9))
  return VAR_0;

 do {
  FUNC_4(VAR_1);

  VAR_6 = FUNC_1(VAR_1, VAR_3);
  if (VAR_6 != 0)
   goto fail;

  VAR_6 = FUNC_2(VAR_1);
  if (VAR_6 != 0)
   goto fail;

  VAR_6 = FUNC_1(VAR_1, VAR_2);
  if (VAR_6 != 0)
   goto fail;

  VAR_6 = FUNC_2(VAR_1);
  if (VAR_6 != 0)
   goto fail;

  VAR_6 = FUNC_1(VAR_1, VAR_4);
  if (VAR_6 != 0)
   goto fail;

  VAR_6 = FUNC_2(VAR_1);
  if (VAR_6 != 0)
   goto fail;

  FUNC_5(VAR_1);
  if (VAR_5)
   VAR_1->mac.ops.release_swfw_sync(VAR_1, VAR_9);
  return 0;

fail:
  FUNC_3(VAR_1);
  VAR_8++;
  if (VAR_8 < VAR_7)
   FUNC_0(VAR_1, "I2C byte write error - Retrying.\n");
  else
   FUNC_0(VAR_1, "I2C byte write error.\n");
 } while (VAR_8 < VAR_7);

 if (VAR_5)
  VAR_1->mac.ops.release_swfw_sync(VAR_1, VAR_9);

 return VAR_6;
}
