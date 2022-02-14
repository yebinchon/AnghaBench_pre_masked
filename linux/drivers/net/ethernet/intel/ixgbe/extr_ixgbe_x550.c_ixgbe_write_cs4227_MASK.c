
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* write_link_unlocked ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ link; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_0, u16 VAR_1, u16 VAR_2)
{
 return VAR_0->link.ops.write_link_unlocked(VAR_0, VAR_0->link.addr, VAR_1, VAR_2);
}
