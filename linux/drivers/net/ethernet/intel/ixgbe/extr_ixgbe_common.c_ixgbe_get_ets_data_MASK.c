
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_4, u16 *VAR_5,
         u16 *VAR_6)
{
 s32 VAR_7;

 VAR_7 = VAR_4->eeprom.ops.read(VAR_4, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 if ((*VAR_6 == 0x0000) || (*VAR_6 == 0xFFFF))
  return VAR_3;

 VAR_7 = VAR_4->eeprom.ops.read(VAR_4, *VAR_6, VAR_5);
 if (VAR_7)
  return VAR_7;

 if ((*VAR_5 & VAR_2) != VAR_1)
  return VAR_3;

 return 0;
}
