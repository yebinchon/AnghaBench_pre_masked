
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int semaphore_delay; } ;
struct TYPE_6__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_4__ eeprom; TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_hw*,int ) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6 = VAR_5->phy.phy_semaphore_mask;
 s32 VAR_7;
 u16 VAR_8;
 u8 VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = VAR_5->mac.ops.acquire_swfw_sync(VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_5, "semaphore failed with %d\n", VAR_7);
   FUNC_4(VAR_0);
   continue;
  }


  VAR_7 = FUNC_1(VAR_5, VAR_4, &VAR_8);
  if (!VAR_7 && VAR_8 == VAR_1)
   goto out;

  if (VAR_7 || VAR_8 != VAR_2)
   break;


  VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_6);
  FUNC_4(VAR_0);
 }

 if (VAR_9 == VAR_3) {
  VAR_7 = VAR_5->mac.ops.acquire_swfw_sync(VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_5, "semaphore failed with %d\n", VAR_7);
   return;
  }
 }


 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_5, "CS4227 reset failed: %d", VAR_7);
  goto out;
 }




 FUNC_3(VAR_5, VAR_4,
      VAR_2);
 VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_6);
 FUNC_11(10000, 12000);
 VAR_7 = VAR_5->mac.ops.acquire_swfw_sync(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_5, "semaphore failed with %d", VAR_7);
  return;
 }


 VAR_7 = FUNC_3(VAR_5, VAR_4,
        VAR_1);

out:
 VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_6);
 FUNC_4(VAR_5->eeprom.semaphore_delay);
}
