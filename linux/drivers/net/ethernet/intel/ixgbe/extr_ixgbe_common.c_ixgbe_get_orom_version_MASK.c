
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_nvm_version {int or_valid; int or_major; int or_build; int or_patch; } ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;

void FUNC_3(struct ixgbe_hw *VAR_7,
       struct ixgbe_nvm_version *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11;

 VAR_8->or_valid = 0;

 VAR_7->eeprom.ops.read(VAR_7, VAR_3, &VAR_9);


 if (VAR_9 == 0x0 || VAR_9 == VAR_0)
  return;

 VAR_7->eeprom.ops.read(VAR_7, VAR_9 + VAR_1, &VAR_10);
 VAR_7->eeprom.ops.read(VAR_7, VAR_9 + VAR_2, &VAR_11);


 if ((VAR_11 | VAR_10) == 0x0 ||
     VAR_11 == VAR_6 ||
     VAR_10 == VAR_6)
  return;

 VAR_8->or_valid = 1;
 VAR_8->or_major = VAR_11 >> VAR_5;
 VAR_8->or_build = (VAR_11 << VAR_5) |
       (VAR_10 >> VAR_5);
 VAR_8->or_patch = VAR_10 & VAR_4;
}
