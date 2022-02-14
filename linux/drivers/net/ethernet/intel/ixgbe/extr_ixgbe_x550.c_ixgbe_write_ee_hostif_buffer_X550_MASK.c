
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_3__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,size_t,size_t) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_1,
          u16 VAR_2, u16 VAR_3,
          u16 *VAR_4)
{
 s32 VAR_5 = 0;
 u32 VAR_6 = 0;


 VAR_5 = VAR_1->mac.ops.acquire_swfw_sync(VAR_1, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_1, "EEPROM write buffer - semaphore failed\n");
  return VAR_5;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1, VAR_2 + VAR_6,
        VAR_4[VAR_6]);
  if (VAR_5) {
   FUNC_0(VAR_1, "Eeprom buffered write failed\n");
   break;
  }
 }

 VAR_1->mac.ops.release_swfw_sync(VAR_1, VAR_0);

 return VAR_5;
}
