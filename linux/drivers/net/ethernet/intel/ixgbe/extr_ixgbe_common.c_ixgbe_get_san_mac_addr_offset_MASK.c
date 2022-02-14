
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int *) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_1,
     u16 *VAR_2)
{
 s32 VAR_3;





 VAR_3 = VAR_1->eeprom.ops.read(VAR_1, VAR_0,
          VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1, "eeprom read at offset %d failed\n",
         VAR_0);

 return VAR_3;
}
