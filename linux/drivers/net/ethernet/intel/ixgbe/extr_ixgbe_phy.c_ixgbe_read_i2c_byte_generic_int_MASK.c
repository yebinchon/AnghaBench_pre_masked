
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int) ;
 int FUNC_3 (struct ixgbe_hw*,int) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int) ;
 int FUNC_11 (struct ixgbe_hw*,int) ;
 int FUNC_12 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_13(struct ixgbe_hw *VAR_3, u8 VAR_4,
        u8 VAR_5, u8 *VAR_6, bool VAR_7)
{
 s32 VAR_8;
 u32 VAR_9 = 10;
 u32 VAR_10 = 0;
 u32 VAR_11 = VAR_3->phy.phy_semaphore_mask;
 bool VAR_12 = 1;

 if (VAR_3->mac.type >= VAR_2)
  VAR_9 = 3;
 if (FUNC_8(VAR_3, VAR_4, VAR_5))
  VAR_9 = VAR_1;

 *VAR_6 = 0;

 do {
  if (VAR_7 && VAR_3->mac.ops.acquire_swfw_sync(VAR_3, VAR_11))
   return VAR_0;

  FUNC_6(VAR_3);


  VAR_8 = FUNC_3(VAR_3, VAR_5);
  if (VAR_8 != 0)
   goto fail;

  VAR_8 = FUNC_4(VAR_3);
  if (VAR_8 != 0)
   goto fail;

  VAR_8 = FUNC_3(VAR_3, VAR_4);
  if (VAR_8 != 0)
   goto fail;

  VAR_8 = FUNC_4(VAR_3);
  if (VAR_8 != 0)
   goto fail;

  FUNC_6(VAR_3);


  VAR_8 = FUNC_3(VAR_3, (VAR_5 | 0x1));
  if (VAR_8 != 0)
   goto fail;

  VAR_8 = FUNC_4(VAR_3);
  if (VAR_8 != 0)
   goto fail;

  VAR_8 = FUNC_1(VAR_3, VAR_6);
  if (VAR_8 != 0)
   goto fail;

  VAR_8 = FUNC_2(VAR_3, VAR_12);
  if (VAR_8 != 0)
   goto fail;

  FUNC_7(VAR_3);
  if (VAR_7)
   VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_11);
  return 0;

fail:
  FUNC_5(VAR_3);
  if (VAR_7) {
   VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_11);
   FUNC_9(100);
  }
  VAR_10++;
  if (VAR_10 < VAR_9)
   FUNC_0(VAR_3, "I2C byte read error - Retrying.\n");
  else
   FUNC_0(VAR_3, "I2C byte read error.\n");

 } while (VAR_10 < VAR_9);

 return VAR_8;
}
