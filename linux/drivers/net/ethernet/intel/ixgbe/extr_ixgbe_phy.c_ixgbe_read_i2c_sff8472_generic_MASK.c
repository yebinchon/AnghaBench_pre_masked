
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int (* read_i2c_byte ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ,int *) ;

s32 FUNC_1(struct ixgbe_hw *VAR_1, u8 VAR_2,
       u8 *VAR_3)
{
 return VAR_1->phy.ops.read_i2c_byte(VAR_1, VAR_2,
      VAR_0,
      VAR_3);
}
