
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;int (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2,
        u16 *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;
 u16 VAR_6 = 0;






 VAR_4 = VAR_2->eeprom.ops.read(VAR_2, 0, &VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_2, "EEPROM read failed\n");
  return VAR_4;
 }

 VAR_4 = VAR_2->eeprom.ops.calc_checksum(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = (u16)(VAR_4 & 0xffff);

 VAR_4 = VAR_2->eeprom.ops.read(VAR_2, VAR_0, &VAR_6);
 if (VAR_4) {
  FUNC_0(VAR_2, "EEPROM read failed\n");
  return VAR_4;
 }




 if (VAR_6 != VAR_5)
  VAR_4 = VAR_1;


 if (VAR_3)
  *VAR_3 = VAR_5;

 return VAR_4;
}
