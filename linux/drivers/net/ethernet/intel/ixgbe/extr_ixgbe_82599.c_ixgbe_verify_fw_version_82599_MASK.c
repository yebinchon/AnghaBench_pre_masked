
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct ixgbe_hw {TYPE_3__ eeprom; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int,int*) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_5)
{
 s32 VAR_6 = VAR_0;
 u16 VAR_7, VAR_8;
 u16 VAR_9;
 u16 VAR_10 = 0;


 if (VAR_5->phy.media_type != VAR_4)
  return 0;


 VAR_9 = VAR_3;
 if (VAR_5->eeprom.ops.read(VAR_5, VAR_9, &VAR_7))
  goto fw_version_err;

 if (VAR_7 == 0 || VAR_7 == 0xFFFF)
  return VAR_0;


 VAR_9 = VAR_7 + VAR_1;
 if (VAR_5->eeprom.ops.read(VAR_5, VAR_9, &VAR_8))
  goto fw_version_err;

 if (VAR_8 == 0 || VAR_8 == 0xFFFF)
  return VAR_0;


 VAR_9 = VAR_8 + VAR_2;
 if (VAR_5->eeprom.ops.read(VAR_5, VAR_9, &VAR_10))
  goto fw_version_err;

 if (VAR_10 > 0x5)
  VAR_6 = 0;

 return VAR_6;

fw_version_err:
 FUNC_0(VAR_5, "eeprom read at offset %d failed\n", VAR_9);
 return VAR_0;
}
