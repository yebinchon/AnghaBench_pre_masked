
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_2__ phy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_1(struct ixgbe_hw *VAR_5)
{
 u16 VAR_6 = 0;

 if (VAR_5->device_id != VAR_0)
  return 0;


 VAR_5->phy.ops.read_reg(VAR_5, VAR_2,
        VAR_4, &VAR_6);

 if (!(VAR_6 & VAR_3))
  return 0;

 return VAR_1;
}
