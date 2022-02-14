
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* write_reg ) (struct ixgbe_hw*,scalar_t__,int ,int ) ;int (* read_reg ) (struct ixgbe_hw*,scalar_t__,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,scalar_t__,int ,int *) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_5, u32 VAR_6)
{
 u16 VAR_7;

 if (VAR_6 >= VAR_3)
  return VAR_0;


 VAR_5->phy.ops.read_reg(VAR_5, VAR_2 + VAR_6,
        VAR_4, &VAR_7);
 VAR_7 |= VAR_1;
 VAR_5->phy.ops.write_reg(VAR_5, VAR_2 + VAR_6,
         VAR_4, VAR_7);

 return 0;
}
