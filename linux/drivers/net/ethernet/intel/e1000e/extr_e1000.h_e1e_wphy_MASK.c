
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* write_reg ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static inline s32 FUNC_1(struct e1000_hw *VAR_0, u32 VAR_1, u16 VAR_2)
{
 return VAR_0->phy.ops.write_reg(VAR_0, VAR_1, VAR_2);
}
