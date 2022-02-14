
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;int (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_4,
            u16 *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7;
 u16 VAR_8 = 0;





 VAR_6 = VAR_4->eeprom.ops.read(VAR_4, 0, &VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_4, "EEPROM read failed\n");
  return VAR_6;
 }

 if (VAR_4->mac.ops.acquire_swfw_sync(VAR_4, VAR_3))
  return VAR_2;

 VAR_6 = VAR_4->eeprom.ops.calc_checksum(VAR_4);
 if (VAR_6 < 0)
  goto out;

 VAR_7 = (u16)(VAR_6 & 0xffff);




 VAR_6 = FUNC_1(VAR_4, VAR_0,
      &VAR_8);
 if (VAR_6)
  goto out;




 if (VAR_8 != VAR_7) {
  FUNC_0(VAR_4, "Invalid EEPROM checksum");
  VAR_6 = VAR_1;
 }


 if (VAR_5)
  *VAR_5 = VAR_7;

out:
 VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_3);

 return VAR_6;
}
