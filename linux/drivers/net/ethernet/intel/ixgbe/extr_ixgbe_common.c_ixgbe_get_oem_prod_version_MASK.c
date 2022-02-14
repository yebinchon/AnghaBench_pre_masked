
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_nvm_version {int oem_valid; int oem_major; int oem_minor; int oem_release; } ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ixgbe_hw*,int,int*) ;
 int FUNC_1 (struct ixgbe_hw*,int,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int,int*) ;

void FUNC_5(struct ixgbe_hw *VAR_10,
    struct ixgbe_nvm_version *VAR_11)
{
 u16 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11->oem_valid = 0;
 VAR_10->eeprom.ops.read(VAR_10, VAR_6, &VAR_16);


 if (VAR_16 == 0x0 || VAR_16 == VAR_0)
  return;


 VAR_10->eeprom.ops.read(VAR_10, VAR_16, &VAR_14);
 VAR_10->eeprom.ops.read(VAR_10, VAR_16 + VAR_2, &VAR_15);


 if (VAR_14 != VAR_3 ||
     (VAR_15 & VAR_1) != 0x0)
  return;

 VAR_10->eeprom.ops.read(VAR_10, VAR_16 + VAR_5, &VAR_13);
 VAR_10->eeprom.ops.read(VAR_10, VAR_16 + VAR_4, &VAR_12);


 if ((VAR_12 | VAR_13) == 0x0 ||
     VAR_12 == VAR_7 || VAR_13 == VAR_7)
  return;

 VAR_11->oem_major = VAR_13 >> VAR_9;
 VAR_11->oem_minor = VAR_13 & VAR_8;
 VAR_11->oem_release = VAR_12;
 VAR_11->oem_valid = 1;
}
